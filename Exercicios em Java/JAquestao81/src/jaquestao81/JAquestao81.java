
package jaquestao81;

import java.util.Scanner;

public class JAquestao81 {

    
    public static void main(String[] args) {
        Scanner leia = new Scanner(System.in);
        int volume, i, n, aresta, soma = 0;
	System.out.printf("\n\nEste programa determina o volume de n cubos, e determina o valor soma total.");
	System.out.printf("\n\nDigite quantos cubos voce deseja calcular o volume: ");
	n = leia.nextInt();
	for (i = 1; i <= n; i++){
            System.out.printf("\n\n\n\nDigite o valor da aresta do %d cubo: ", i);
            aresta = leia.nextInt();
            volume = aresta * aresta * aresta;
            soma = soma + volume;
            System.out.printf("\nO valor volume do %d cubo e de: %d.", i, volume);
	}
	System.out.printf("\n\n\n\nO valor total dos %d cubos e de: %d.", n, soma);
	System.out.printf("\nObrigado por utilizar nosso sistema!");
	System.out.println();
    }
    
}
