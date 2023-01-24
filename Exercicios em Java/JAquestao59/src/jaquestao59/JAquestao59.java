
package jaquestao59;

import java.util.Scanner;

public class JAquestao59 {

    
    public static void main(String[] args) {
        Scanner leia = new Scanner(System.in);
        int anos, result = 0;
	System.out.printf("\n\nEste programa determina a distancia percorrida em anos luz.");
	System.out.printf("\n\nDigite quantos anos a distancia possue: ");
	anos = leia.nextInt();
	result = (int) (9461 * anos);
	System.out.printf("\nA distancia percorrida foi de %d000000000 quilometros.", result);
	System.out.printf("\n\nObrigado por utiliza nosso sistema!");
    }
    
}
