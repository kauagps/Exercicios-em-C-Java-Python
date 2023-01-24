#include <stdio.h>

int main(void){
	int i, n, tempo, tL, tI;
	tI = 0;
	tL = 0;
	printf("\n\nEste programa determina quantos clientes foram atendidos dentro e fora do tempo legal.");
	printf("\n\nDigite o numero de pessoa que estavam na fila: ");
	scanf("%d", &n);
	for(i = 1; i <= n; i++){
		printf("\n\nDigite a quantidade de tempo a qual o %d cliente esperou na fila: ", i);
		scanf("%d", &tempo);
		if(tempo >= 30){
			tI++;
		}
		else if(tempo < 30){
			tL++;
		}
	}
	printf("\n\nA quantidade de clientes atendidos dentro do tempo legal foi de: %d. E a quantidade fora do tempo legal foi de: %d.", tL, tI);
	printf("\n\nObrigado por utilizar nosso sistema!");
	return 0;
}
