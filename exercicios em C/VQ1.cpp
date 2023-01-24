#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

int main(void){
	system ("cls");
	setlocale(LC_ALL, "portuguese");
	int colunaA, linhaA, colunaB, linhaB, colunaC, linhaC;
	printf("\n\nEste programa ler e imprime treis vetores de tamanho fornecido pelo o usuario!");
	
	//Leituara dos valore de coluna e linha do vetor A
	printf("\n\n\t\tVETOR A!");
	printf("\n\nDigite o numero de colunas desejado ao vetor A: ");
	scanf("%d", &colunaA);
	printf("\n\nAgora digite o numero de linhas desejado ao vetor A: ");
	scanf("%d", &linhaA);
	printf("\n\nPressione qualquer tecla para continuar...");
	getch();
	system ("cls");
	
	//Leituara dos valore de coluna e linha do vetor B
	printf("\n\n\t\tVETOR B!");
	printf("\n\nDigite o numero de colunas desejado ao vetor B: ");
	scanf("%d", &colunaB);
	printf("\n\nAgora digite o numero de linhas desejado ao vetor B: ");
	scanf("%d", &linhaB);
	printf("\n\nPressione qualquer tecla para continuar...");
	getch();
	system ("cls");
	
	//Leituara dos valore de coluna e linha do vetor C
	printf("\n\n\t\tVETOR C!");
	printf("\n\nDigite o numero de colunas desejado ao vetor C: ");
	scanf("%d", &colunaC);
	printf("\n\nAgora digite o numero de linhas desejado ao vetor C: ");
	scanf("%d", &linhaC);
	printf("\n\nPressione qualquer tecla para continuar...");
	getch();
	system ("cls");
	
	int A[colunaA][linhaA], B[colunaB][linhaB], C[colunaC][linhaC], i, j;
	
	//lendo vaalores do vetor A!
	printf("\n\n\t\tVetor A!\n");
	for (i = 0; i < linhaA; i++){
		printf("\n");
		for (j = 0; j < colunaA; j++){
			printf("\n\nDigite o elemento do vetor A pertencente a posiçao [%d][%d]: ", i, j);
			scanf("%d", &A[i][j]);
		}
	}
	printf("\n\nLeitura do vetor A completa, pressione qualquer tecla para continuar...");
	getch();
	system ("cls");
	
	//lendo vaalores do vetor B!
	printf("\n\n\t\tVetor B!\n");
	for (i = 0; i < linhaB; i++){
		printf("\n");
		for (j = 0; j < colunaB; j++){
			printf("\n\nDigite o elemento do vetor B pertencente a posiçao [%d][%d]: ", i, j);
			scanf("%d", &B[i][j]);
		}
	}
	
	printf("\n\nLeitura do vetor B completa, agora vamos para o vetor C, pressione qualquer tecla para continuar...");
	getch();
	system ("cls");
	
	//lendo vaalores do vetor C!
	printf("\n\n\t\tVetor C!\n");
	for (i = 0; i < linhaC; i++){
		printf("\n");
		for (j = 0; j < colunaC; j++){
			printf("\n\nDigite o elemento do vetor C pertencente a posiçao [%d][%d]: ", i, j);
			scanf("%d", &C[i][j]);
		}
	}
	printf("\n\nLeitura do vetor C completa, pressione qualquer tecla para ver os resultados...");
	getch();
	system ("cls");
	
	//imprimindo vetor A!
	printf("\n\n\t\tVetor A!\n");
	for (i = 0; i < linhaA; i ++){
		printf("\n");
		for (j = 0; j < colunaA; j++){
			printf(" %d  ", A[i][j]);
		}
	}
	
	//imprimindo vetor B!
	printf("\n\n\t\tVetor B!\n");
	for (i = 0; i < linhaB; i ++){
		printf("\n");
		for (j = 0; j < colunaB; j++){
			printf(" %d  ", B[i][j]);
		}
	}
	
	//imprimindo vetor C!
	printf("\n\n\t\tVetor C!\n");
	for (i = 0; i < linhaC; i ++){
		printf("\n");
		for (j = 0; j < colunaC; j++){
			printf(" %d  ", C[i][j]);
		}
	}
	
	//verificando a existencia de soma entre as treis matrizes!
	if (colunaA == colunaB && linhaA == linhaB && colunaA == colunaC && linhaB == linhaC){
		int D[colunaA][linhaB];
		printf("\n\n\t\tSoma das matrizes!\n");
		for (i = 0; i < colunaA; i++){
			printf("\n");
			for (j = 0; j < linhaB; j++){
				D[i][j] = A[i][j] + B[i][j] + C[i][j];
				printf (" %d  ", D[i][j]);
			}
		}
	}
	else {
		printf("\n\nNao e possivel realiza a soma entre os treis vetores!");
	}
	
	printf("\n\nObrigado por utilizar nosso sistema!");
	return 0;
}
