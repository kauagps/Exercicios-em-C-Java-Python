#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

int main(void){
	system ("cls");
	setlocale(LC_ALL, "portuguese");
	int lin, col;
	printf("\n\nEste programa realiza a soma de tantos vetores que o usuario deseja!");
	printf("\n\nDigite o numero de linhas de seus vetores: ");
	scanf("%d", &lin);
	printf("\n\nAgora digite o numero de colunas: ");
	scanf("%d", &col);
	int i, n = 0, soma[lin][col], A[lin][col], j, op;
	printf("\n\nDigite o valor de seus vetores!");
	for(i = 0; n == 0; i++){
		printf("\n\n\t\tVetor %d!", i);
		for (i = 0; i < lin; i++){
			for (j = 0; j < col; j++){
				printf("\n\nDigite o valor correspondente a posiçao [%d][%d]: ", i, j);
				scanf("%d", &A[i][j]);
				soma[i][j] = A[i][j] + soma[i][j];
			}
		}
		printf("\n\nCaso deseje adiciona mais um vetor digite 1, ou caso deseje termina digite 2: ");
		scanf("%d", &op);
		switch (op){
			case 1:
				system("cls");
				break;
			
			case 2:
				system("cls");
				n = 1;
				break;
			
			default:
				printf("\n\nErro!");
				n = 1;
		}
	}
	printf("\n\n\t\tSoma total!\n");
	for (i = 0; i < lin; i++){
		printf("\n\n");
		for(j = 0; j < col; j++){
			printf(" %d  ", soma[i][j]);
		}
	}
	printf("\n\nObrigado por utilizar nosso sistema!");
	system("pause");
	return 0;
}
