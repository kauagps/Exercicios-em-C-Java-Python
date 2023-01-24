#include <stdio.h>

int main(void){
	int volume, i, n, aresta, soma;
	volume = 0;
	soma = 0;
	printf("\n\nEste programa determina o volume de n cubos, e determina o valor soma total.");
	printf("\n\nDigite quantos cubos voce deseja calcular o volume: ");
	scanf("%d", &n);
	for (i = 1; i <= n; i++){
		printf("\n\n\n\nDigite o valor da aresta do %d cubo: ", i);
		scanf("%d", &aresta);
		volume = aresta * aresta * aresta;
		soma = soma + volume;
		printf("\nO valor volume do %d cubo e de: %d.", i, volume);
	}
	printf("\n\n\n\nO valor total dos %d cubos e de: %d.", n, soma);
	printf("\nObrigado por utilizar nosso sistema!");
	return 0;
}
