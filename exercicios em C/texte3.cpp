#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <locale.h>

int main(void){
	system("cls");
	setlocale (LC_ALL, "portuguese");
	int i, A[5], B[5], C[5];
	printf("\n\nEste programa soma dois vetores de tamanho 5!");
	printf("\n\nDigite os elementos do vetor A!");
	for (i = 0; i < 5; i++){
		printf("\n\nDigite o elemento na posiçao A[%d]: ", i);
		scanf("%d", &A[i]);
	}
	printf("\n\nPressione qualquer tecla para continua...");
	getch();
	system("cls");
	printf("\n\nDigite os elementos do vetor B!");
	for (i = 0; i < 5; i++){
		printf("\n\nDigite o elemento na posiçao B[%d]: ", i);
		scanf("%d", &B[i]);
	}
	printf("\n\nPressione qualquer tecla para continua...");
	getch();
	system("cls");
	printf("\n\n\t\tVetores\n");
	printf("\n\nA = [ ");
	for (i = 0; i < 5; i++){
		printf("%d ", A[i]);
	}
	printf(" ]");
	printf("\n\nB = [ ");
	for (i = 0; i < 5; i++){
		printf("%d ", B[i]);
	}
	printf(" ]");
	printf("\n\nC = A + B = [");
	for (i = 0; i < 5; i++){
		printf("%d ", C[i]);
	}
	printf(" ]");
	printf("\n\nObrigado por utilizar nosso sistema!");
	system("pause");
	return 0;
}

