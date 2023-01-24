#include <stdio.h>

int main(void){
	int n, volEspuma, volumeCa, volumeCi, areaBc, h, com, alt, lar;
	volEspuma = 0;
	volumeCa = 0;
	volumeCi = 0;
	printf("\n\nEste programa determina a quantidade de espulma necessario para proteger n luminarias.");
	printf("\n\nDigite a quantidade de luminarias a qual voce deseja protejer: ");
	scanf("%d", &n);
	printf("\n\ndigite o valor da area da base do cilindro: ");
	scanf("%d", &areaBc);
	printf("\n\nDigite o valor da altura do cilindro: ");
	scanf("%d", &h);
	printf("\n\ndigite o valor do comprimento da caixa: ");
	scanf("%d", &com);
	printf("\n\nDigite o valor da altura da caixa: ");
	scanf("%d", &alt);
	printf("\n\nDigite o valor da largura da caixa: ");
	scanf("%d", &lar);
	volumeCi = areaBc * h;
	volumeCa = (com * alt) * lar;
	if(volumeCi > volumeCa){
		printf("\n\nA caixa nao suporta o tamanho da luminaria!");
	}
	else{
    	volEspuma = (volumeCa - volumeCi) * n;
  	    printf("\n\nO volume necessario de espuma e de: %d", volEspuma);
    }
	printf("\n\nObrigado por utilizar nosso sistema!");
	return 0;
}
