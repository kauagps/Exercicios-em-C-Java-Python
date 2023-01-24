#include <stdio.h>

int main(void){
	int min, fat, desconto;
	printf("\n\nEste programa determina o faturamento total de chamdas internacionais, sabendo que cada minuto equivale 0,30, e que caso o faturamento passe de 500,00, a fatura recebera um desconto de 5 porcentos.");
	printf("\n\ndigite a quantidade de minutos gastos: ");
	scanf("%d", &min);
	fat = min * 0.30;
	if (fat > 500){
		desconto = fat * 0.05;
		fat = fat - desconto;
	}
	printf("\n\nO valor da fatura do cliente com chamadas internacionais e de: %d", fat);
	printf("\n\nObrigado por utilizar nosso sistema!");
	return 0;
}
