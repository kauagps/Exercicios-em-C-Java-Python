#include <stdio.h>
#include <math.h>

int main()
{
	int num1, num2, result, op;
	printf ("\nEste prorama realiza umas das cincos operacoes abaixo:");
	printf ("\n\n\tMenu:");
	printf("\n1.adicao.");
	printf("\n2.subtracao.");
	printf("\n3.multiplicacao.");
	printf("\n4.divisao.");
	printf("\n5.potenciacao.");
	printf("\nEscolha uma das opcoes: ");
	scanf ("%d", &op);
	switch (op) {
		case 1:
		printf("\n\n\tVoce escolheu adicao!");
		printf ("\n\nDigite o primeiro numero: ");
		scanf ("%d", &num1);
		printf ("\nDigite o segundo numero: ");
		scanf ("%d", &num2);
		result = num1 + num2;
		printf("\n%d + %d = %d", num1, num2, result);
		printf ("\nO resultado de sua soma e: %d", result);
		break;
		
		case 2:
		printf("\n\n\tVoce escolheu subtracao!");
		printf ("\n\nDigite o primeiro numero: ");
		scanf ("%d", &num1);
		printf ("\nDigite o segundo numero: ");
		scanf ("%d", &num2);
		result = num1 - num2;
		printf("\n%d - %d = %d", num1, num2, result);
		printf ("\nO resultado de sua subtracao e: %d", result);
		break;
		
		case 3:
		printf("\n\n\tVoce escolheu multiplicacao!");
		printf ("\n\nDigite o primeiro numero: ");
		scanf ("%d", &num1);
		printf ("\nDigite o segundo numero: ");
		scanf ("%d", &num2);
		result = num1 * num2;
		printf("\n%d * %d = %d", num1, num2, result);
		printf ("\nO resultado de sua mutiplicacao e: %d", result);
		break;
		
		case 4:
		printf("\n\n\tVoce escolheu divisao!");
		printf ("\n\nDigite o primeiro numero: ");
		scanf ("%d", &num1);
		printf ("\nDigite o segundo numero: ");
		scanf ("%d", &num2);
		result = num1 / num2;
		printf("\n%d / %d = %d", num1, num2, result);
		printf ("\nO resultado de sua divisao e: %d", result);
		break;
		
		case 5:
		printf("\n\n\tVoce escolheu potecenciacao!");
		printf ("\n\nDigite o valor da base: ");
		scanf ("%d", &num1);
		printf ("\nDigite o valor do expoente: ");
		scanf ("%d", &num2);
		result = pow (num1, num2);
		printf("\n%d elevado a %d = %d", num1, num2, result);
		printf ("\nO resultado de sua potencia e: %d", result);
		break;
		default:
		printf("\n\n\tOpcao invalida!!!");
		break;
	}
	printf ("\n\nObrigado por utiliza nosso sistema.");
	return 0;
}
