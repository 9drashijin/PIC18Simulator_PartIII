#ifndef RETFIE_H
#define RETFIE_H

#define 	WREG 	0xFE8
#define		BSR 	0xFE0

extern char FSR[];

void retfie(Bytecode *code);

#endif // RETFIE_H
