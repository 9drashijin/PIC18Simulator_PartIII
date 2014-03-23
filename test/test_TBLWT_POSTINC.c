#include "unity.h"
#include "Bytecode.h"
#include "TBLWT_POSTINC.h"
#include <stdio.h>
#include "CException.h"

void setUp(void){}
void tearDown(void){}

void test_TBLWT_POSTINC(){
	Instruction inst = {.mnemonic = TBLWT_POSTINC,.name = "tblwt_postinc"};	
	Bytecode code = {.instruction = &inst,
					 .operand1 = 0xA5,
					 .operand2 = 0,
					 .operand3 = 0,
					};
	tblwt_postinc(&code);
}
