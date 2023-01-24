#include <stdio.h>

int main(void){
	int i, n, idade, media, idadeMaior, idadeMenor, quantMaior, quantMenor;
	idadeMaior = 0;
	idadeMenor = 0;
	quantMaior = 0;
	quantMenor = 0;
	printf("\n\nEste programa ler a idade de n pessoas e comparaas para assim definir, a idade media, quem tem a maior idade, quem tem a menor idade, quantos sao maiores de idades, e quantos sao menores de idade.");
	printf("\n\nDigite a quantidade de pessoas a qual iremos comparar a idade:");
	scanf("%d", &n);
	for (i = 1; i <= n; i++){
		printf("\n\nDigite quantos anos a %d pessoa tem: ", i);
		scanf("%d", &idade);
		media = media + idade;
		if (i == 1){
			idadeMenor = idade;
			idadeMaior = idade;
		}
		if (idadeMaior < idade){
			idadeMaior = idade;
		}
		else if(idadeMenor > idade){
			idadeMenor = idade;
		}
		if (idade > 18){
			quantMaior = quantMaior + 1;
		}
		if(idade <= 18){
			quantMenor = quantMenor + 1;
		}
	}
	media = media / n;
	printf("\n\nA media idade das %d pessoa e igual a %d, a pessoa mais velha tem %d anos de idade, e mais nova tem %d anos de idade.", n, media, idadeMaior, idadeMenor);
	printf("\nSomando todas as pessoas maiores de idade resulta em %d pessoas, e somando todas menores de idade e igual a %d pessoas.", quantMaior, quantMenor);
	printf("\nObrigado por utilizar nosso sistema!");
	return 0;
}
