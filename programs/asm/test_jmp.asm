; carry flag: JC taken after carry set
MVI FF
ADDI 01
JC carry_ok
JMP fail1
.label carry_ok
; carry flag: JNC taken after carry clear
MVI 01
ADDI 01
JNC nocarry_ok
JMP fail2
.label nocarry_ok
; equality against RAM[00] = 03
MVI 03
MOV 00
MVI 03
JE eq_ok
JMP fail3
.label eq_ok
MVI 04
JE fail4
JNE ne_ok
JMP fail5
.label ne_ok
; backward JNE loop: count ACC up until it equals RAM[00]
MVI 00
.label count
ADDI 01
JNE count
JNE fail6
; backward JNC loop: count up until carry is set
MVI FD
.label wrap
ADDI 01
JNC wrap
JNC fail7
; all tests passed
MVI AA
MOV FC
.label done
JMP done
; failure reports, one code per test
.label fail1
MVI 01
JMP report
.label fail2
MVI 02
JMP report
.label fail3
MVI 03
JMP report
.label fail4
MVI 04
JMP report
.label fail5
MVI 05
JMP report
.label fail6
MVI 06
JMP report
.label fail7
MVI 07
JMP report
.label report
MOV FC
.label halt
JMP halt
