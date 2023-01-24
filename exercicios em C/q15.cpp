#include <stdio.h>

int main(void) {
	int media, soma, n, pontos, i;
	
	printf ("\n\nEste programa determima a media bimestral de uma sala.");
	
	printf ("\n\nDigite a quantidade de alunos: ");
	scanf ("%d", &n);
	
	for (i = 1; i <= n; i++) {
		printf ("\n\nDigite a pontucao do %d aluno: ", i);
		scanf("%d", &pontos);
		soma = pontos + soma;
	}	
	media = soma / n;
	printf("\n\nA media a media bimestral da turma e: %d.", media);
	printf("\n\nObrigado por utilizar nosso sistema!");
	return 0;
}
