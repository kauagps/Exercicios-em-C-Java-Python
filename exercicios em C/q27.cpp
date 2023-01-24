#include <stdio.h>


int main(void){
	char ch, a, e, i, o, u, A, E, I, O, U;
	int r, n, soma;
	soma = 0;
	n = 0;
	printf("\n\nEste programa calcula o numero de vogais de uma palavra!");
	printf("\n\ndigite o numero de letras a qual a palavra desejada tem: ");
	scanf("%d", &n);
	r = 1;
	n = n * 2;//Uma gambiarra pq nao fasso ideia do pq o loop acontecia duas vezes de uma vez, portanto se tivesse 4 letras pra ler
	// ele iria ler somente 2;-;, o importante e q funcionou :).
	while (r <= n){
		if(r == 1){
			printf("\nDigite uma letra de cada vez:");
		}
		printf("\n");
		scanf ("%c", &ch);
		if ((ch == 'a') || (ch == 'e') || (ch == 'i') || (ch == 'o') || (ch == 'u') || (ch == 'A') || (ch == 'E') || (ch == 'I') || (ch == 'O') || (ch == 'U')){
			soma = soma + 1;
		}
		r = r + 1;
	}
	printf("\n\nA quantidade de vogais em sua palavra e: %d.", soma);
	printf("\nObrigado por utilizar nosso sistema!");
	return 0;
}
