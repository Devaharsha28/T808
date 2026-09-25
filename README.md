# T808

This is a verilator implementation of my [T808-DLS](https://github.com/Devaharsha28/T808-DLS) CPU, which was previously made in Digital Logic Sim.

we will be using verilator so that we can understand verilog well enough while not sacrificing too much speed.

verilator is a tool used to generate C++ code from verilog code.

as verilator produces C++ code from verilog, we pretty much have a fast emulator too.


rtl folder contains all verilog files

tb folder contains testbench files

programs folder just contains hex file for rom

builds folder contains compiled files and is ignored by git



## running with verilator

the cpu can also be compiled and run using verilator with a C++ testbench.

verilator converts the verilog cpu into C++ code and the C++ testbench is used to control the cpu clock and read its outputs.

the verilator testbench is in

```
tb/cpu_tb.cpp
```

first put the program you want to run in

```
programs/program.hex
```

then compile the cpu and C++ testbench using

```bash
verilator --cc --exe --build \
    --Mdir Verilator_files \
    --top-module cpu \
    rtl/*.v \
    tb/cpu_tb.cpp
```

`--cc` tells verilator to generate a C++ model from the verilog files.

`--exe` tells verilator that we also have a C++ file which will be used with the generated model.

`--build` tells verilator to compile everything and create the executable.

`--Mdir Verilator_files` tells verilator to put the generated and compiled files inside the `Verilator_files` folder.

`--top-module cpu` tells verilator that `cpu` is the top level module.

after compilation the generated files will be inside

```
Verilator_files/
```

for ubuntu based systems the compiled cpu executable will be

```
Verilator_files/Vcpu
```

and can be run using

```bash
./Verilator_files/Vcpu
```

the C++ testbench generates the clock and calls `eval()` whenever the cpu inputs change.

for example

```cpp
cpu.clk = 0;
cpu.eval();

cpu.clk = 1;
cpu.eval();
```

the change from `0` to `1` creates a positive clock edge, which makes the cpu execute a clock cycle.

the testbench can also read outputs exposed by the cpu and print the current state.

example output

```text
| acc = 05 | pc = 01 | inst = 0A80 |
| p1 = 00 | p2 = 00 | p3 = 00 | p4 = 00 |
```

the cpu still loads its program from

```
programs/program.hex
```

so changing the program does not require changing the C++ testbench.

## running with iverilog

for now the cpu can be compiled and tested using iverilog.

first put the program you want to run in

```
programs/program.hex
```

each line is one 16 bit instruction in hex.

for example

```
0905
0a80
0902
0a81
1680
0b81
0000
```

the first 2 hex digits are the opcode and the last 2 are the operand.

```
09 05
^^ ^^
|  |
|  operand
opcode
```

the instruction set and opcodes are in `SPECIFICATIONS.md`.


compile the cpu and testbench using

```bash
iverilog -o builds/cpu_test rtl/*.v tb/cpu_tb.v
```

then run it using

```bash
vvp builds/cpu_test
```

the cpu will load `programs/program.hex` into rom and start execution from address `00`.


## changing the program

edit

```bash
nano programs/program.hex
```

replace it with the instructions you want to run and save it.

then run

```bash
iverilog -o builds/cpu_test rtl/*.v tb/cpu_tb.v
vvp builds/cpu_test
```

you may get this warning

```
$readmemh(programs/program.hex): Not enough words in the file for the requested range [0:255].
```

this just means the program has less than 256 instructions.


## example

```text
0905
0103
0201
0000
```

which is

```asm
MVI 05
ADDI 03
SUBI 01
NOP
```

and leaves

```text
ACC = 07
```

