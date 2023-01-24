#include <stdio.h>

int main(void){
	int i, n, razao, num;
	n = 100;
	printf("\n\nEste programa recebe uma razao de progressao aritimetica e imprime uma sequecia de 100 numeros, o usuario determina qual o primeiro termo!");
	printf("\n\nDigite o valor da razao: ");
	scanf("%d", &razao);
	printf("\nDigite o numero a qual a progressao inicia: ");
	scanf("%d", &num);
	for (i = 1; i <= n; i++){
		if (i == 1){
			printf("%d, ", num);
		}
		else if(i == 100){
			num = num + razao;
			printf("%d.", num);
		}
		else if(i == 30){
			num = num + razao;
			printf("\n%d, ", num);
		}
		else if(i == 60){
			num = num + razao;
			printf("\n%d, ", num);
		}
		else if(i == 90){
			num = num + razao;
			printf("\n%d, ", num);
		}
		else{
			num = num + razao;
			printf("%d, ", num);
		}
	}
	printf("\n\nObrigado por utilizar nosso sistema!");
	return 0;
}


