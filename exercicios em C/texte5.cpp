#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <locale.h>

int main(void){
	system("cls");
	setlocale (LC_ALL, "portuguese");
	int i, tamA, tamB;
	printf("\n\nEste programa realiza a subtraçao entre dois vetores!");
	printf("\n\nDigite o tamanho do vetor A: ");
	scanf("%d", &tamA);
	printf("\n\nDigite o tamanho do vetor B: ");
	scanf("%d", &tamB);
	int A[tamA], B[tamB];
	printf("\n\nPressione qualquer tecla para continua...");
	getch();
	system("cls");
	printf("\n\nDigite os elementos do vetor A!");
	for (i = 0; i < tamA; i++){
		printf("\n\nDigite o elemento na posiçao A[%d]: ", i);
		scanf("%d", &A[i]);
	}
	printf("\n\nPressione qualquer tecla para continua...");
	getch();
	system("cls");
	printf("\n\nDigite os elementos do vetor B!");
	for (i = 0; i < tamB; i++){
		printf("\n\nDigite o elemento na posiçao B[%d]: ", i);
		scanf("%d", &B[i]);
	}
	printf("\n\nPressione qualquer tecla para continua...");
	getch();
	system("cls");
	printf("\n\nVetores\n");
	printf("\n\nA = [");
	for (i = 0; i < tamA; i++){
		printf("%d ", A[i]);
	}
	printf("]");
	printf("\n\nB = [");
	for (i = 0; i < tamB; i++){
		printf("%d ", B[i]);
	}
	printf("]");
	if(tamA == tamB){
		int C[tamA];
		printf("\n\nC = [");
		for (i = 0; i < tamA; i++){
			C[i] = A[i] - B[i];
			printf("%d ", C[i]);
		}
		printf("]");
	}
	else
		printf("\n\nNao e possivel subtrair os dois vetores!");
		
	printf("\n\nObrigado por utilizar nosso sistema!");
	system("pause");
	return 0;
}
