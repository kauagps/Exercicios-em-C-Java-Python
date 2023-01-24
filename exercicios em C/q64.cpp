#include <stdio.h>

int main(void){
	int vc, raio, volumeB;
	printf("\n\nEste programa calcula o volume de uma bola e determina o volume necessario de uma caixa para comportar 10 bolas.");
	printf("\n\nDigite o valor do raio de uma das bolas: ");
	scanf("%d", &raio);
	volumeB = 12.56 * ((raio * raio)* raio) / 3;
	vc = volumeB * 11;
	printf("\n\nO volume necessario da caixa para comportar 10 bolas de volume %d e %d", volumeB, vc);
	printf("\n\nObrigado por utilizar nosso sistema!");
	return 0;
	
	
}
