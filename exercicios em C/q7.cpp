#include <stdio.h>

int main (void){
	int minutos, fatura;
	printf ("\nEste programa determina a fatura de uma conta telefonica pre pago de 6000 minutos, de custo (R$): 70,00, sabendo que e cobrado (R$): 0,13 por minutos exedentes. ");
	printf ("\nDigite a quantidade de minutos gastos em ligacoes: ");
	scanf ("%d", &minutos);
	if (minutos > 6000){
		fatura = ((minutos - 6000) * 0.13) + 70.00;
		printf ("\n\nO valor de sua fatura e de R$: %d.", fatura);
	}
	else if (minutos <= 6000){
		printf ("\n\nA quantidade de minutos nao utrapassou 6000, portanto a fatura sera somente (R$): 70,00.");
	}
	printf("\n\nObrigado por utilizar nosso sistema!");
	return 0;
}
