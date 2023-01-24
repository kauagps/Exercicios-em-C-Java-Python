#include <stdio.h>

int main(void){
	int aB, h, result;
	printf("\n\nEste progrma calcula o volume de um prisma qualquer.");
	printf("\n\nDigite o valor da area da base: ");
	scanf("%d", &aB);
	printf("\nDigite o valor da altura: ");
	scanf("%d", &h);
	result = aB * h;
	printf("\n\nO valor do volume do prisma e: %d", result);
	printf("\n\nObrigado por utilizar nosso sistema!");
	return 0;
}
