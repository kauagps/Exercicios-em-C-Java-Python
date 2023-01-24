#include <stdio.h>

int main(void){
	int num, i, resultado;
	resultado = 0;
 	printf("\n\nEste programa determina se um numero e primo ou nao.");
 	printf("\n\nDigite o numero desejado: ");
	scanf("%d", &num);
	for (i = 2; i <= num / 2; i++) {
		if (num % i == 0) {
	       resultado++;
	       break;
	    }
	}
	//se o senhor ta lendo isso quero deseja para o senhor um bom dia:) pq eu n tive na hora de fazer essa questao
	if (resultado == 0){
	    printf("\n\n%d e um numero primo\n", num);
	}
	else{
		printf("%d nao e um numero primo\n", num);
	}
	printf("\n\nObrigado por utilizar nosso programa!");
	return 0;
} 

