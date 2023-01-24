#include <stdio.h>

int main(void){
	int i, n, peso, altura, idade, mediaP, mediaA, mediaI, maA, maP, maI, meA, meP, meI;
	printf("\n\nEste programa determina a media, maior e menor, peso, idade e altura de n pessoas.");
	printf("\n\nDigite a quantidade de pessoas a qual voce ira compara peso, idade, e altura: ");
	scanf("%d", &n);
	for(i = 1; i <= n; i++){
		printf("\n\nDigite o peso da %d pessoa: ", i);
		scanf("%d", &peso);
		printf("\nDigite a altura da %d pessoa: ", i);
		scanf("%d", &altura);
		printf("\nDigite a idade da %d pessoa: ", i);
		scanf("%d", &idade);
		mediaP = mediaP + peso;
		mediaA = mediaA + altura;
		mediaI = mediaI + idade;
		if(i == 1){
			maA = altura;
			maP = peso;
			maI = idade;
			meA = altura;
			meP = peso;
			meI = idade;
		}
		if(maA < altura){
			maA = altura;
		}
		else if(meA > altura){
			meA = altura;
		}
		if(maP < peso){
			maP = peso;
		}
		else if(meP > peso){
			meP = peso;
		}
		if(maI < idade){
			maI = idade;
		}
		else if(meI > idade){
			meI = idade;
		}
	}
	mediaP = mediaP / n;
	mediaA = mediaA / n;
	mediaI = mediaI / n;
	printf("\n\nAs medias sao: media de peso %d, media de altura %d, e media de idade %d.", mediaP, mediaA, mediaI);
	printf("\nA maior altura e %d, e a menor altura e %d, o maior peso e %d, e o menor peso e %d, a maior idade e %d, e a menor idade e %d.", maA, meA, maP, meP, maI, meI);
	printf("\n\nObrigado por utilizar nosso sistema!");
	return 0;
}

