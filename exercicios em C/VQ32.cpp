#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

int main(void){
	system("cls");
	setlocale(LC_ALL, "portuguese");
	int n, m, p, q, r, s, t, u;
	printf("\n\nEste programa realiza a multiplicaçao entre A e B, C e D, e depois soma os resultados caso possivel!");
	printf("\n\nDigite a quantidade de linhas de A, B, C, e D!");
	printf("\nA: ");
	scanf("%d", &n);
	printf("\nB: ");
	scanf("%d", &m);
	printf("\nC: ");
	scanf("%d", &p);
	printf("\nD: ");
	scanf("%d", &q);
	printf("\n\nAgora digite a quantidade de colunas!");
	printf("\nA: ");
	scanf("%d", &r);
	printf("\nB: ");
	scanf("%d", &s);
	printf("\nC: ");
	scanf("%d", &t);
	printf("\nD: ");
	scanf("%d", &u);
	printf("\n\nDigite qualquer tecla para continuar...");
	getch();
	system("cls");
	int A[n][r], B[m][s], C[p][t], D[q][u], i, j;
	printf("\n\nVetor A:");
	for(i = 0; i < n; i++){
		for(j = 0; j < r; j++){
			printf("\n\nDigite o valor correspondente a posiçao [%d][%d]: ", i, j);
			scanf("%d", &A[i][j]);
		}
	}
	printf("\n\nDigite qualquer tecla para continuar...");
	getch();
	system("cls");
	printf("\n\nVetor B:");
	for(i = 0; i < m; i++){
		for(j = 0; j < s; j++){
			printf("\n\nDigite o valor correspondente a posiçao [%d][%d]: ", i, j);
			scanf("%d", &B[i][j]);
		}
	}
	printf("\n\nDigite qualquer tecla para continuar...");
	getch();
	system("cls");
	printf("\n\nVetor C:");
	for(i = 0; i < p; i++){
		for(j = 0; j < t; j++){
			printf("\n\nDigite o valor correspondente a posiçao [%d][%d]: ", i, j);
			scanf("%d", &C[i][j]);
		}
	}
	printf("\n\nDigite qualquer tecla para continuar...");
	getch();
	system("cls");
	printf("\n\nVetor D:");
	for(i = 0; i < q; i++){
		for(j = 0; j < u; j++){
			printf("\n\nDigite o valor correspondente a posiçao [%d][%d]: ", i, j);
			scanf("%d", &D[i][j]);
		}
	}
	printf("\n\nDigite qualquer tecla para continuar...");
	getch();
	system("cls");
	printf("\n\nVetor A!\n");
	for(i = 0; i < n; i++){
		printf("\n\n");
		for(j = 0; j < r; j++){
			printf(" %d  ", A[i][j]);
		}
	}
	printf("\n\nVetor B!\n");
	for(i = 0; i < m; i++){
		printf("\n\n");
		for(j = 0; j < s; j++){
			printf(" %d  ", B[i][j]);
		}
	}
	printf("\n\nVetor C!\n");
	for(i = 0; i < p; i++){
		printf("\n\n");
		for(j = 0; j < t; j++){
			printf(" %d  ", C[i][j]);
		}
	}
	printf("\n\nVetor D!\n");
	for(i = 0; i < q; i++){
		printf("\n\n");
		for(j = 0; j < u; j++){
			printf(" %d  ", D[i][j]);
		}
	}
	if (n == m & r == s & p == q & t == u){
		int soma1[n][r], soma2[p][q];
		for(i = 0; i < n; i++){
			for(j = 0; j < r; j++){
				soma1[i][j] = A[i][j] * B[i][j];
			}
		}
		for(i = 0; i < n; i++){
			for(j = 0; j < r; j++){
				soma2[i][j] = C[i][j] * D[i][j];
			}
		}
		if (n == p & r == t){
			int result[n][r];
			printf("\n\nResultado do calculo: \n");
			for(i = 0; i < n; i++){
				printf("\n\n");
				for(j = 0; j < r; j++){
					result[i][j] = soma1[i][j] + soma2[i][j];
					printf(" %d  ", result[i][j]);
				}
			}
		}
	}
	else{
		printf("\n\nNao e possivel realizar o calculo!");
	}
	printf("\n\nObrigado por utilizar nosso sistema!");
	system ("pause");
	return 0;
}
