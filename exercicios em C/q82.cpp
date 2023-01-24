#include <stdio.h>

int main(void){
	int volume, i, n, raio, soma;
	printf("\n\nEste programa determina o volume de n esferas, e determina o valor soma total.");
	printf("\n\nDigite quantos esferas voce deseja calcular o volume: ");
	scanf("%d", &n);
	for (i = 1; i <= n; i++){
		printf("\n\n\n\nDigite o valor do raio da %d esfera: ", i);
		scanf("%d", &raio);
		volume = (12.56 * (raio * raio * raio)) / 3;
		soma = soma + volume;
		printf("\nO valor volume do %d esfera e de: %d.", i, volume);
	}
	printf("\n\n\n\nO valor total das %d esferas e de: %d.", n, soma);
	printf("\nObrigado por utilizar nosso sistema!");
	return 0;
}
