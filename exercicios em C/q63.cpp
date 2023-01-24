#include <stdio.h>

int main(void){
	int x, y;
	printf("\n\nEste programa determina o quadrante de pertencimente no plano cartesiano de um numero x, e y. ");
	printf("\n\nDigite o valor de x: ");
	scanf("%d", &x);
	printf("\n\nDigite o valor de y: ");
	scanf("%d", &y);
	if (x > 0 & y > 0){
		printf("\n\nOs valores digitados x e y (%d, %d) sao do primeiro quadrante.", x, y);
	}
	else if (x < 0 & y > 0){
		printf("\n\nOs valores digitados x e y (%d, %d) sao do segundo quadrante.", x, y);
	}
	else if (x < 0 & y < 0){
		printf("\n\nOs valores digitados x e y (%d, %d) sao do terceiro quadrante.", x, y);
	}
	else if(x > 0 & y < 0){
		printf("\n\nOs valores digitados x e y (%d, %d) sao do quarto quadrante.", x, y);
	}
	else if(x == 0 & y == 0){
		printf("\n\nOs dois numero estao em ponto de origem!");
	}
	printf("\n\nObrigado por utilizar nosso sistema!");
	return 0;
}
