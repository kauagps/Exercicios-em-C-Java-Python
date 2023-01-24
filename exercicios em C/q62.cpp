#include <stdio.h>

int main(void){
	int result, lado;
	printf("\n\nEste programa determina a area de um terreno com todos os lados iguais.");
	printf("\n\nDigite o valor de um dos lados: ");
	scanf("%d", &lado);
	result = lado * lado;
	printf("\n\nO valoer da area do terrono e: %d.", result);
	printf ("\n\nObrigado por utilizar nosso sistema!");
	return 0;
}
