#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>
#include <string.h>

int main(void){
	system ("cls");
	setlocale(LC_ALL, "portuguese");
	int n, i;
	printf("\n\nEste programa realiza o registro do numero de pacientes desejado, e efetua a busca por codigo ou CPF dos pacientes registrados!");
	printf("\nDigite o numero de pacientes que deseja cadastrar: ");
	scanf("%d", &n);
	char nome[n][80], codigo[n][80], cpf[n][11], telefone[n][11];
	fflush(stdin);
	for (i = 0; i < n; i++){
		printf("\n\nDigite o nome de seu %dº paciente: ", i);
		gets(nome[i]);
		printf("\n\nDigite o codigo do %dº paciente: ", i);
		gets(codigo[i]);
		printf("\n\nTranscreva o CPF de seu %dº paciente: ", i);
		gets(cpf[i]);
		printf("\n\n Digite o numero de seu %dº paciente: ", i);
		gets(telefone[i]);
		printf("\n\nDigite qualquer tecla para continua...");
		getch();
		system("cls");
	}
	
	printf("\n\nCadastros completo, digite qualquer tecla para continuar...");
	getch();
	system("cls");
	
	int z, op, y = 0, w = -1, x, op1;
	
	for(z = 0; z == 0;){
		printf("\n\nMenu:");
		printf("\n1.Codigo");
		printf("\n2.CPF");
		printf("\n3.Sair");
		printf("\nDigite a opçao que deseje para a busca de cadastro: ");
		scanf("%d", &op);
		system("cls");
		fflush(stdin);
		switch(op){
			case 1:
				char codigobusca[80];
				printf("\n\nVoce escolheu a busca por codigo!");
				printf("\n\nDigite o codigo para busca de cadastro: ");
				gets(codigobusca);
				for(i = 0; i < n; i++){
					x = -1;
					x = (strcmp(codigo[i], codigobusca));
					if(x == 0){
						y = 1;
						w = i;
					}
				}
				system("cls");
				if(y == 1){
					printf("\n\n\t\tCodigo valido!");
					printf("\n\nNome: %s.", nome[w]);
					printf("\nCPF: %s.", cpf[w]);
					printf("\nNumero: %s.", telefone[w]);
					printf("\nCodigo: %s.", codigo[w]);
					printf("\n\nDigite qualquer tecla para continuar...");
					getch();
					system("cls");
				}
				else{
					printf("\n\n\t\tCodigo invalido!");
					printf("\n\nDigite qualquer tecla para continuar...");
					getch();
					system("cls");
				}

				printf("\n\nMenu:");
				printf("\n\n1.Busca outro cadastro.");
				printf("\n\n2.Sair.");
				printf("\n\nDigite a opçao desejada: ");
				scanf("%d", &op1);
				switch(op1){
					case 1:
						system("cls");
						break;
					case 2:
						z = 1;
						break;
					default:
						printf("\n\nOpçao invalida!");
						system("cls");
						break;
				}
				break;
			case 2:
				char cpfbusca[80];
				printf("\n\nVoce escoheu a busca por CPF!");
				printf("\n\nDigite o CPF para busca de cadastro: ");
				gets(cpfbusca);
				for(i = 0; i < n; i++){
					x = -1;
					x = (strcmp(cpf[i], cpfbusca));
					if(x == 0){
						y = 1;
						w = i;
					}
				}
				if(y == 1){
					printf("\n\n\t\tCPF valido!");
					printf("\n\nNome: %s.", nome[w]);
					printf("\nCPF: %s.", cpf[w]);
					printf("\nNumero: %s.", telefone[w]);
					printf("\nCodigo: %s.", codigo[w]);
					printf("\n\nDigite qualquer tecla para continuar...");
					getch();
					system("cls");
				}
				else{
					printf("\n\n\t\tCodigo invalido!");
					printf("\n\nDigite qualquer tecla para continuar...");
					getch();
					system("cls");
				}

				printf("\n\nMenu:");
				printf("\n\n1.Busca outro cadastro.");
				printf("\n\n2.Sair.");
				printf("\n\nDigite a opçao desejada: ");
				scanf("%d", &op1);
				switch(op1){
					case 1:
						system("cls");
						fflush(stdin);
						break;
					case 2:
						z = 1;
						break;
					default:
						printf("\n\nOpçao invalida!");
						system("cls");
						break;
				}
				break;
			case 3:
				z = 1;
				break;
			default:
				printf("\n\n\t\tOpçao invalida!");
				system("cls");
				break;
		}
	}
	printf("\n\nObrigado por utilizar nosso programa!\n");
	system("pause");
	return 0;
}
