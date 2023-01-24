
package jaquestao31;

import java.util.Scanner;

public class JAquestao31 {

    
    public static void main(String[] args) {
        Scanner leia = new Scanner(System.in);
        int aresta, areaEP, areaEP2, aresta2, p1, p2;
        
	System.out.printf("\nEste programa caucula a area de um quadrado e depos o divide em outros quatro quadrados iguais!");
	System.out.printf("\n\nDigite o valor da aresta do quadrado: ");
	aresta = leia.nextInt();
	
        areaEP = (aresta * aresta);
	p1 = areaEP;
	aresta2 = aresta / 2;
	areaEP2 = aresta2 * aresta2;
	p2 = areaEP2;
	
        System.out.printf("\n\nO valor da area do quadrado maior e de %d! E o perimetro e de %d!", areaEP, p1);
	System.out.printf("\nE o valor da area de cada quadrado menor e de %d! E o perimetro de cada unidade deles e %d!", areaEP2, p2);
	System.out.printf("\n\nObrigado por utilizar nosso sistema!");
        System.out.println();
    }
    
}