.label start

MVI FF
MOV 00

JZ zero

ADDI 01
JNZ start

.label zero

NOP
JMP start
