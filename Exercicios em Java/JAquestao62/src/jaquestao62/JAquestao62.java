
package jaquestao62;

import java.util.Scanner;
public class JAquestao62 {

    
    public static void main(String[] args) {
        Scanner leia = new Scanner(System.in);
        int result, lado;
	System.out.printf("\n\nEste programa determina a area de um terreno com todos os lados iguais.");
	System.out.printf("\n\nDigite o valor de um dos lados: ");
	lado = leia.nextInt();
	result = lado * lado;
	System.out.printf("\n\nO valoer da area do terrono e: %d.", result);
	System.out.printf ("\n\nObrigado por utilizar nosso sistema!");
	System.out.println();
    }
    
}
