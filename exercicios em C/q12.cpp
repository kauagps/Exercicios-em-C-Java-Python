#include <stdio.h>

int main()
{
	int DDI;
	printf ("\n\nEste programa determina se um pais e sul americano ou nao, com base no DDI digitado.");
	printf("\nDigite o DDI do pais desejado: ");
	scanf("%d", &DDI);
	if ((DDI == 54 || DDI == 591 || DDI == 55 || DDI == 56 || DDI == 57 || DDI == 593 || DDI == 44 || DDI == 594 || DDI == 592 || DDI == 595 || DDI == 51 || DDI == 597 || DDI == 58 || DDI == 598)) {
	printf ("\n\nO DDI digitado pertence a um pais sul americano!");
	}
	else {
	printf ("\n\nO DDI digitado nao pertence a um pais sul americano!");
	}
	printf ("\n\nObrigado por utilizar nosso programa!");
	return 0;
}
