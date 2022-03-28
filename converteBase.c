#include <stdio.h>
#include "libPilha.h"

int main(){
	int dec, base;
	tpilha p;
	inicializa(&p);
	printf("valor em decimal e a base (2-8): ");
	scanf("%d%d", &dec, &base);
	while(dec>0){
		push(&p, dec % base);
		dec = dec / base; //dec /= base;
	}
	printf("Conversao: ");
	mostraPilha(p);
	return 0;
}

