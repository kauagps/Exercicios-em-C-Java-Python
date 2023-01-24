#include <stdio.h>

int main(void){
	int aresta, vr;
	printf("\nEste programa calcula o volume de um reservatorio cubico, com somente 60 porcento preenchido.\nDigite o valor da aresta do resavatorio: ");
	scanf("%d", &aresta);
	vr = ((aresta * aresta) * aresta) * 0.60;
	printf("\nO volume de combustivel e de %d.\nObrigado por uttilizar nosso sistema!", vr);
	return 0;
}
