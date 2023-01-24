#include <stdio.h>

int main(void){
	int i, n, n2C, n2, num1, num2, ass;
	num1 = 1;
	num2 = 0;
	printf("\n\nEste programa realiza a serie de fibonacci e, determina se um termo usado pelo usuario pertence a serie de fibonacci.");
	printf("\n\nDigite a quantidade de termos que voce deseja que repita se a serie de fibonacci: ");
	scanf("%d", &n);
	printf("\n\nDigite o numero a qual voce acredita que faz parte da serie de fibonacci: ");
	scanf("%d", &n2);
	for (i = 1; i <= n; i++){
		ass = num1 + num2;
		num1 = num2;
		num2 = ass;
		if(i == 1){
			printf("\n\n%d,", num1);
		}
		if(i == n){
			printf("%d.", num1);
		}
		else{
			printf("%d,", num1);
		}
		if(num2 == n2){
			n2C = num2;
		}	
	}
	if(n2C == n2){
		printf("\n\n%d pertence a serie de fibonacci!", n2);
	}
	else{
		printf("\n\n%d nao pertence a serie de fibonacci!", n2);
	}
	printf("\n\nObrigado por utilizar nosso sistema!");
	return 0;
}
