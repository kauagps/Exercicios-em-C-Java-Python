#include <stdio.h>

int main(void){
	int i, num1, n, num2, aux;
	num1 = 0;
	num2 = 1;
	printf("\n\nEste programa imprime a serie de fibonacci.");
	printf("\n\nDigite a quantidade de valores a qual deseja: ");
	scanf("%d", &n);
	for (i = 1; i <= n; i++){
		aux = num1 + num2;
		num1 = num2;
		num2 = aux;
		printf("%d,", num1);
	}
	printf("\n\nObigado por utilizar nosso sistema!");
	return 0;
}
