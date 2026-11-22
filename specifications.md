# T808 Specifications

T808 is an 8-bit accumulator-based Harvard CPU.

## Architecture

- 8-bit data bus
- 8-bit address bus
- 16-bit instructions
- 256 × 16-bit program ROM
- 256 × 8-bit data RAM
- 8-bit accumulator
- 16-bit program counter
- Harvard architecture
- Fixed-width instructions
- 4 Memory-mapped ports

## Instruction Format

```text
15              8 7               0
+----------------+-----------------+
|     Opcode     |     Operand     |
+----------------+-----------------+
      8-bit             8-bit
```

The operand can be an immediate value, RAM address, or jump offset depending on the instruction.

## Ports
These ports are direct extensions from the ram addresses and can be modifed by mov instruction js like any other memory address , except port 3 and 4 cuz they are modified by external forces of magic
|Port | RAM address| I/O |
| --- | --- | --- |
| port 1 | 0xfc | output |
| port 2 | 0xfd | output |
| port 3 | 0xfe | input |
| port 4 | 0xff | input |


## ISA

| Opcode | Instruction | Operation |
|---|---|---|
| `00` | `NOP` | No operation |
| `01` | `ADDI imm` | `ACC = ACC + imm` |
| `02` | `SUBI imm` | `ACC = ACC - imm` |
| `03` | `ANDI imm` | `ACC = ACC & imm` |
| `04` | `XORI imm` | `ACC = ACC ^ imm` |
| `05` | `ORRI imm` | `ACC = ACC \| imm` |
| `06` | `NOT` | `ACC = ~ACC` |
| `07` | `JMPA offset` | `PC = PC + offset` |
| `08` | `JMPS offset` | `PC = PC - offset` |
| `09` | `MVI imm` | `ACC = imm` |
| `0A` | `MOV addr` | `RAM[addr] = ACC` |
| `0B` | `ADDM addr` | `ACC = ACC + RAM[addr]` |
| `0C` | `SUBM addr` | `ACC = ACC - RAM[addr]` |
| `0D` | `ANDM addr` | `ACC = ACC & RAM[addr]` |
| `0E` | `XORM addr` | `ACC = ACC ^ RAM[addr]` |
| `0F` | `ORRM addr` | `ACC = ACC \| RAM[addr]` |
| `10` | `JZA offset` | Jump ahead if `ACC == 0` |
| `11` | `JZS offset` | Jump back if `ACC == 0` |
| `12` | `RR` | Rotate ACC right |
| `13` | `RL` | Rotate ACC left |
| `14` | `SHR` | Shift ACC right |
| `15` | `SHL` | Shift ACC left |
| `16` | `MVA addr` | `ACC = RAM[addr]` |
| `17` | `JNZA offset` | Jump ahead if `ACC != 0` |
| `18` | `JNZS offset` | Jump back if `ACC != 0` |
| `19` | `JCA offset`  |Jump ahead if `carry = 1`|
| `1A` | `JCS offset`  |Jump back if  `carry = 1`|
| `1B` | `JNCA offset` |Jump ahead if `carry = 0`|
| `1C` | `JNCS offset` |Jump back if `carry = 0`|
| `1D` | `JEA offset`  |Jump ahead if ` ACC == RAM[00]`|
| `1E` | `JES offset`  |Jump back if  ` ACC == RAM[00]`|
| `1F` | `JNEA offset` |Jump ahead if ` ACC != RAM[00]`|
| `20` | `JNES offset` |Jump back if ` ACC != RAM[00]`|
|`21` | `JGA offset` | Jump ahead if `ACC > RAM[00]`|
|`22` | `JGS offset` | Jump back if `ACC > RAM[00]`|
|`23` | `JSA offset` | Jump ahead if `ACC < RAM[00]`|
|`24` | `JSS offset` | Jump back if `ACC < RAM[00]`|




## assembler 

u can write all instructions same in text file with .asm and run assembler c code in assembler folder

but for jump instruction , u dont need to specify A or S at end , and u dont even need to specify offset 

the syntax will be : ``` JMP <label name> ```
u can use any variant of jumps in place of JMP

u will need to define labels using syntax : ``` .label label_name```




## Notes

- No general-purpose registers; operations are accumulator based.
- Conditional jumps currently check ACC for zero/non-zero.
- Arithmetic wraps at 8 bits.
- Opcodes `25`–`FF` are unused.
