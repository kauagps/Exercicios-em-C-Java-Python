#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

int main(void){
	system ("cls");
	setlocale (LC_ALL, "portuguese");
	int lin, col;
	printf("\n\nEste programa realiza o seguinte calculo entre dois vetores: 2.(3.A + 5.B)");
	printf("\n\nDigite o numero de linhas a qual o vetores possuem: ");
	scanf("%d", &lin);
	printf("\n\nAgora digite o numero de colunas que os vetores possuem: ");
	scanf("%d", &col);
	int A[lin][col], B[lin][col], C[lin][col], i, j;
	printf("\n\n\t\tVetor A!");
	for (i = 0; i < lin; i++){
		printf("\n\n");
		for (j = 0; j < col; j++){
			printf("\n\nDigite o valor correspondente a posiçao [%d][%d]: ", i, j);
			scanf("%d", &A[i][j]);
		}
	}
	printf("\n\nEsta tudo indo bem, pressione qualquer tecla para continuar...");
	getch();
	system ("cls");
	
	printf("\n\n\t\tVetor B!");
	for (i = 0; i < lin; i++){
		printf("\n\n");
		for (j = 0; j < col; j++){
			printf("\n\nDigite o valor correspondente a posição [%d][%d]: ", i, j);
			scanf("%d", &B[i][j]);
		}
	}
	 printf("\n\nLeitura de vetores completa, pressione qualquer tecla para continuar...");
	 getch();
	 system ("cls");
	 
	 printf("\n\n\t\tVetor A: \n");
	 for (i = 0; i < lin; i++){
	 	printf("\n\n");
	 	for (j = 0; j < col; j++){
	 		printf(" %d  ", A[i][j]);
		 }
	 }
	
	printf("\n\n\t\tVetor B: \n");
	for (i = 0; i < lin; i++){
		printf("\n\n");
		for (j = 0; j < col; j++){
			printf(" %d  ", B[i][j]);
		}
	}
	
	printf("\n\n\t\tReultado: \n");
	for (i = 0; i < lin; i++){
		printf("\n\n");
		for (j = 0; j < col; j++){
			C[i][j] = 2 * ((3 * A[i][j]) + (5 * B[i][j]));
			printf(" %d  ", C[i][j]);
		}
	}
	
	printf("\n\nObrigado por utilizar nosso sistema!");
	return 0;
}
