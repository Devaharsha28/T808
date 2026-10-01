#include<stdio.h>
#include<string.h>

typedef struct labels{
char name[32];
int address;
}label;

char* opcode_hex(char* instruction);

int main(int argc , char* args[]){
FILE* file;
FILE* file_output;
char* comment;
int address = 0;
label labels[100];
int label_count = 0;

if(argc < 3){
    printf("bro give input and output file\n");
    return -1;
}

if(strlen(args[1]) >= 4 && strcmp(args[1] + strlen(args[1]) - 4, ".asm") == 0)
    printf("good job on crct filename\n");
else{
    printf("filename error , go fk urself\n");
    return -1;
}

file = fopen(args[1], "r");
file_output = fopen(args[2], "w");

if(file == NULL){
    printf("file error bruh\n");
    return -1;
}

if(file_output == NULL){
    printf("give output file name atleast\n");
    fclose(file);
    return -1;
}

char line[256];
char opcode[16];
char operand[32];

strcpy(opcode, "00");
strcpy(operand, "00");


//pass 1 , find labels
while(fgets(line, sizeof(line), file) != NULL){

comment = strchr(line, ';');
if(comment != NULL) *comment = '\0';

strcpy(operand, "00");

int tokens = sscanf(line, "%15s %31s", opcode, operand);

if(tokens <= 0) continue;

if(strcmp(opcode, ".label") == 0){

    if(tokens < 2){
        printf("label with no name\n");
        return -1;
    }

    if(label_count >= 100){
        printf("too many labels bro\n");
        return -1;
    }

    printf("label %s found at %02X\n", operand, address);

    strcpy(labels[label_count].name, operand);
    labels[label_count].address = address;
    label_count++;

    continue;
}

address++;
}


//pass 2 , actual shit
rewind(file);
address = 0;

strcpy(opcode, "00");
strcpy(operand, "00");

while(fgets(line, sizeof(line), file) != NULL){

comment = strchr(line, ';');
if(comment != NULL) *comment = '\0';

strcpy(operand, "00");

int tokens = sscanf(line, "%15s %31s", opcode, operand);

if(tokens <= 0) continue;
if(strcmp(opcode, ".label") == 0) continue;


//jmp jz jnz fake instructions cuz im not writing jmpa jmps manually every time
if(strcmp(opcode, "JMP") == 0 ||
   strcmp(opcode, "JZ") == 0 ||
   strcmp(opcode, "JNZ") == 0){

    int found = 0;

    for(int i = 0; i < label_count; i++){

        if(strcmp(operand, labels[i].name) == 0){

            found = 1;
            int offset;

            if(labels[i].address > address){

                offset = labels[i].address - address;

                if(strcmp(opcode, "JMP") == 0) strcpy(opcode, "JMPA");
                else if(strcmp(opcode, "JZ") == 0) strcpy(opcode, "JZA");
                else if(strcmp(opcode, "JNZ") == 0) strcpy(opcode, "JNZA");

            }

            else if(labels[i].address < address){

                offset = address - labels[i].address;

                if(strcmp(opcode, "JMP") == 0) strcpy(opcode, "JMPS");
                else if(strcmp(opcode, "JZ") == 0) strcpy(opcode, "JZS");
                else if(strcmp(opcode, "JNZ") == 0) strcpy(opcode, "JNZS");

            }

            else{

                offset = 0;

                if(strcmp(opcode, "JMP") == 0) strcpy(opcode, "JMPA");
                else if(strcmp(opcode, "JZ") == 0) strcpy(opcode, "JZA");
                else if(strcmp(opcode, "JNZ") == 0) strcpy(opcode, "JNZA");

            }

            if(offset > 255){
                printf("jump too far bro , %d doesnt fit in 8 bits\n", offset);
                return -1;
            }

            sprintf(operand, "%02X", offset);

            break;
        }
    }

    if(found == 0){
        printf("where tf is label %s\n", operand);
        return -1;
    }
}


char* hex = opcode_hex(opcode);

if(hex == NULL){
    printf("wtf is instruction [%s] at %02X\n", opcode, address);
    return -1;
}

printf("%02X : %s %s -> %s%s\n",
       address, opcode, operand, hex, operand);

fprintf(file_output, "%s%s\n", hex, operand);

address++;
}


fclose(file);
fclose(file_output);

printf("done somehow\n");

return 0;
}



char* opcode_hex(char* instruction){

if(strcmp(instruction, "NOP") == 0) return "00";
if(strcmp(instruction, "ADDI") == 0) return "01";
if(strcmp(instruction, "SUB1") == 0) return "02";
if(strcmp(instruction, "ANDI") == 0) return "03";
if(strcmp(instruction, "XOR1") == 0) return "04";
if(strcmp(instruction, "ORR1") == 0) return "05";
if(strcmp(instruction, "NOT") == 0) return "06";

if(strcmp(instruction, "JMPA") == 0) return "07";
if(strcmp(instruction, "JMPS") == 0) return "08";

if(strcmp(instruction, "MVI") == 0) return "09";
if(strcmp(instruction, "MOV") == 0) return "0A";

if(strcmp(instruction, "ADDM") == 0) return "0B";
if(strcmp(instruction, "SUBM") == 0) return "0C";
if(strcmp(instruction, "ANDM") == 0) return "0D";
if(strcmp(instruction, "XORM") == 0) return "0E";
if(strcmp(instruction, "ORRM") == 0) return "0F";

if(strcmp(instruction, "JZA") == 0) return "10";
if(strcmp(instruction, "JZS") == 0) return "11";

if(strcmp(instruction, "RR") == 0) return "12";
if(strcmp(instruction, "RL") == 0) return "13";
if(strcmp(instruction, "SHR") == 0) return "14";
if(strcmp(instruction, "SHL") == 0) return "15";

if(strcmp(instruction, "MVA") == 0) return "16";

if(strcmp(instruction, "JNZA") == 0) return "17";
if(strcmp(instruction, "JNZS") == 0) return "18";

return NULL;
}

