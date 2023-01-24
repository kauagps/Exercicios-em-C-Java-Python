package jaquadrado;

import java.util.Scanner;

public class JAQuadrado {

    public static void main(String[] args) {
        Scanner ler = new Scanner(System.in);
        float lado, area;
        area = 0;
        System.out.printf ("\n\nEste programa determina a "
                + "área de um quadrado!");
        System.out.printf ("\n\nDigite o valor do lado do "
                + "quadrado (m): ");
        lado = ler.nextFloat();
        area = lado * lado;
        System.out.printf ("\n\nA área do quadrado é de "
                + "%.2f metros quadrados!", area);
        System.out.printf ("\n\nObrigado por utilizar nosso "
                + "sistema!");
        System.out.println();
    }
    
}
