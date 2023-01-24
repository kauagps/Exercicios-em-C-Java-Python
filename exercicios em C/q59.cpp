#include <stdio.h>

int main(void){
	double anos, result;
	printf("\n\nEste programa determina a distancia percorrida em anos luz.");
	printf("\n\nDigite quantos anos a distancia possue: ");
	scanf("%d", &anos);
	result = anos * 9461;//mais uma gambiarra ;) O real valor de um ano luz e aproximadamente 9.461.000.000.000, mas o programa buga
	// com um valor tao alto, com isso, eu tirei seus 8 zeros e deixei somente seus primeiros valores para calcular,
	// e depois imprimi os o resultado do numero menor com seus 8 zeros no printf.
	printf("\nA distancia percorrida foi de %d000000000 quilometros.", result);
	printf("\n\nObrigado por utiliza nosso sistema!");
	return 0;	
}
