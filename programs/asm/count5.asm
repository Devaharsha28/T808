;initialise port 1 value
MVI FF
MOV 00

;initialise value 5 to acc
MVI 05

.label LOOP
SUBI 01
JNZ LOOP

MVA 00
MOV FC

.label DONE
JMP DONE
