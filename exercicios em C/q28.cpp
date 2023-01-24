#include <stdio.h>

int main(void){
	int a1, b1, c1, a2, b2, c2, a3, b3, c3;
	printf("\n\nEste progrma determina se tres atomos sao isobaros, isotonos ou isotopos.");
	printf("\n\nDigite o numero de protons do primeiro atomo: ");
	scanf("%d", &a1);
	printf("\n\nDigite o numero de protons do segundo atomo: ");
	scanf("%d", &b1);
	printf("\n\nDigite o numero de protons do terceiro atomo: ");
	scanf("%d", &c1);
	
	printf("\n\nDigite o numero de massa do primeiro atomo: ");
	scanf("%d", &a2);
	printf("\n\nDigite o numero de massa do segundo atomo: ");
	scanf("%d", &b2);
	printf("\n\nDigite o numero de massa do terceiro atomo: ");
	scanf("%d", &c2);
	
	printf("\n\nDigite o numero de neutrons do primeiro atomo: ");
	scanf("%d", &a3);
	printf("\n\nDigite o numero de neutrons do segundo atomo: ");
	scanf("%d", &b3);
	printf("\n\nDigite o numero de neutrons do terceiro atomo: ");
	scanf("%d", &c3);
	
	if(a1 == b1 == c1){
		printf("\n\nOs tres atomos sao isotonos!");
	}
	else if (a1 == b1 & b1 != c1){
		printf("\n\nSomente o primeiro e segundo atomos sao isotanos!");
	}
	else if (a1 == c1 & c1 != b1){
		printf("\n\nSomente o primeiro e terceiro atomos sao isotanos!");
	}
	else if(c1 == b1 & b1 != a1){
		printf("\n\nSomente o segundo e o terceiro atomo sao isotanos!");
	}
	else {
		printf("\n\nNenum dos atomos sao isotanos!");
	}
		
	
	if(a2 == b2 == c2){
		printf("\n\nOs tres atomos sao isobaros!");
	}
	else if (a2 == b2 & b2 != c2){
		printf("\n\nSomente o primeiro e segundo atomos sao isobaros!");
	}
	else if (a2 == c2 & c2 != b2){
		printf("\n\nSomente o primeiro e terceiro atomos sao isobaros!");
	}
	else if(c2 == b2 & b2!= a2){
		printf("\n\nSomente o segundo e o terceiro atomo sao isobaros!");
	}
	else {
		printf("\n\nNenum dos atomos sao isobaros!");
	}
	
	if(a3 == b3 == c3){
		printf("\n\nOs tres atomos sao isotopos!");
	}
	else if (a3 == b3 & b3 != c3){
		printf("\n\nSomente o primeiro e segundo atomos sao isotopos!");
	}
	else if (a3 == c3 & c3 != b3){
		printf("\n\nSomente o primeiro e terceiro atomos sao isotopos!");
	}
	else if(c3 == b3 & b3 != a3){
		printf("\n\nSomente o segundo e o terceiro atomo sao isotopos!");
	}
	else {
		printf("\nNenum dos atomos sao isotopos!");
	}
	
	printf("\n\nObrigado por utilizar nosso programa.");
	return 0;
	
	
}
