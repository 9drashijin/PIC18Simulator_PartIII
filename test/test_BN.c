#include "unity.h"
#include "Bytecode.h"
#include "BN.h"
#include <stdio.h>
#include "CException.h"

void setUp(void){}
void tearDown(void){}

void test_BN(){
	Instruction inst = {.mnemonic = BN,.name = "bn"};	
	Bytecode code = {.instruction = &inst,
					 .operand1 = 0xA5,
					 .operand2 = 0,
					 .operand3 = 0,
					};
	bn(&code);				
}
