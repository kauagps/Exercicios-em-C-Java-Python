
package jaquestao84;

import java.util.Scanner;

public class JAquestao84 {

    
    public static void main(String[] args) {
        Scanner leia = new Scanner(System.in);
        int  likes, n, soma = 0, i, media;
	System.out.printf ("\n\nEste programa determina a media de curtidas a qual voce recebe em um dia.");
	System.out.printf ("\n\nDigite a quantidade de postagens q voce faz no dia: ");
	n = leia.nextInt();
	for (i = 1; i <= n; i++){
            System.out.printf ("\n\nDigite a quantidade de curtidas: ");
            likes = leia.nextInt();
            soma = likes + soma;
	}
	media = soma / n;
	System.out.printf ("A media de like e: %d\n", media);
	System.out.printf("\n\nObrigado por utilizar nosso sistema!");
	System.out.println();
    }
    
}
