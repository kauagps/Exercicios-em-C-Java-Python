	#include <stdio.h>

int main(void){
	int peso;
	printf ("\n\nEste programa determina o indice de massa corporal de uma pessoa.");
	printf("\n\nDigite o peso: ");
	scanf("%d", &peso);
	if (peso < 16) {
		printf ("\n\nA massa dessa pessoa e de alguem com magresa estrema!!!");
		printf("\n\nObrigado por utilizar nosso programa, e busque tratamento urgente!!!");
	}
	else
		if(peso == 16, peso < 17){
			printf("\n\nEssa pessoa esta em um estado de magresa moderada.");
			printf("\n\nObrigado por utilizar nosso programa, busque melhorar sua saude mais um pouco.");
		}
		else
			if(peso == 17, peso < 18){
				printf("\n\nEssa pessoa esta com magresa leve.");
				printf("\n\nObrigado por utilizar nosso programa, esta quase la melhore um pouquinho mais sua alimentacao.");
			}
		else
			if(peso == 18, peso < 25){
				printf("\n\nEssa pessoa esta saudavel.");
				printf("\n\nObrigado por utilizar nosso programa, parabens continue com sua saude dessa forma.");
			}
		else
			if(peso == 25, peso < 30){
				printf("\n\nEssa pessoa esta com sobre peso.");
				printf("\n\nObrigado por utilizar nosso programa, busque melhorar alimentacao antes que seja tarde.");
			}
		else
			if(peso == 30, peso < 35){
				printf("\n\nEssa pessoa esta com obesidade gral 1.");
				printf("\n\nObrigado por utilizar nosso programa, melhore sua alimentacao pois e perigoso.");
			}
		else
			if(peso == 35, peso < 40){
				printf("\n\nEssa pessoa esta com obesidade gral 2. (SEVERA)!");
				printf("\n\nObrigado por utilizar nosso programa, melhore o quanto antes sua alimentacao pois e grave!");
			}
		else
			if(peso > 40){
				printf("\n\nEssa pessoa esta com obesidade gral 3. (MORBIDA)!!!");
				printf("\n\nObrigado por utilizar nosso programa, busque tratamento urgente pois sua situacao e grave!!!");
			}
	return 0;
}
