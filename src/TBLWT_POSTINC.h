#ifndef TBLWT_POSTINC_H
#define TBLWT_POSTINC_H

#define 	WREG 	0xFE8
#define		BSR 	0xFE0

extern char FSR[];

void tblwt_postinc(Bytecode *code);

#endif // TBLWT_POSTINC_H
