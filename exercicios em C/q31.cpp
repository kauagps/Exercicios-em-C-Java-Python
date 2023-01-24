#include <stdio.h>

int main(void){
	int aresta, areaEP = 0, areaEP2 = 0, aresta2 = 0, p1 = 0, p2 = 0;
	printf("\nEste programa caucula a area de um quadrado e depois o divide em outros quatro quadrados iguais!");
	printf("\n\nDigite o valor da aresta do quadrado maior: ");
	scanf("%d", &aresta);
	
	areaEP = aresta * aresta;
	aresta2 = aresta / 2;
	areaEP2 = aresta2 * aresta2;
	p1 = areaEP;
	p2 = areaEP2;		
	
	printf("\n\nO valor da area do quadrado maior e de %d, e o perimetro e de %d", areaEP, p1);
	printf("\nE o valor da area de cada quadrado menor e de %d, e o perimetro de cada um deles e %d", areaEP2, p2);
	printf("\n\nObrigado por utilizar nosso sistema!");
	return 0;
}
