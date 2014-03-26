#include "Bytecode.h"
#include "BN.h"
#include <stdio.h>
#include "CException.h"

char FSR[0x1000];

/**	10	 
*	15	here	bn  there
*	20	there
*/	

// if Negative bit is ‘1’, (PC) + 2 + 2n → PC
void bn(Bytecode *code){


if(code->operand1 < -128 || code->operand1 > 127){Throw(INVALID_RANGE);}
else if (code->operand2 != -1 && code->operand3 == -1){code->absoluteAddress = code->operand2;}
else if (code->operand2 == -1 && code->operand3 != -1){code->absoluteAddress = code->operand3;}
else {Throw(INVALID_RANGE);}
	
	if(FSR[STATUS] == 0b00010000){
		code->absoluteAddress = code->absoluteAddress;
	}
	else{
		code->absoluteAddress = 0;
		code->absoluteAddress += 2;
	}
}