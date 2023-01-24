#include <stdio.h>

int main(void){
	int h, i, n;
	h = 0;
	printf("\n\nEste programa gerar o numero H, levando em conta que o usuario decide a quantidade valores.");
	printf("\n\nDigite a quantidade de valores para chegar no numero H: ");
	scanf("%d", &n);
	while (n > 0){
		h = h + 1 / n;
		n--;
	}
	
	//Copiei de um exemplo seu, nao fasso ideia se ta certo ou nao;-;
	
	printf("\n\nO valor de H e: %d", h);
	printf("\n\nObrigado por utilizar nosso programa!");
	return 0;
}
