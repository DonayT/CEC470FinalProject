#include <ctype.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void fetchNextInstruction(void);
void executeInstruction(void);

// Four global variables for registers

// Program counter (16-bit) used to hold the address of the next instruction to execute.
uint16_t PC = 0;

// Instruction Register (8-bit) used to gold the current instruction being executed.
uint8_t IR = 0;

// Memory Address Register (16-bit) used to hold an address being used as a pointer, i.e., an indirect reference to data in memory
uint16_t MAR = 0;

// Accumulator (8-bit) used to operate on data
uint8_t ACC = 0;

int main(int argc, char *argv[])
{
    printf("Sugma");
    return 0;
}

void fetchNextInstruction()
{
}

void executeNextInstruction()
{
}