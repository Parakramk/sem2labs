;Q2. WAP to subtract two 8 bit numbers stored in a memory location. Assume an appropriate memory location yourself.
LDA 9000   ; Load the subtrahend from memory location 9000H into accumulator (A)
MOV B, A   ; Copy the content of the accumulator (A) into register B
MVI C, 00H ; Initialize register C to 00H

LDA 9001   ; Load the minuend from memory location 9001H into accumulator (A)
SBB B      ; Subtract the content of register B (subtrahend) from the accumulator (A) along with the borrow flag (CY)

JNC DOWN   ; Jump to DOWN label if CY flag is not set (no borrow)
INR C      ; Increment the value in register C (borrow count)

DOWN:
STA 9100   ; Store the result in the accumulator (A) into memory location 9100H

MOV A, C   ; Move the value from register C into the accumulator (A)
STA 9101   ; Store the borrow count into memory location 9101H

HLT        ; Halt the program

