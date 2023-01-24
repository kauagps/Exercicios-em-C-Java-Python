#include <stdio.h>


int main(void)
{
	int  likes, n, soma, i, media;
	printf ("\n\nEste programa determina a media de curtidas a qual voce recebe em um dia.");
	printf ("\n\nDigite a quantidade de postagens q voce faz no dia: ");
	scanf ("%d", &n);
	for (i = 1; i <= n; i++){
		printf ("\n\nDigite a quantidade de curtidas: ");
		scanf ("%d", &likes);
		soma = likes + soma;
	}
	media = soma / n;
	printf ("A media de like e: %d\n", media);
	printf("\n\nObrigado por utilizar nosso sistema!");
	return 0;
	
}
