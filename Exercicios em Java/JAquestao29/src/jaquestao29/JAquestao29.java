
package jaquestao29;

import java.util.Scanner;

public class JAquestao29 {

    
    public static void main(String[] args) {
        Scanner leia = new Scanner(System.in);
        int num, i, resultado = 0;
 	System.out.printf("\n\nEste programa determina se um numero e primo ou nao.");
	System.out.printf("\n\nDigite o numero desejado: ");
        num = leia.nextInt();
	for (i = 2; i <= num / 2; i++) {
		if (num % i == 0) {
	       resultado++;
	       break;
	    }
	}
	if (resultado == 0){
	    System.out.printf("\n\nO %d e um numero primo\n", num);
        }
        else{
            System.out.printf("\n\nO %d nao e um numero primo\n", num);
        }
        System.out.printf("\n\nObrigado por utilizar nosso programa!");
        System.out.println();
    }
    
}
