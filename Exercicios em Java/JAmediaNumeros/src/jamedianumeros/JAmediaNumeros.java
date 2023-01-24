package jamedianumeros;

import java.util.Scanner;

public class JAmediaNumeros {

    public static void main(String[] args) {
        Scanner leia = new Scanner (System.in);
        float num, soma, media;
        int n, i;
        soma = 0;
        media = 0;
        System.out.printf ("\n\nEste programa lê n números e determina "
                + "a média!");
        System.out.printf ("\n\nDigite a quantidade de números: ");
        n = leia.nextInt();
        //Enquanto - while()
        i = 1;
        while (i <= n) {
            System.out.printf ("\n\nDigite o %dº número: ", i);
            num = leia.nextFloat();
            soma = soma + num;
            i = i + 1; //Incremento
        }
        media = soma/n;
        System.out.printf ("\n\nA média dos %d números é %.2f!", n, media);
        System.out.printf ("\n\nObrigado por utilizar nosso sistema!");
        System.out.println();
    }
    
}
