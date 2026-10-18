; initial values

MVI 05
MOV 80

MVI 02
MOV 81

MVI 09
MOV 82

MVI 01
MOV 83


; pass 1
; compare 80 and 81

MVA 80
MOV F0
MVA 81
MOV F1

.label compare_1
MVA F0
JZ next_1
MVA F1
JZ swap_1

MVA F0
SUBI 01
MOV F0

MVA F1
SUBI 01
MOV F1

JMP compare_1

.label swap_1
MVA 80
MOV F2
MVA 81
MOV 80
MVA F2
MOV 81

.label next_1


; compare 81 and 82

MVA 81
MOV F0
MVA 82
MOV F1

.label compare_2
MVA F0
JZ next_2
MVA F1
JZ swap_2

MVA F0
SUBI 01
MOV F0

MVA F1
SUBI 01
MOV F1

JMP compare_2

.label swap_2
MVA 81
MOV F2
MVA 82
MOV 81
MVA F2
MOV 82

.label next_2


; compare 82 and 83

MVA 82
MOV F0
MVA 83
MOV F1

.label compare_3
MVA F0
JZ next_3
MVA F1
JZ swap_3

MVA F0
SUBI 01
MOV F0

MVA F1
SUBI 01
MOV F1

JMP compare_3

.label swap_3
MVA 82
MOV F2
MVA 83
MOV 82
MVA F2
MOV 83

.label next_3


; pass 2
; compare 80 and 81

MVA 80
MOV F0
MVA 81
MOV F1

.label compare_4
MVA F0
JZ next_4
MVA F1
JZ swap_4

MVA F0
SUBI 01
MOV F0

MVA F1
SUBI 01
MOV F1

JMP compare_4

.label swap_4
MVA 80
MOV F2
MVA 81
MOV 80
MVA F2
MOV 81

.label next_4


; compare 81 and 82

MVA 81
MOV F0
MVA 82
MOV F1

.label compare_5
MVA F0
JZ next_5
MVA F1
JZ swap_5

MVA F0
SUBI 01
MOV F0

MVA F1
SUBI 01
MOV F1

JMP compare_5

.label swap_5
MVA 81
MOV F2
MVA 82
MOV 81
MVA F2
MOV 82

.label next_5


; pass 3
; compare 80 and 81

MVA 80
MOV F0
MVA 81
MOV F1

.label compare_6
MVA F0
JZ done
MVA F1
JZ swap_6

MVA F0
SUBI 01
MOV F0

MVA F1
SUBI 01
MOV F1

JMP compare_6

.label swap_6
MVA 80
MOV F2
MVA 81
MOV 80
MVA F2
MOV 81

.label done
JMP done
