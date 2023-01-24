#include <stdio.h>

int main(void){
	int i, n, num1, soma;
	num1 = 1;
	soma = 1;
	printf("\nEste progrma determina o produtorio (multiplicacao) dos numeros inteiros no intervalo de 1 ate n");
	printf("\nDigite o valor de n: ");
	scanf("%d", &n);
	for (i = 1; i <= n; i++){
		if (i == n){
			printf(" %d", num1);
		}
		else{
			printf(" %d *", num1);
		}
		soma = soma * num1;
		num1++;
	}
	printf(" = %d.", soma);
	printf("\nObrigado por utilizar nosso sistema!");
	return 0;
}
