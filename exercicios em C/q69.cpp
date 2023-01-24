#include <stdio.h>

int main(void){
	char a, b, c, gmbr, gmbr1;
	printf("\n\nEste programa determina se uma palavra de tres letras e Palindrome ou nao.");
	printf("\n\nDigite uma letra de cada vez!");
	printf("\n\nPrimeira letra: ");
	scanf("%c", &a);
	
	printf("");
	scanf("%c", &gmbr);
	
	printf("\nSegunda letra: ");
	scanf("%c", &b);

	printf("");
	scanf("%c", &gmbr1);
	
	printf("\nTerceira letra: ");
	scanf("%c", &c);
	//o gmbr, abreviaçao para gambiarra, foi usado pois toda vez que eu colocava o primeiro valor, o programa pulava a leitura do
	//segundo e ja ia para o terceiro, como nao conseguia resolver esse problema, acabei fazendo essa gambiarra, funcionou:)
	if(a == c){
		printf("\n\nA palavra escrita e sim um palindrome!");
	}
	else if(a != c){
		printf("\n\nA palavra escrita nao e um palindrome!");
	}
	printf("\n\nObrigado por utilizar nosso sistema!");
	return 0;
}
