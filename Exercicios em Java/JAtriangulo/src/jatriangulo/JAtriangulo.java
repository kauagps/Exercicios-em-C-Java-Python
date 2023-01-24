package jatriangulo;

import java.util.Scanner;

public class JAtriangulo {

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
            System.out.printf ("\n\nOs três números formam um "
                    + "triângulo!");
            if ((A == B) && (A == C) && (B == C)) {
                System.out.printf ("\n\nTemos um triângulo "
                        + "equilátero!");
            }
            else if ((A == B) || (A == C) || (B == C)) {
                System.out.printf ("\n\nTemos um triângulo "
                        + "isósceles!");
            }
            else if ((A != B) && (A != C) && (B != C)) {
                System.out.printf ("\n\nTemos um triângulo "
                        + "escaleno!");
            }
        }
        else
            System.out.printf ("\n\nOs três números não formam um "
                    + "triângulo!");
          
        System.out.printf ("\n\nObrigado por utilizar nosso "
                + "sistema!");
        System.out.println();
    }
    
}
