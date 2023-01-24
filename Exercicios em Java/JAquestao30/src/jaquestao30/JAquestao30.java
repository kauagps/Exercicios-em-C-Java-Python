
package jaquestao30;

import java.util.Scanner;

public class JAquestao30 {

    
    public static void main(String[] args) {
        Scanner leia = new Scanner(System.in);
        int soma, preco, i, n;
	soma = 0;
        System.out.printf ("\n\nEste programa calcula o preco total de n obras de um museu.");
	System.out.printf ("\n\nDigite o numero de unidades que voce quer calcular o preco: ");
	n = leia.nextInt();
	
	for(i = 1; i <= n; i++){
		System.out.printf("\n\nDigite o preco da %d obre: ", i);
		preco = leia.nextInt();
		soma = soma + preco;
	}
	
	System.out.printf ("\n\nO valor total das obras e: %d", soma);
	System.out.printf ("\n\nObrigado por utilizar nosso programa!");
        System.out.println();
    }
    
}
