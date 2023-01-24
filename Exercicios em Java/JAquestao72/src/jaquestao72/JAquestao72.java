
package jaquestao72;

import java.util.Scanner;

public class JAquestao72 {

    
    public static void main(String[] args) {
        Scanner leia = new Scanner(System.in);
        int aB, h, result = 0;
	System.out.printf("\n\nEste progrma calcula o volume de um prisma qualquer.");
	System.out.printf("\n\nDigite o valor da area da base: ");
	aB = leia.nextInt();
	System.out.printf("\nDigite o valor da altura: ");
	h = leia.nextInt();
	result = aB * h;
	System.out.printf("\n\nO valor do volume do prisma e: %d", result);
	System.out.printf("\n\nObrigado por utilizar nosso sistema!");
	System.out.println();
    }
    
}
