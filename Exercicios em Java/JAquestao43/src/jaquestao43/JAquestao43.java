
package jaquestao43;

import java.util.Scanner;

public class JAquestao43 {

    
    public static void main(String[] args) {
        Scanner leia = new Scanner(System.in);
        int num, media, i, n, soma = 0;
	System.out.printf("\n\nEste programa determina se a media e a soma de n numero e impar ou par.");
	System.out.printf("\n\nDigite a quantidade de numeros a qual deseja digitar: ");
	n = leia.nextInt();
	for(i = 1; i <= n; i++){
            System.out.printf("\n\nDigite o %d numero: ", i);
            num = leia.nextInt();
            soma = soma + num;
	}
	media = soma / n;
	if (soma % 2 == 0){
    	System.out.printf ("\nA soma total e %d, um numero par, e a media e",soma);
	}
	else {
    	System.out.printf ("\nA soma total e %d, um numero impar, e a media e",soma);
	}
	if (media % 2 == 0){
    	System.out.printf (" %d, um numero Par.",media);
	}
	else {
    	System.out.printf(" %d, um numero Impar.",media);
	}
	System.out.printf("\n\nObrigado por utilizar nosso sistema!");
	System.out.println();
    }
    
}
