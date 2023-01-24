#include <stdio.h>

int main(void){
	int raio, perimetro, area;
	printf("\n\nEste programa determina a area e o perimetro de um circulo qualquer.");
	printf("\n\nDigite o valor do raio do circulo: ");
	scanf("%d", &raio);
	perimetro = raio * 6,28;
	area = (raio * raio) * 3,14;
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
	printf("\n\nA area do circulo e de %d, e o perimetro e de %d", area, perimetro);
	printf ("\n\nObrigado por utilizar nosso sistema!");
	return 0;
}
