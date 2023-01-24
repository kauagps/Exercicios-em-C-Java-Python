
package jaquestao3;

import java.util.Scanner;

public class JAquestao3 {

    
    public static void main(String[] args) {
        Scanner ler = new Scanner(System.in);
        int raio, vol, pi;
        pi = (int) 14.56;
        System.out.printf("\n\nEste programa calcula o volume de uma esfera.");
        System.out.append("\n\nDigite o valor do raio: ");
        raio = ler.nextInt();
        vol = ((raio * raio * raio) * pi) /3;
        System.out.printf("\nO volume da esfera e: %d.", vol);
        System.out.printf("\n\nObrigado por utilizar nosso sistema!");
    }
    
    
}
