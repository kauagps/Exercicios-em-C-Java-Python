#include <stdio.h>

int main(void){
	int i, n, result, kwh, el, w, hs, soma;
	soma = 0;
	result = 0;
	printf("\n\nEste programa determina o faturamento mensal de um conta de energia.");
	printf("\n\nquantos eltronicos possui em sua casa: ");
	scanf("%d", &n);
	for (i = 1; i <= n; i++){
		printf("\n\nQuantas unidade do %d eletronico voce possui: ", i);
		scanf("%d", &el);
		printf("\nDigite a quantidade de W o %d aparelho gasta: ", i);
		scanf("%d", &w);
		printf("\nDigite a quantidade de horas voce gasta com %d aparelho ligado: ", i);
		scanf("%d", &hs);
		result = (el * w * hs * 30) / 1000;
		soma = result + soma;
	}
	printf("\n\nA fatura do mes de energia equivale a: %d", soma);
	printf("\n\nObrigado por utilizar nosso sistema!");
	return 0;
}
