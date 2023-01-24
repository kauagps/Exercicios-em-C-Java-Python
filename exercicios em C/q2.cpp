#include <stdio.h>

int main(void){
	int base, altura, perimetro, area;
	printf("\n\nEste programa determina a area e o perimetro de um retangulo qualquer.");
	printf("\nDigite o valor desejado da base do seu retangulo: ");
	scanf("%d", &base);
	printf("\nAgora digite o valor da altura do retangulo: ");
	scanf("%d", &altura);
	area = base * altura;
	perimetro = base + base + altura + altura;
	printf("\n\n----------");
	printf("\n|        | Altura %d", altura);
	printf("\n|        |");
	printf("\n----------");
	printf("\n  base %d", base);
	printf("\n\n%d * %d = %d", base, altura, area);
	printf("\n%d + %d + %d + %d = %d", base, base, altura, altura, perimetro);
	printf("\n\nSeu retangulo com base de valor %d, e altura %d, tem a area com o valor de %d, e o perimetro de %d.", base, altura, area, perimetro);
	printf("\n\nObrigado por utilizar nosso sistema!");
	return 0;
}
