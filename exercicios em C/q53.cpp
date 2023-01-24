#include <stdio.h>

int main(void){
	int raio, smlPi, smlCi, smlP, smlCo, semelhanteCu, h, area, base, altura, aresta, i, n, op, volume, soma;
	printf("\n\nEste programa realiza a soma de volume de diferentes tanques.");
	printf("\n\nDigite a quantidade de tanques que deseja somar os valores volume desejados.");
	scanf("%d", &n);
	for(i = 1; i <= n; i++){
		printf("\n\nMenu:");
		printf("\n1. Cubo.");
		printf("\n2. Paralelepipedo.");
		printf("\n3. Cilindro.");
		printf("\n4. Cone.");
		printf("\n5. Piramide.");
		printf("\nDigite a opcao a qual deseja somar o volume: ");
		scanf("%d", &op);
		switch (op) {
			case 1:
			printf("\n\n\nVoce escolheu Cubo!");
			printf ("\nDigite o valor da aresta do cubo: ");
			scanf ("%d", &aresta);
			volume = aresta * aresta *aresta;
			semelhanteCu = semelhanteCu + volume;
			break;

			case 2:
			printf("\n\n\nVoce escolheu Paralelepipedo!");
			printf ("\nDigite o valor da base: ");
			scanf ("%d", &base);
			printf ("\nDigite o valor da altura: ");
			scanf ("%d", &altura);
			printf ("\nDigite o valor da altura: ");
			scanf ("%d", &area);
			volume = area * altura * base;
			smlP = smlP + volume;
			break;
	
			case 3:
			printf("\n\n\nVoce escolheu cilindro!");
			printf ("\nDigite o valor do raio: ");
			scanf ("%d", &raio);
			printf ("\nDigite o valor da altura: ");
			scanf ("%d", &h);
			volume = 3,14 * (raio * raio) * h;
			smlCi = smlCi + volume;
			break;
	
			case 4:
			printf("\n\n\nVoce escolheu Cone!");
			printf ("\nDigite o valor do raio: ");
			scanf ("%d", &raio);
			printf ("\nDigite o valor da altura: ");
			scanf ("%d", &h);
			volume = (3,14 * ((raio * raio) * h)) / 3;
			smlCo = smlCo + volume;
			break;
			
			case 5:
			printf("\n\n\nVoce escolheu Piramide!");
			printf ("\nDigite o valor da area da base da piramide: ");
			scanf ("%d", &base);
			printf ("\nDigite o valor da altura: ");
			scanf ("%d", &h);
			volume = base * h / 3;
			smlPi = smlPi + volume;
			break;
			
			default:
			printf("\n\nOpcao invalida!!!");
			break;
		}
		printf("\nO %d tem o valor de: %d", i, volume);
		soma = soma + volume;
	}
	printf("\n\n\nA soma total dos volumes e: %d", soma);
	if (semelhanteCu > 0){
		printf("\nO valor dos semelhantes cubo e: %d", semelhanteCu);
	}
	else if (smlP > 0){
			printf("\nO valor dos semelhantes paralelepipedo e: %d", smlP);
	}
	else if(smlCi > 0){
			printf("\nO valor dos semelhantes cilindro e: %d", smlCi);
	}
	else if(smlCo > 0){
			printf("\nO valor dos semelhantes Cone e: %d", smlCo);
	}
	else if(smlPi > 0){
			printf("\nO valor dos semelhantes Piramide e: %d", smlPi);
	}
	printf("\n\nObrigado por utilizar nosso sistema!");
	return 0;
}
	
