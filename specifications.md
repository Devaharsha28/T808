# T808 Specifications

T808 is an 8-bit accumulator-based Harvard CPU.

## Architecture

- 8-bit data bus
- 8-bit address bus
- 16-bit instructions
- 256 × 16-bit program ROM
- 256 × 8-bit data RAM
- 8-bit accumulator
- 8-bit program counter
- Harvard architecture
- Fixed-width instructions

## Instruction Format

```text
15              8 7               0
+----------------+-----------------+
|     Opcode     |     Operand     |
+----------------+-----------------+
      8-bit             8-bit
```

The operand can be an immediate value, RAM address, or jump offset depending on the instruction.

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

## Jumps

Jumps are relative to the current PC.

```text
JMPA x   -> PC + x
JMPS x   -> PC - x

JZA x    -> PC + x if ACC == 0
JZS x    -> PC - x if ACC == 0

JNZA x   -> PC + x if ACC != 0
JNZS x   -> PC - x if ACC != 0
```

## Shift / Rotate

```text
RR   abcdefgh -> habcdefg
RL   abcdefgh -> bcdefgha

SHR  abcdefgh -> 0abcdefg
SHL  abcdefgh -> bcdefgh0
```

## Memory

```text
Program ROM : 256 x 16-bit
Data RAM    : 256 x 8-bit
```

`MOV` writes ACC to RAM.

```asm
MVI 05
MOV 80
```

```text
RAM[80] = 05
```

`MVA` reads RAM into ACC.

```asm
MVA 80
```

## Notes

- No general-purpose registers; operations are accumulator based.
- No carry/borrow branch instructions.
- Conditional jumps currently check ACC for zero/non-zero.
- Arithmetic wraps at 8 bits.
- Opcodes `19`–`FF` are unused.
