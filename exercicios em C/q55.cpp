#include <stdio.h>

int main(void){
	int num1, num2, num3, num4;
	printf("\n\nEste programa determina se 4 numero formam um quadrado ou retangulo.");
	printf("\nDigite o valor da primeira aresta: ");
	scanf("%d", &num1);
	printf("\nDigite o valor da segunda aresta: ");
	scanf("%d", &num2);
	printf("\nDigite o valor da terceira aresta: ");
	scanf("%d", &num3);
	printf("\nDigite o valor da quarta aresta: ");
	scanf("%d", &num4);
	if((num1 == num2) && (num3 == num4) && (num1 == num3)){
		printf("\nOs quatros valores formam um quadrado!");
	}
	else{
		printf("\n\nOs valores digitados nao formam um quadrado!");
	}
	if(((num1 == num2) && (num3 == num4) && (num1 != num3)) || ((num1 == num3) && (num2 == num4) && (num1 != num2)) || ((num1 == num4) && (num2 == num3) && (num1 != num2))){
		printf("\nOs valores digitados formam um retangulo!");
	}
	else{
		printf("\nOs valores digitados nao formam um retangulo!");
	}
	printf("\n\nObrigado por utilizar nosso sistema!");
	return 0;
}
