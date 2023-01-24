#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

int main(void){
	system("cls");
	setlocale(LC_ALL, "portuguese");
	int A[2][2], i, j, k, l, aux[2][2], aux1;
	printf("\n\nDigite os valores: ");
	for (i = 0; i < 2; i++){
		for (j = 0; j < 2; j++){
			printf("\n\nValor correspondente a posiçao [%d][%d]: ", i, j);
			scanf("%d", &A[i][j]);
		}
	}
	printf("\n\n\t\tVetor!\n");
	for (i = 0; i < 2; i++){
		printf("\n\n");
		for (j = 0; j < 2; j++){
			for (k = 0; k < 2; k++){
				for (l = 0; l < 2; l++){
					aux1 = A[k][l];
					if (i == 0 & j == 0){
						if (aux1 < A[k][l]){
							aux1 = A[k][l];
						}
						aux[i][j] = aux1;
					}
					else if (aux1 < A[k][l] & aux1 > aux[i - 1][j - 1]){
						aux1 = A[k][l];
					}
					aux[i][j] = aux1;
				}
			}
			printf(" %d  ", aux[i][j]);
		}
	}
	return 0;
}
