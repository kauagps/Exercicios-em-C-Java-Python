#include <stdio.h>

int main(void){
	int h, raio, volume;
	printf("\nEste programa calcula o volume de um cone reto qualquer.");
	printf("\nDigite o valor do raio da base de seu cone: ");
	scanf("%d", &raio);
	printf("\nAgora digite o valor da altura de seu cone: ");
	scanf("%d", &h);
	volume = (((((raio * raio) * h) * 100) * 314) / 30000);//gambiarra muito doida que eu fiz ;-;
	printf("\n\n      _   _____");
	printf("\n     | |       |");
	printf("\n     | |       |");
	printf("\n    |   |      |");
	printf("\n    |   |      |");
	printf("\n   |     |     |");
	printf("\n   |     |     |");
	printf("\n  |       |    | altura %d", h);
	printf("\n  |       |    |");
	printf("\n |         |   |");
	printf("\n |         |   |");
	printf("\n |         |   |");
	printf("\n|   _____   |  |");
	printf("\n|_--     --_|  |");
	if(raio < 10){
		printf("\n|   raio %d  |  |", raio);
	}
	else if(raio > 10 & raio < 100){
		printf("\n|  raio %d  |  |", raio);
	}
	else if(raio >= 100 & raio < 1000){
		printf("\n| raio %d  |  |", raio);
	}
	else if(raio >= 1000 & raio < 10000){
		printf("\n|raio %d  |  |", raio);
	}
	printf("\n|_   .-----_|__|");
	printf("\n  -_______-");
	//nao ficou muito legal desculpa :(
	printf("\n\nO volume de seu cone reto: %d", volume);
	printf("\n\nObrigado por utilizar nosso sistema!");
	return 0;
}
