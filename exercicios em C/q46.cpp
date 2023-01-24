#include <stdio.h>

int main(void){
	int desconto, venda, salarioTotal, i, n;
	salarioTotal = 5000;
	printf("\n\nEste rograma determina o valor total do salario de um vendedor no final do mes, sabendo que ele ja tem um salario fixo de 5000.");
	printf("\n\nDigite o numero de vendas feitas no mes: ");
	scanf("%d", &n);
	for(i = 1; i <= n; i++){
		printf("\n\nDigite o valor da %d venda: ", i);
		scanf("%d", &venda);
		if (venda <= 1000){
			desconto = venda * 0.05;
			venda = venda - desconto;
		}
		else if(venda > 1000 && venda <= 2000){
			desconto = venda * 0.07;
			venda = venda + desconto;
		}
		else if(venda > 2000){
			desconto = venda * 0.11;
			venda = venda + desconto;
		}
		salarioTotal = salarioTotal + venda;
	}
	printf("\n\nO salario total do funcionario e igual a: %d", salarioTotal);	
	printf("\n\nObrigado por utilizar noso programa!");
	return 0;
}
