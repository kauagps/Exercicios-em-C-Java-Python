#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

int main(void){
	system ("cls");
	setlocale (LC_ALL, "portuguese");
	int lin, col;
	printf("\n\nEste programa realiza a leitura de dois vetores B e C. E sabendo que A + B = C, determina os valores de A e imprime os treis vetores!");
	
	//leitura da quantidade de linhas e colunas dos vetores
	printf("\n\nDigite o numero de linhas que os vetores possuem: ");
	scanf("%d", &lin);
	printf("\n\nAgora digite o numero de colunas que os vetores possuem: ");
	scanf("%d", &col);
	
	int A[col][lin], B[col][lin], C[col][lin], i, j;
	
	//leitura dos valores do vetor B
	printf("\n\n\t\tVetor B!");
	for (i = 0; i < lin; i++){
		printf("\n\n");
		for (j = 0; j < col; j++){
			printf("\n\nDigite o valor pertencente a posção [%d][%d]: ", i, j);
			scanf("%d", &B[i][j]);
		}
	}
	printf("\n\nMuito bem! Agora vamos para a letura do vetor C! Digite qualquer tecla para continuar...");
	getch();
	system ("cls");
	
	//leitura dos valores do vetor C
	printf("\n\n\t\tVetor C!");
	for (i = 0; i < lin; i++){
		printf("\n\n");
		for (j = 0; j < col; j++){
			printf("\n\nDigite o valor pertencente a posção [%d][%d]: ", i, j);
			scanf("%d", &C[i][j]);
		}
	}
	printf("\n\nLeitura finalizada! Digite qualquer tecla para ver os resultados...");
	getch();
	system ("cls");
	
	//Realiza a subtraçao do vetor B e C, para dai obter o vetor A, e imprime o vetor A
	printf("\n\n\t\tVetor A!\n");
	for (i = 0; i < lin; i++){
		printf("\n\n");
		for (j = 0; j < col; j++){
			A[i][j] = C[i][j] - B[i][j];
			printf(" %d  ", A[i][j]);
		}
	}
	
	//imprime o vetor B
	printf("\n\n\t\tVetor B!\n");
	for (i = 0; i < lin; i++){
		printf("\n\n");
		for (j = 0; j < col; j++){
			printf(" %d  ", B[i][j]);
		}
	}
	
	//imprime o vetor C
	printf("\n\n\t\tVetor C!\n");
	for (i = 0; i < lin; i++){
		printf("\n\n");
		for (j = 0; j < col; j++){
			printf(" %d  ", C[i][j]);
		}
	}
	
	printf("\n\nObrigado por utilizar nosso sistema!");
	return 0;
}
