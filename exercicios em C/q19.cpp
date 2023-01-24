#include <stdio.h>

int main(void){
	int num, media, n, i, soma;
	soma = 0;
	printf("\n\nEste programa ler uma quantidade qualquer de numeros reais e, realiza uma media aritimetica simples.");
	printf("\n\nDigite a quantidade de valores que deseja usar: ");
	scanf ("%d", &n);
	for (i = 1; i <= n; i++){
		printf ("\nDigite o %d valor: ", i);
		scanf("%d", &num);
		soma = soma + num;
	}
	printf ("\n\nA soma de todos os %d valores e: %d", n, soma);
	media = soma / n;
	printf("\nE sua media aritimetica simples e: %d", media);
	printf("\n\nObrigado por utilizar nosso sistema.");
	return 0;
}
