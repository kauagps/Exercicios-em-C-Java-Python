#include <stdio.h>

int main(void){
	int perimetro, a, b, c, area, d;
	printf("\n\nEste programa determina a area e o perimetro de um triangulo qualquer.");
	printf("\n\n        ____");
	printf("\n     /|    |");
	printf("\n    / |    |");
	printf("\n A /  | B  | altura ");
	printf("\n  /   |    |");
	printf("\n /____|____|");
	printf("\n    C");
	printf("\n\nDigite o valor de A: ");
	scanf("%d", &a);
	printf("\n\nDigite o valor de B: ");
	scanf("%d", &b);
	printf("\n\nDigite o valor de C: ");
	scanf("%d", &c);
	printf("\n\nDigite o valor da altura: ");
	scanf("%d", &d);
	perimetro = a + b + c;
	area = c * d / 2;
	printf("\n\n        ____");
	printf("\n     /|    |");
	printf("\n    / |    |");
	printf("\n %d /  |%d   | %d ", a, b, d);
	printf("\n  /   |    |");
	printf("\n /____|____|");
	printf("\n  %d", c);
	
	printf("\n\nO valor do perimetro do triangulo e: %d\n", perimetro);
	printf("\n\nO valor da area do triangulo e: %d\n", area);
	printf("\n\nObrigado por utilizar nosso sistema!");
	return 0;
}
