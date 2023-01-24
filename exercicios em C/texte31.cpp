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
	
	char texto[n][80];
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
	
	for(i = 0; i < n; i++){
		for(j = 0; texto[i]; j++){
			if(texto[i][j] == let[0]){
				qnt++;
			}
		}
	}
	
	i = 0;
	while (i < n){
		printf("\n%s", texto[i]);
	}
	
	printf("\n\nA letra repetiu %d vezes!", qnt);
	return 0;
}
