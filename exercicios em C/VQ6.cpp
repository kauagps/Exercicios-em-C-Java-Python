#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

int main(void){
	system("cls");
	setlocale(LC_ALL, "portuguese");
	int lin, col;
	printf("\n\nEste programa realiza a procura de um numero dentro de uma matriz criada pelo usuario!");
	printf("\n\nDigite o numero de linhas de seu vetor: ");
	scanf("%d", &lin);
	printf("\n\nDigite o numero de colunas de seu vetor: ");
	scanf("%d", &col);
	int A[lin][col], i, j, posic = 1, num, rep = 0;
	printf("\n\nPressione qualquer tecla para continuar...");
	getch();
	system("cls");
	printf("\n\n\t\tVetor!");
	for(i = 0; i < lin; i++){
		for(j = 0; j < col; j++){
			printf("\n\nDigite o valor correspondente a posiçao [%d][%d]: ", i, j);
			scanf("%d", &A[i][j]);
		}
	}
	printf("\n\nPressione qualquer tecla para continuar...");
	getch();
	system("cls");
	printf("\n\nDigite o numero que irá ser procurado no vetor: ");
	scanf("%d", &num);
	printf("\n\nPressione qualquer tecla para continuar...");
	getch();
	system("cls");
	printf("\n\n\t\tVetor A!\n");
	for (i = 0; i < lin; i++){
		printf("\n\n");
		for (j = 0; j < col; j++){
			if (A[i][j] == num){
				posic = 0;
			}
			printf(" %d  ", A[i][j]);
		}
	}
	if (posic != 1){
		printf("\n\nO numero %d digitado pertence ao vetor!", num);
		printf("\n\nPosiçoes de repetiçao: ");
		for(i = 0; i < lin; i++){
			for(j = 0; j < col; j++){
				if(A[i][j] == num){
					printf("[%d][%d] ", i, j);
					rep++;
				}
			}
		}
		printf("\n\nO numero repetiu-se %d vezes!", rep);
	}
	else
		printf("\n\nO numero %d nao pertence ao vetor!", num);
		
	printf("\n\nObrigado por utilizar nosso sistema!");
	system("pause");
	return 0;
}
