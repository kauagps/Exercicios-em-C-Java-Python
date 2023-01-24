#include <stdio.h>

int main(void){
	int num, media, i, n, soma;
	media = 0;
	soma = 0;
	printf("\n\nEste programa determina se a media e a soma de n numero e impar ou par.");
	printf("\n\nDigite a quantidade de numeros a qual deseja digitar: ");
	scanf("%d", &n);
	for(i = 1; i <= n; i++){
		printf("\n\nDigite o %d numero: ", i);
		scanf("%d", &num);
		soma = soma + num;
	}
	media = soma / n;
	if (soma % 2 == 0){
    	printf ("\nA soma total e %d, um numero par, e a media e",soma);
	}
	else {
    	printf ("\nA soma total e %d, um numero impar, e a media e",soma);
	}
	if (media % 2 == 0){
    	printf (" %d, um numero Par.",media);
	}
	else {
    	printf(" %d, um numero Impar.",media);
	}
	printf("\n\nObrigado por utilizar nosso sistema!");
	return 0;
}
