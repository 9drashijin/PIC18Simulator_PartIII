#ifndef RETFIE_H
#define RETFIE_H

#define 	WREG 	0xFE8
#define		BSR 	0xFE0
#define		TOSU	0xFFF
#define		TOSH	0xFFE
#define		TOSL	0xFFD
#define		STKPTR	0xFFC	
#define		INTCON	0xFF2 //[7:6]GIE/GIEH PEIE/GIEL 0 0  0 0 0 0

extern char FSR[];
extern int PIC18Stack[32];

void retfie(Bytecode *code);

#endif // RETFIE_H
