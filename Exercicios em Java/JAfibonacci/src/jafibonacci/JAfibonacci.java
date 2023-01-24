package jafibonacci;

import java.util.Scanner;

public class JAfibonacci {

    public static void main(String[] args) {
        Scanner leia = new Scanner(System.in);
        int termo1, termo2, novoTermo, i, n;
        System.out.printf ("\n\nEste programa exibe a Série de "
                + "Fibonacci até um termo n!");
        System.out.printf ("\n\nDigite a quantidade de termos da "
                + "Série para exibição: ");
        n = leia.nextInt();
        if (n <= 0) {
            System.out.printf ("\n\nNão é possível exibir "
                    + "nenhum termo da Série de Fibonacci");
        }
        else if (n == 1) {
            System.out.printf ("\n\nSérie de Fibonacci: 1, ");
        }
        else if (n == 2) {
            System.out.printf ("\n\nSérie de Fibonacci: 1, 1, ");
        }
        else if (n > 2) {
            termo1 = 1;
            termo2 = 1;
            novoTermo = 0;
            System.out.printf ("\n\nSérie de Fibonacci: %d, %d, "
                    + "", termo1, termo2);
            i = 2;
            do {
                novoTermo = termo1 + termo2;
                System.out.printf ("%d, ", novoTermo);
                termo1 = termo2;
                termo2 = novoTermo;
                i = i + 1;
            } while (i < n);
        }
        System.out.printf ("...");
        System.out.printf ("\n\nObrigado por utilizar nosso "
                + "sistema!");
        System.out.println();
    }
    
}
