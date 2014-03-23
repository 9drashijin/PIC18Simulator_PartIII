#include "unity.h"
#include "Bytecode.h"
#include "RETFIE.h"
#include <stdio.h>
#include "CException.h"

void setUp(void){}
void tearDown(void){}

void test_RETFIE(void){
	Instruction inst = {.mnemonic = RETFIE,.name = "retfie"};	
	Bytecode code = {.instruction = &inst,
					 .operand1 = 0xA5,
					 .operand2 = 0,
					 .operand3 = 0,
					};
	retfie(&code);
}
