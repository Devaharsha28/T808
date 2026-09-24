# T808 Test Results

this file contains programs and algorithms that have been tested on the verilog implementation of T808.

all programs here were executed by loading the machine code into `programs/program.hex` and running the cpu using iverilog.


# Bubble Sort

tested a bubble sort on 4 unsigned 8 bit values.

initial values were

```text
05 02 09 01
```

expected result

```text
01 02 05 09
```

T808 does not have a less-than or greater-than instruction, so comparison was done by copying both values and decrementing them until one reached zero.

if the second value reaches zero first, the values are swapped.

the sort uses 3 temporary ram locations

```text
F0 - first comparison value
F1 - second comparison value
F2 - swap temporary
```


## Machine Code

```text
0905
0a80
0902
0a81
0909
0a82
0901
0a83
1680
0af0
1681
0af1
16f0
1010
16f1
1008
16f0
0201
0af0
16f1
0201
0af1
080a
1680
0af2
1681
0a80
16f2
0a81
1681
0af0
1682
0af1
16f0
1010
16f1
1008
16f0
0201
0af0
16f1
0201
0af1
080a
1681
0af2
1682
0a81
16f2
0a82
1682
0af0
1683
0af1
16f0
1010
16f1
1008
16f0
0201
0af0
16f1
0201
0af1
080a
1682
0af2
1683
0a82
16f2
0a83
1680
0af0
1681
0af1
16f0
1010
16f1
1008
16f0
0201
0af0
16f1
0201
0af1
080a
1680
0af2
1681
0a80
16f2
0a81
1681
0af0
1682
0af1
16f0
1010
16f1
1008
16f0
0201
0af0
16f1
0201
0af1
080a
1681
0af2
1682
0a81
16f2
0a82
1680
0af0
1681
0af1
16f0
1010
16f1
1008
16f0
0201
0af0
16f1
0201
0af1
080a
1680
0af2
1681
0a80
16f2
0a81
0700
```


## ASM Equivalent

```asm
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

compare_1:
MVA F0
JZA next_1
MVA F1
JZA swap_1

MVA F0
SUBI 01
MOV F0

MVA F1
SUBI 01
MOV F1

JMPS compare_1

swap_1:
MVA 80
MOV F2
MVA 81
MOV 80
MVA F2
MOV 81

next_1:


; compare 81 and 82

MVA 81
MOV F0
MVA 82
MOV F1

compare_2:
MVA F0
JZA next_2
MVA F1
JZA swap_2

MVA F0
SUBI 01
MOV F0

MVA F1
SUBI 01
MOV F1

JMPS compare_2

swap_2:
MVA 81
MOV F2
MVA 82
MOV 81
MVA F2
MOV 82

next_2:


; compare 82 and 83

MVA 82
MOV F0
MVA 83
MOV F1

compare_3:
MVA F0
JZA next_3
MVA F1
JZA swap_3

MVA F0
SUBI 01
MOV F0

MVA F1
SUBI 01
MOV F1

JMPS compare_3

swap_3:
MVA 82
MOV F2
MVA 83
MOV 82
MVA F2
MOV 83

next_3:


; pass 2
; compare 80 and 81

MVA 80
MOV F0
MVA 81
MOV F1

compare_4:
MVA F0
JZA next_4
MVA F1
JZA swap_4

MVA F0
SUBI 01
MOV F0

MVA F1
SUBI 01
MOV F1

JMPS compare_4

swap_4:
MVA 80
MOV F2
MVA 81
MOV 80
MVA F2
MOV 81

next_4:


; compare 81 and 82

MVA 81
MOV F0
MVA 82
MOV F1

compare_5:
MVA F0
JZA next_5
MVA F1
JZA swap_5

MVA F0
SUBI 01
MOV F0

MVA F1
SUBI 01
MOV F1

JMPS compare_5

swap_5:
MVA 81
MOV F2
MVA 82
MOV 81
MVA F2
MOV 82

next_5:


; pass 3
; compare 80 and 81

MVA 80
MOV F0
MVA 81
MOV F1

compare_6:
MVA F0
JZA done
MVA F1
JZA swap_6

MVA F0
SUBI 01
MOV F0

MVA F1
SUBI 01
MOV F1

JMPS compare_6

swap_6:
MVA 80
MOV F2
MVA 81
MOV 80
MVA F2
MOV 81

done:
JMPA 00
```


## Result

initial array

```text
05 02 09 01
```

after sorting

```text
01 02 05 09
```

the program completed execution and reached the final `JMPA 00` loop.

```text
PC=86  INST=0700
```

result: **working**
