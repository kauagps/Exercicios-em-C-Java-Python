
package jaquestao69;

import java.util.Scanner;

public class JAquestao69 {

    
    public static void main(String[] args) {
        Scanner leia = new Scanner(System.in);
        Scanner entrada = new Scanner(System.in);
        char a, b, c;
	System.out.printf("\n\nEste programa determina se uma palavra de tres letras e Palindrome ou nao.");
	System.out.printf("\n\nPrimeira letra: ");
	a = entrada.next().charAt(0);
	
	System.out.printf("\nSegunda letra: ");
	b = entrada.next().charAt(0);
	
	System.out.printf("\n\nTerceira letra: ");
	c = entrada.next().charAt(0);
	
	
	if(a == c){
            System.out.printf("\n\nA palavra escrita e sim um palindrome!");
	}
	else{
            System.out.printf("\n\nA palavra escrita nao e um palindrome!");
	}
	System.out.printf("\n\nObrigado por utilizar nosso sistema!");
        System.out.println();
        //nao tenho ideia de como resolvo isso sorry;-;
    }

}
    

