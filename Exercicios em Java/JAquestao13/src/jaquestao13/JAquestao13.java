
package jaquestao13;

import java.util.Scanner;

public class JAquestao13 {

    
    public static void main(String[] args) {
        Scanner leia = new Scanner(System.in);
        float A, B, C;
        System.out.printf ("\n\nEste programa verifica se três "
                + "números formam um triângulo, classificando-o!");
        System.out.printf ("\n\nDigite o primeiro número: ");
        A = leia.nextFloat();
        System.out.printf ("\n\nDigite o segundo número: ");
        B = leia.nextFloat();
        System.out.printf ("\n\nDigite o terceiro número: ");
        C = leia.nextFloat();
        if ((A < B + C) && (B < A + C) && (C < A + B)) {
            System.out.printf ("\n\nOs três números formam um triângulo!");
            if ((A == B) && (A == C) && (B == C)) {
                System.out.printf ("\n\nTemos um triângulo equilátero!");
            }
            else if ((A == B) || (A == C) || (B == C)) {
                System.out.printf ("\n\nTemos um triângulo isósceles!");
            }
            else if ((A != B) && (A != C) && (B != C)) {
                System.out.printf ("\n\nTemos um triângulo escaleno!");
            }
            
            if ((A * A == ((B * B) + (C * C))) || (B * B == (( A * A ) + (C * C))) || (C * C == ((A * A) + (B * B)))){
        	System.out.printf("\nE os valores digitados formam um triangulo retangulo!");
            }
            else if((A * A > (B * B) + (C * C)) || (B * B > ( A * A ) + (C * C)) || (C * C > (A * A) + (B * B))){
		System.out.printf("\nE os valores digitados formam um triangulo obtusangulo!");
            }
            else if((A * A < (B * B) + (C * C)) || (B * B < ( A * A ) + (C * C)) || (C * C < (A * A) + (B * B))){
		System.out.printf("\nE os valores digitados formam um triangulo acutangulo");
		}
        }
        else
            System.out.printf ("\n\nOs três números não formam triângulo!");
          
        System.out.printf ("\n\nObrigado por utilizar nosso "
                + "sistema!");
        System.out.println();
    }
    
}
