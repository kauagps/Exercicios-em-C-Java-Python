#include <stdio.h>

int main(void){
	int n, nota, media, i;
	printf("\n\nEste programa calcula o numero de alunos assima da media, levando em conta que a media e de 7.");
	printf("\n\nDigite a quantidade de alunos pertencente a turma: ");
	scanf("%d", &n);
	for (i = 1; i <= n; i++){
		printf("\n\nDigite a nota do %d aluno: ", i);
		scanf("%d", &nota);
		if(nota => 7){
			media = media + 1;	
		}
	}
	printf("\n\nA sala de aula com %d alunos, teve %d alunos com a nota assima da media.", n, media);
	printf("\n\nObrigado por utilizar nosso programa!");
	return 0;
}
