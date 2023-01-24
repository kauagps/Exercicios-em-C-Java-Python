#include <stdio.h>

int main(void){
	int raio, volume;
	printf("Este programa determina o volume de uma esfera qualquer com base no valor de seu raio.");
	printf("\nDigite o valor desejado do raio de sua esfera: ");
	scanf("%d", &raio);
	volume = (int)((((4 * 3,14) * (raio * raio * raio))) / 3);
	printf("\n\n           ____________");
	printf("\n        __|            |__");
	printf("\n     __|                  |__");
	printf("\n   _|                        |_");
	printf("\n  |                            |");
	printf("\n _|                            |_");
	printf("\n|                                |");
	if(raio < 10){
		printf("\n|                     raio %d     |", raio);
	}
	else if(raio > 10 & raio < 100){
		printf("\n|                     raio %d    |", raio);
	}
	else if(raio > 100 & raio < 10000){
		printf("\n|                     raio %d  |", raio);
	}
	else if(raio > 10000 & raio < 100000){
		printf("\n|                     raio %d |", raio);
	}
	printf("\n|               0----------------|");
	printf("\n|                                |");
	printf("\n|_                              _|");
	printf("\n  |                            |");
	printf("\n  |_                          _|");
	printf("\n    |__                    __|");
	printf("\n       |__              __|");
	printf("\n          |____________|");
	
	//Nao consegui fazer uma esfera :(
	
	printf("\n\nO volume de sua esfera com raio de %d, e de %d.", raio, volume);
	printf("\n\nObrigado por utilizar nosso sistema!");
	return 0;
}
