#include <stdio.h>

int main(void){
	int maiorM, num, media, i, n, soma, maior, menor;
	soma = 0;
	media = 0;
	printf("\n\nEste programa determina o maior e menor numero, e quantos numeros sao superior a media.");
	printf("\n\nDigite a quantidade de numeros a qual deseja digitar: ");
	scanf("%d", &n);
	for(i = 1; i <= n; i++){
		if(i == 1){
		printf("\n\nDigite o %d numero: ", i);
		}
		else{
			printf("\nDigite o %d numero: ", i);
		}
		scanf("%d", &num);
		soma = soma + num;
		if(i == 1){
			maior = num;
			menor = num;
		}
		else if(maior < num){
			maior = num;
		}
		else if(menor > num){
			menor = num;
		}
	}
	media = soma / n;
	printf("\n\nDigite os valores novamente por favor.");
	for(i = 1; i <= n; i++){
		if(i == 1){
		printf("\n\nDigite o %d numero: ", i);
		}
		else{
			printf("\nDigite o %d numero: ", i);
		}
		scanf("%d", &num);
		if(num > media){
			maiorM++;
		}
	}
	printf("\n\nO maior numero e %d, e o menor numer e %d.", maior, menor);
	printf("\n A media e de %d, portanto existem %d numeros maior do que a media!", media, maiorM);
	printf("\nObrigado por utilizar nosso sistema!");
	return 0;
}
