#include <stdio.h>

int main(void){
	int soma, preco, i, n;
	printf ("\n\nEste programa determina o preco total de n obras de um museu.");
	printf ("\n\nDigite a quantidade de obras a qual voce quer calcular o preco: ");
	scanf ("%d", &n);
	
	for(i = 1; i <= n; i++){
		printf("\n\nDigite o preco da %d obra: ", i);
		scanf("%d", &preco);
		soma = soma + preco;
	}
	
	printf ("\n\nO valor total das obras e: %d", soma);
	printf ("\n\nObrigado por utilizar nosso programa!");
	return 0;
}
