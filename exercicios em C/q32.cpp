#include <stdio.h>
#include <math.h>
	
int main(void){
	int base, expoente, result;
	printf("\n\nEste programa calcula um problema de potenciacao qualquer.");
	printf("\n\ndigite o valor da base: ");
	scanf("%d", &base);
	printf("\n\nDigite o valor do expoente: ");
	scanf("%d", &expoente);
	result = pow (base, expoente);
	printf("\n\n%d elevado a %d: %d", base, expoente, result);
	return 0;
}
