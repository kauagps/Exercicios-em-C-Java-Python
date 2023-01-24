package japarimpar;

import java.util.Scanner;

public class JAparImpar {

    public static void main(String[] args) {
        Scanner leia = new Scanner(System.in);
        int num, div;
        div = 0;
        System.out.printf ("\n\nEste programa lê um "
                + "número, classificando-o como par "
                + "ou ímpar!");
        System.out.printf ("\n\nDigite um número: ");
        num = leia.nextInt();
        div = num / 2;
        if (num == 0) {
            System.out.printf ("\n\nO número é 0!");
        }
        else if ((div*2) == num) {
            System.out.printf ("\n\nO número é par!");
        }
        else if ((div*2) != num) {
            System.out.printf ("\n\nO número é ímpar!");
        }
        System.out.printf ("\n\nObrigado por utilizar "
                + "nosso sistema!");
        System.out.println();
    }
    
}
