#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <locale.h>

int main(void){
	system("cls");
	setlocale (LC_ALL, "portuguese");
	int n, i;
	printf("\n\nEste programa imprime um vetor de tamanho n!");
	printf("\n\nDigite o tamanho do vetor A: ");
	scanf("%d", &n);
	int A[n];
	printf("\n\nDigite qualquer tecla para continuar...");
	getch();
	system("cls");
	printf("\n\nDigite os elementos do vetor A: ");
	for (i = 0; i < n; i++){
		printf("\n\nDigite o elemento na posiçao A[%d]: ",i);
		scanf("%d", &A[i]);
	}
	printf("\n\nPressione qualquer tecla para continuar...");
	getch();
	system("cls");
	printf("\n\nA = [");
	for (i = 0; i < n; i++){
		printf("%d ", A[i]);
	}
	printf("]");
	printf("\n\nObrigado por utilizar nosso sistema!");
	system("pause");
	return 0;
}
