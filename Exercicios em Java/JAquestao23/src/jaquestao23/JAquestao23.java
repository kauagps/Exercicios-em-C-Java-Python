
package jaquestao23;

import java.util.Scanner;

public class JAquestao23 {

    
    public static void main(String[] args) {
        Scanner leia = new Scanner(System.in);
        int i, num1, n, num2, aux;
	num1 = 0;
	num2 = 1;
	System.out.printf("\n\nEste programa imprime a serie de fibonacci.");
	System.out.printf("\n\nDigite a quantidade de valores a qual deseja: ");
	n = leia.nextInt();
	for (i = 1; i <= n; i++){
		aux = num1 + num2;
		num1 = num2;
		num2 = aux;
		System.out.printf("%d,", num1);
	}
	System.out.printf("\n\nObigado por utilizar nosso sistema!");
        System.out.println();
    }
    
}
