#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>

int main (void) {
	system ("cls");
	setlocale (LC_ALL, "Portuguese");
	char frase[80];
	int quantVogal = 0, quantConsoante = 0, quantEspacos = 0, quantNumeros = 0, quantOutros = 0, i;
	printf ("\n\nEste programa lê uma frase e determina a quantidade de vogais, consoantes, espaços, numeros e outros!");
	printf ("\n\nDigite a frase: ");
	gets(frase);
	fflush(stdin);
	for (i = 0; i < strlen(frase); i++) {
		if ((isalpha(frase[i])) > 0) { 
			frase[i] = toupper(frase[i]);
			switch (frase[i]) {
				case 'A':
				case 'E':
				case 'I':
				case 'O':
				case 'U':
					quantVogal++;
					break;
				default:
					quantConsoante++;
			}
		}
		else if(isspace(frase[i])){
			quantEspacos++;
		}
		else if(isdigit(frase[i])){
			quantNumeros++;
		}
		else
			quantOutros = quantOutros + 1;
	}
	printf ("\n\nA frase possui %d caracteres!", strlen(frase));
	printf ("\n\nQuantidade de vogais: %d!", quantVogal);
	printf ("\n\nQuantidade de consoantes: %d!", quantConsoante);
	printf ("\n\nQuantidade de espaços: %d!", quantEspacos);
	printf ("\n\nQuantidade de numeros: %d!", quantNumeros);
	printf ("\n\nQuantidade de outros caracteres: %d!", quantOutros);
	printf ("\n\nObrigado por utilizar nosso sistema!\n\n");
	system ("Pause");
	return 0;
}
