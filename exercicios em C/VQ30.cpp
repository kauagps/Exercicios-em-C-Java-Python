#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>
#include <string.h>
#include <time.h>

int main(void){
	system ("cls");
	setlocale(LC_ALL, "portuguese");
	int lin, col;
	printf("\n\nEste programa realiza soma de uma matriz A composta por valores digitados pelo usuario, e uma matriz B com valores aleatorios. E a soma dessas matrizes sempre resultara em um valor par!");
	printf("\n\nDigite o numero de linhas: ");
	scanf("%d", &lin);
	printf("\n\nDigite o numero de colunas: ");
	scanf("%d", &col);
	int A[lin][col], i, j;
	for(i = 0; i < lin; i++){
		for(j = 0; j < col; j++){
			printf("\nA[%d][%d]: ", i, j);
			scanf("%d", &A[i][j]);
		}
	}
	printf("\n\nDigite qualquer tecla para continuar...");
	getch();
	system("cls");
	printf("\n\nA =\n");
	for(i = 0; i < lin; i++){
		printf("\n\n");
		for(j = 0; j < col; j++){
			printf(" %d  ", A[i][j]);
		}
	}
	
	srand(time(NULL));
	int B[lin][col];
	printf("\n\nB =\n");
	for(i = 0; i < lin; i++){
		printf("\n\n");
		for(j = 0; j < col; j++){
			B[i][j] = (rand() % 99);
			if ((A[i][j] + B[i][j]) % 2 != 0){
				B[i][j]++;
			}
			printf(" %d  ", B[i][j]);
		}
	}
	
	int soma[lin][col];
	printf("\n\nSoma =\n");
	for(i = 0; i < lin; i++){
		printf("\n\n");
		for(j = 0; j < col; j++){
			soma[i][j] = A[i][j] + B[i][j];
			printf(" %d  ", soma[i][j]);
		}
	}
	printf("\n\nObrigado por utilizar nosso sistema!");
	return 0;
}
