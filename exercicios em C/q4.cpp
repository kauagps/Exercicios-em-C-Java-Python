#include <stdio.h>

int main (void){
	int op, real, conversao;
	printf ("\nEste programa converte uma de quatro diferetes moedas em real, com base na cotacao de 28 de marco de 2019.");
	printf ("\nEscolha uma das segintes moedas.");
	printf ("\nMenu: ");
	printf ("\n1 Dolar.");
	printf ("\n2 Libras esterlinas.");
	printf ("\n3 Renminbi.");
	printf ("\n4 Euro.");
	printf ("\nDigite o numero da opcao desejada: ");
	scanf ("%d", &op);
	switch (op){
		case 1:
		printf ("\n\n\t\tDolar.");
		printf ("\nDigite o valor em reais a qual voce quer converter em dolar: ");
		scanf ("%d", &real);
		conversao = real / 3,90;
		printf ("\nO resultado da sua conversao e: %d", conversao);
		break;
			
		case 2:
		printf ("\n\n\t\tLibras Esterlinas.");
		printf ("\nDigite o valor em reais a qual voce quer converter em Libras Esterlinas: ");
		scanf ("%d", &real);
		conversao = real / 5,10;
		printf ("\nO resultado da sua conversao e: %d", conversao);
		break;
			
		case 3:
		printf ("\n\n\t\tRenminbi.");
		printf ("\nDigite o valor em reais a qual voce quer converter em Renminbi: ");
		scanf ("%d", &real);
		conversao = (real * 100) / 58;
		printf ("\nO resultado da sua conversao e: %d", conversao);
		break;
			
		case 4:
		printf ("\n\nvoce escolheu a moeda Euro.");
		printf ("\nDigite o valor em reais a qual voce quer converter em Euro: ");
		scanf ("%d", &real);
		conversao = real / 4,38;
		printf ("\nO resultado da sua conversao e: %d\n", conversao);
		break;
			
		default:
		printf ("\n\nErro! tente novamente, veja se voce digitou uma das opcoes validas.");
		break;
	}
	printf ("\n\nObrigado por utiliza nosso sistema.");
	return 0;
}

