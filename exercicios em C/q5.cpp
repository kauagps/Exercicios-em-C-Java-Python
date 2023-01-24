#include <stdio.h>

int main(void){
	int a, b, c, delta, b2, b3;
	printf ("\nEste programa determina quantas raizes uma equacao de segundo gral tem, e o valor do delta.");
	printf ("\nDigite o valor de a: ");
	scanf ("%d", &a);
	printf ("\nAgora digite o valor de b: ");
	scanf ("%d", &b);
	printf ("\nE por ultimo digite o valor de c: ");
	scanf ("%d", &c);
	b2 = b * b;
	b3 = ((4 * a) * c);
	delta = (b * b) - ((4 * a) * c);
	printf("\nb² - 4 * a * c =");
	printf("\n%d² - 4 * %d * %d =", b, a, c);
	printf("\n%d - %d =", b2, b3);
	printf("\n%d + %d =", b2, b3);

	printf("\n= %d", delta);
	//so pra deixa mais bunitinho tbm :)
	
	if (delta > 0){
		printf ("\n\nSeu delta possui duas raizes.");
	}
	else if(delta == 0){
		printf ("\n\nSeu delta possui somente uma raiz.");
	}
	else if(delta < 0){
		printf ("\n\nSeu delta possui nenhuma raiz!");
	}
	printf ("\nE resultado do valor do delta e: %d", delta);
	printf("\n\nObrigado por utilizar nosso sistema!");
	return 0;
}
