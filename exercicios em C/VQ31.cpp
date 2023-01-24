#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>
#include <string.h>

int main(void){
	system ("cls");
	setlocale(LC_ALL, "portuguese");
	int i, j, n, qnt = 0;
	
	printf("\n\nDigite quantas linhas seu texto possui: ");
	scanf("%d", &n);
	
	char texto[30][80];
	char let[1];
	fflush(stdin);
	
	for(i = 0; i < n; i++){
		printf("\n\nDigite a %d linha: ", i);
		gets(texto[i]);	
	} 
	
	printf("\n\nDigite a letra: ");
	gets(let);
	
	printf("\n\nDigite qualquer tecla para continuar...");
	getch();
	system("cls");
	
	int z = -1;
	for(i = 0; i < n; i++){
		for(j = 0; texto[i]; j++){
			z = (strcmp(texto[i][j], let));
		}
	}
	
	for (i = 0; i < n; i++){
		printf("\n%s", texto[i]);
	}
	
	printf("\n\nA letra (%s) repetiu %d vezes!", let, z);
	return 0;
}
