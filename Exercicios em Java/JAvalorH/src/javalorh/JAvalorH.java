package javalorh;

import java.util.Scanner;

public class JAvalorH {

    public static void main(String[] args) {
        Scanner leia = new Scanner(System.in);
        float H, div;
        int i, n;
        H = 0;
        div = 0;
        //H = 1 + 1/2 + 1/3 + 1/4 + ... + 1/n
        System.out.printf ("\n\nEste programa determina o "
                + "valor de H!");
        System.out.printf ("\n\nDigite o valor de n: ");
        n = leia.nextInt();
        i = 1;
        do {
            div = div + 1;
            H = H + (1/div);
            i = i + 1;
        } while (i <= n);
        System.out.printf ("\n\nO valor de H é: %.2f!", H);
        System.out.printf ("\n\nObrigado por utilizar "
                + "nosso sistema!");
        System.out.println();
    }
    
}
