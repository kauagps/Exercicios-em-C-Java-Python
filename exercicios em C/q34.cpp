#include <stdio.h>

int main(void){
	int i, nota, n, notaMax, notaMin, media, maiorM, menorM, alunosRep, alunosAprov;
	maiorM = 0; 
	menorM = 0;
	alunosRep = 0; 
	alunosAprov = 0;
	printf("\n\nEste programa ler notas variadas entre 0 e 10 de n alunos e determina, nota maxima, nota mminima, a media da turma, a quantidade de notas maiores do que a media, a quantidade de notas menores que a media, a quantidade de alunos aprovados, e reprovados.");
	printf("\n\nDigite a quantidade de alunos pertencente a turma: ");
	scanf("%d", &n);
	for(i = 1; i <= n; i++){
		printf("\n\nDigite a nota do %d aluno: ", i);
		scanf("%d", &nota);
		if (i == 1){
			notaMax = nota;
			notaMin = nota;
		}
		if(notaMax < nota){
			notaMax = nota;
		}
		else if(notaMin > nota){
			notaMin = nota;
		}
		if (nota < 7){
			alunosRep++;
		}
		else if(nota >= 7){
			alunosAprov++;
		}
	}
	printf("\n\nPorfavor Digite as notas do alunos novamente para o calculo da media");
	for(i = 1; i <= n; i++){
		printf("\n\nDigite a nota do %d novamente: ", i);
		scanf("%d", &nota);
		media = media + nota;
	}
	media = media / n;
	if (nota >= media){
		maiorM = maiorM + 1;
		}
	else if (nota < media){
		menorM = menorM + 1;
	}
	printf("\n\nA nota maxima foi %d, e a nota minima foi %d .", notaMax, notaMin);
	printf("\n\nA media da turma foi %d, a quantidade de notas maiores da media foi %d, e a quantidade menores foram %d", media, maiorM, menorM);
	printf("\n\nA quantidade de alunos aprovados foram %d, e a quantidade de reprovados foram %d.", alunosAprov, alunosRep);
	printf("\n\nObrigado utilizar nosso programa!");
	return 0;
}
