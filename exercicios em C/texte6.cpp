#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <locale.h>

int main(void){
	system("cls");
	setlocale (LC_ALL, "portuguese");
	int num, i, n, tamA;
	printf("\n\nEste programa determina amultiplicaçao de um numero por vetor A");
	printf("\n\nDigite o temanho do vetor A: ");
	scanf("%d", &tamA);
	int A[tamA], B[tamA];
	printf("\n\nPressione qualquer tecla para continua...");
	getch();
	system("cls");
	printf("\n\nDigite os elementos do vetor A!");
	for(i = 0; i < tamA; i++){
		printf("\n\nDigite o elemento na posiçao A[%d]: ", i);
		scanf("%d", &A[i]);
	}
	printf("\n\nPressione qualquer tecla para continua...");
	getch();
	system("cls");
	printf("Digite o valor do numero que deseja multiplicar por A: ");
	scanf("%d", &num);
	printf("\n\nVetores!\n");
	printf("\n\nA = [ ");
	for (i = 0; i < tamA; i++){
		printf("%d ", A[i]);
	}
	printf("]");
	printf("\n\nB = %d * A = [ ", num);
	for(i = 0; i < tamA; i++){
		B[i] = num * B[i];
		printf("%d ", B[i]);
	}
	printf("\n\nObrigado por utilizar nosso sistema!");
	system("pause");
	return 0;
}
