
package jaquestao57;

import java.util.Scanner;

public class JAquestao57 {

    
    public static void main(String[] args) {
        Scanner leia = new Scanner(System.in);
        int i, n, num1, soma;
	num1 = 1;
	soma = 1;
	System.out.printf("\nEste progrma determina o produtório (multiplicação) dos números inteiros no intervalo de 1 até n");
	System.out.printf("\nDigite o valor de n: ");
	n = leia.nextInt();
	for (i = 1; i <= n; i++){
		if (i == n){
                    System.out.printf(" %d", num1);
		}
		else{
                    System.out.printf(" %d *", num1);
		}
		soma = soma * num1;
		num1++;
	}
	System.out.printf(" = %d.", soma);
	System.out.printf("\nObrigado por utilizar nosso sistema!");
        System.out.println();
    }
    
}
