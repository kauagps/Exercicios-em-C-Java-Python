
package jaquestao48;

import java.util.Scanner;

public class JAquestao48 {

    
    public static void main(String[] args) {
        Scanner leia = new Scanner(System.in);
        int aresta, vr;
	System.out.printf("\nEste programa calcula o volume de um reservatorio cubico, com somente 60 porcento preenchido.\nDigite o valor da aresta do resavatorio: ");
	aresta = leia.nextInt();
	vr = (int) ((aresta * aresta * aresta) * 0.60);
	System.out.printf("\nO volume de combustivel e de %d.\nObrigado por uttilizar nosso sistema!", vr);
        System.out.println();
    }
    
}

