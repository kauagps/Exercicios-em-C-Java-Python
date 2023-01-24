#include <stdio.h>

int main (void){
	int minutos, horas, segundos;
	printf("Este programa transforma minutos em horas e segundos!");
	printf("\nDigite o valor de minutos desejado: ");
	scanf("%d", &minutos);
	horas = minutos / 60;
	segundos = minutos * 60;
	printf("\n\n%d minutos vale %d segundo, e %d horas.", minutos, segundos, horas);
	printf("\nObrigado por utilizar nosso sistema!");
	return 0;
}
