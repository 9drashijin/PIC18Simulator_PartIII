#ifndef TBLWT_POSTINC_H
#define TBLWT_POSTINC_H

#define 	WREG 	0xFE8
#define		BSR 	0xFE0
#define		TOSU	0xFFF
#define		TOSH	0xFFE
#define		TOSL	0xFFD
#define		STKPTR	0xFFC
#define		TBLPTRU	0xFF8
#define		TBLPTRH	0xFF7
#define		TBLPTRL	0xFF6
#define		TABLAT	0xFF5

extern char FSR[];
extern int PIC18Stack[32];

void tblwt_postinc(Bytecode *code);

#endif // TBLWT_POSTINC_H
