#include <stdio.h>

int main(void){
	int n, i, num, menor, maior;
	num = 0;
	printf("\n\nEste programa ler uma quantidade qualquer de numero e determina o maior e menor numero.");
	printf("\n\nDigite a quantidade de valores a qual voce deseja comparalos: ");
	scanf("%d", &n);
	for (i = 1; i <= n; i++){
		printf("\n\nDigite o %d valor: ", i);
		scanf("%d", &num);
		if (i == 1){
			maior = num;
			menor = num;
		}
		else
			if (num > maior){
				maior = num;
			}
			if(num < menor){
				menor = num;
			}
	}
	printf("\n\nSeu maior numero e %d, e seu  menor e %d.", maior, menor);
	printf("\n\nObrgado por utilizar nosso programa.");
	return 0;
}
