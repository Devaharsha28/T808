; A = 0x12FF
MVI FF
MOV 80
MVI 12
MOV 81

; B = 0x0001
MVI 01
MOV 82
MVI 00
MOV 83

; low byte: A_lo + B_lo
MVA 80
ADDM 82
MOV 84
MVI 00
MOV 86
JNC lo_nc
MVI 01
MOV 86
.label lo_nc

; high byte, step 1: A_hi + B_hi
MVA 81
ADDM 83
MOV 85
MVI 00
MOV 87
JNC hi1_nc
MVI 01
MOV 87
.label hi1_nc

; high byte, step 2: add carry-in
MVA 85
ADDM 86
MOV 85
JNC hi2_nc
MVI 01
MOV 87
.label hi2_nc

; output: high byte on port 1, low byte on port 2
MVA 85
MOV FC
MVA 84
MOV FD

.label done
JMP done
