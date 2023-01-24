#include <stdio.h>

int main(void){
	int raio, h, area, base, altura, aresta, i, n, op, volume, soma;
	printf("\n\nEste programa soma o voume de diferentes tanques.");
	printf("\n\nDigite a quantidade de tanques que deseja somar os valores volume desejada.");
	scanf("%d", &n);
	for(i = 1; i <= n; i++){
		printf("\n\nMenu:");
		printf("\n\n1. Cubo.");
		printf("\n\n2. Paralelepipedo.");
		printf("\n\n3. Cilindro.");
		printf("\n\n4. Cone.");
		printf("\n\nDigite a opcao a qual deseja somar o volume: ");
		scanf("%d", &op);
		switch (op) {
			case 1:
			printf("\n\nVoce escolheu Cubo!");
			printf ("\n\nDigite da aresta do cubo: ");
			scanf ("%d", &aresta);
			volume = aresta * aresta *aresta;
			break;

			case 2:
			printf("\n\nVoce escolheu Paralelepipedo!");
			printf ("\n\nDigite o valor da base: ");
			scanf ("%d", &base);
			printf ("\n\nDigite o valor da altura: ");
			scanf ("%d", &altura);
			printf ("\n\nDigite o valor da area: ");
			scanf ("%d", &area);
			volume = area * altura * base;
			break;
	
			case 3:
			printf("\n\nVoce escolheu cilindro!");
			printf ("\n\nDigite o valor do raio: ");
			scanf ("%d", &raio);
			printf ("\n\nDigite o valor da altura: ");
			scanf ("%d", &h);
			volume = 3,14 * (raio * raio) * h;
			break;
	
			case 4:
			printf("\n\nVoce escolheu Cone!");
			printf ("\n\nDigite o valor do raio: ");
			scanf ("%d", &raio);
			printf ("\n\nDigite o valor da altura: ");
			scanf ("%d", &h);
			volume = (3,14 * ((raio * raio) * h)) / 3;
			break;
			
			default:
			printf("\n\nOpcao invalida!!!");
			break;
		}
		soma = soma + volume;
	}
	printf("\n\nA soma total dos volumes e: %d", soma);
	printf("\n\nObrigado por utilizar nosso sistema!");
	return 0;
}
