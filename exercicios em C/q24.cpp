#include <stdio.h>

int main(void){
	int i, n, fat, p, num;
	fat = 0;
	printf("\nEste programa calcula o faturamento mensal de um mercado!");
	printf("\nDigite o numero de mercadorias diferentes que voce possui: ");
	scanf("%d", &n);
	for (i = 1; i <= n; i++){
		printf("\nDigite o numero de unidades vendidas da %d mercadoria: ", i);
		scanf("%d", &num);
		printf("\nAgora digite o preco da %d mercadoria: ", i);
		scanf("%d", &p);
		fat = (num * p) + fat;
	}
	printf("\nO faturamento mensal e de %d.", fat);
	return 0;
}
