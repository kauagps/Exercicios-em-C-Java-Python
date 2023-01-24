#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <locale.h>

int main(void){
	system("cls");
	setlocale (LC_ALL, "portuguese");
	int A[5], i;
	printf("\n\nEste programa carrega e imprime um vetor!");
	printf("\n\nDigite os elementos do vetor A!");
	for (i = 0; i <= 4; i++){
		printf("\n\nDigite o elemento da posiçao A[%d]: ",i);
		scanf("%d", &A[i]);
	}
	printf("\n\nPressione uma tecla para continuar...");
	getch();
	system("cls");
	printf("\n\nA = [");
	for (i = 0; i <= 4; i++){
		printf("%d ", A[i]);
	}
	printf("]");
	printf("\n\nObrigado por utilizar nosso sistema!");
	system("pause");
	return 0;
}
