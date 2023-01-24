#include <stdio.h>

int main(void){
	int A, B, C;
	printf ("\n\nEste programa determina se tres numeros formam um triangulo, e caso forme um triangulo, classifica-o em isosceles, escaleno ou equilatero. Tambem verifique se e um triangulo retangulo, acutangulo ou obtusangulo.");
	printf ("\n\nDigite o prmeiro valor: ");
	scanf ("%d", &A);
	printf ("\n\nDigite o segundo valor: ");
	scanf ("%d", &B);
	printf ("\n\nDigite o terceiro valor: ");
	scanf ("%d", &C);
	if ((A < B + C) && (B < A + C) && (C < A + B)) {
        printf ("\n\nOs tres numeros formam um triangulo!");
        if ((A == B) && (A == C) && (B == C)) {
            printf ("\n\nTemos um triangulo equilatero!");
        }
        else if ((A == B) || (A == C) || (B == C)) {
            printf ("\n\nTemos um triangulo isoceles!");
        }
        else if ((A != B) && (A != C) && (B != C)) {
            printf ("\n\nTemos um triangulo escaleno!");
        }
        
        if ((A * A == ((B * B) + (C * C))) || (B * B == (( A * A ) + (C * C))) || (C * C == ((A * A) + (B * B)))){
        	printf("\nE os valores digitados formam um triangulo retangulo!");
		}
		else if((A * A > (B * B) + (C * C)) || (B * B > ( A * A ) + (C * C)) || (C * C > (A * A) + (B * B))){
			printf("\nE os valores digitados formam um triangulo obtusangulo!");
		}
		else if((A * A < (B * B) + (C * C)) || (B * B < ( A * A ) + (C * C)) || (C * C < (A * A) + (B * B))){
			printf("\nE os valores digitados formam um triangulo acutangulo");
		}
	}
    else {
        printf("\n\nOs tres numeros nao formam triangulo!");
	}
	printf("\n\nObrigado por utilizar nosso sistema!");
	return 0;
}
