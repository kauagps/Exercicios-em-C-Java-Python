#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

int main(void){
	system("cls");
	setlocale(LC_ALL, "portuguese");
	int linA, colA, linB, colB, linC, colC;
	printf("\n\nEste programa realiza o seguinte calculo entre vetores: (3.A + 4.B) – C!");
	
	//ler o numero de linha e coluna que os vetores possuem
	printf("\n\nPara realiza os calculos, primeiro digite o numero de linhas pertencentes ao vetor A: ");
	scanf("%d", &linA);
	printf("\n\nAgora digite o numero de colunas: ");
	scanf("%d", &colA);
	printf("\n\nDigite o numero de linhas do vetor B: ");
	scanf("%d", &linB);
	printf("\n\nDigite o numero de colunas pertencentes ao vetor B: ");
	scanf("%d", &colB);
	printf("\n\nAora por ultimo digite o numero de linhas do vetor C: ");
	scanf("%d", &linC);
	printf("\n\nE seu numero de colunas: ");
	scanf("%d", &colC);
	
	int A[linA][colA], B[linB][colB], C[linC][colC], i, j;
	
	//realiza a leitura dos valores dos vetores
	printf("\n\n\t\tVetor A!");
	for(i = 0; i < linA; i++){
		printf("\n\n");
		for (j = 0; j < colA; j++){
			printf("\n\nDigite o valor corespondente a posição [%d][%d]: ", i, j);
			scanf("%d", &A[i][j]);
		}
	}
	printf("\n\nLeitura de A completa, digite qualquer tecla para continuar...");
	getch();
	system ("cls");
	
	printf("\n\n\t\tVetor B!");
	for(i = 0; i < linB; i++){
		printf("\n\n");
		for (j = 0; j < colB; j++){
			printf("\n\nDigite o valor corespondente a posição [%d][%d]: ", i, j);;
			scanf("%d", &B[i][j]);
		}
	}
	printf("\n\nLeitura de A completa, digite qualquer tecla para continuar...");
	getch();
	system ("cls");
	
	printf("\n\n\t\tVetor C!");
	for(i = 0; i < linC; i++){
		printf("\n\n");
		for (j = 0; j < colC; j++){
			printf("\n\nDigite o valor corespondente a posição [%d][%d]: ", i, j);;
			scanf("%d", &C[i][j]);
		}
	}
	printf("\n\nLeitura de A completa, digite qualquer tecla para continuar...");
	getch();
	system ("cls");
	
	//imprimir e calcula vetores
	printf("\n\n\t\tVetor A!\n");
	for (i = 0; i < linA; i++){
		printf("\n\n");
		for (j = 0; j < colA; j++){
			if (A[i])
		}
	}
	
	printf("\n\n\t\tVetor B!\n");
	for (i = 0; i < linB; i++){
		printf("\n\n");
		for (j = 0; j < colB; j++){
			printf(" %d  ", B[i][j]);
		}
	}
	
	printf("\n\n\t\tVetor C!\n");
	for (i = 0; i < linC; i++){
		printf("\n\n");
		for (j = 0; j < colC; j++){
			printf(" %d  ", C[i][j]);
		}
	}
	
	if (linA == linB & linB == linC & colA == colB & colA == colC){
		int D[linA][colC];
		printf("\n\n\t\tResultado do calculo!\n");
		for (i = 0; i < linA; i++){
			printf("\n\n");
			for (j = 0; j < colC; j++){
				D[i][j] = (((3 * A[i][j]) + (4 * B[i][j])) - C[i][j]);
				printf(" %d  ", D[i][j]);
			}
		}
	}
	return 0;
}
