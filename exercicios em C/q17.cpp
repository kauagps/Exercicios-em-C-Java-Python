#include <stdio.h>

int main (void){
	int cpf, cpftexte, senha, senhaTexte, datanac, dataNacTexte;
	cpftexte = 123456789;
	senhaTexte = 40028922;
	dataNacTexte = 02022002;
	printf ("\n\nEste programa ler seu CPF, senha e data de nacimento, e confirma se e valido ou nao.");
	printf("\n\nDigite seu CPF: ");
	scanf("%d", &cpf);
	if (cpf == cpftexte){
		printf("\n\nCPF valido! Digite sua senha: ");
		scanf("%d", &senha);
		if(senha == senhaTexte){
			printf("\n\nSenha Valida! Digite sua data de nacimento: ");
			scanf("%d", &datanac);
			if(datanac == dataNacTexte){
				printf("\n\nData de nacimento Valida!");
			}
			else
				if(datanac != dataNacTexte){
				printf("\n\nData de nacimento invalida! Veja se voce escreveu corretamente.");
			}
		}
		else
			if(senha != senhaTexte){
			printf("\n\nSenha Invalida! Veja se voce escreveu corretamente.");
		}
	}
	else
		if (cpf != cpftexte){
		printf("\n\nCPF Invalido! Veja se voce escreveu corretamente.");
	}
	printf("\n\nObrigado por utilizar nosso sistema!");
	return 0;
}
