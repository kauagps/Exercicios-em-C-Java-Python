
package jaquestao49;

import java.util.Scanner;

public class JAquestao49 {

    
    public static void main(String[] args) {
        Scanner leia = new Scanner(System.in);
        int raio, h, area, base, altura, aresta, i, n, op, volume, soma;
	soma = 0;
	volume = 0;
        System.out.printf("\n\nEste programa soma diferentes valores de volume de cubo, cilindro, e paralelepipedo.");
	System.out.printf("\n\nDigite a quantidade de tanques que deseja somar os valores volume desejada.");
	n = leia.nextInt();
	for(i = 1; i <= n; i++){
            System.out.printf("\n\nMenu:");
            System.out.printf("\n\n1. Cubo.");
            System.out.printf("\n\n2. Paralelepipedo.");
            System.out.printf("\n\n3. Cilindro.");
            System.out.printf("\n\nDigite a %d opcao a qual deseja somar o volume: ", i);
            op = leia.nextInt();
            switch (op) {
                    case 1:
                    System.out.printf("\n\nVoce escolheu Cubo!");
                    System.out.printf ("\n\nDigite o valor da aresta do cubo: ");
                    aresta = leia.nextInt();
                    volume = aresta * aresta *aresta;
                    break;

                    case 2:
                    System.out.printf("\n\nVoce escolheu Paralelepipedo!");
                    System.out.printf ("\n\nDigite o valor da base: ");
                    base = leia.nextInt();
                    System.out.printf ("\n\nDigite o valor da altura: ");
                    altura = leia.nextInt();
                    System.out.printf ("\n\nDigite o valor da altura: ");
                    area = leia.nextInt();
                    volume = area * altura * base;
                    break;
	
                    case 3:
                    System.out.printf("\n\nVoce escolheu cilindro!");
                    System.out.printf ("\n\nDigite o valor do raio: ");
                    raio = leia.nextInt();
                    System.out.printf ("\n\nDigite o valor da altura: ");
                    h = leia.nextInt();
                    volume = (int) ((((raio * raio) * 3.14) *  h));
                    break;
	
                    default:
                    System.out.printf("\n\nOpcao invalida!!!");
                    break;
            }
            soma = soma + volume;
	}
	System.out.printf("\n\nA soma total dos volumes e: %d", soma);
	System.out.printf("\n\nObrigado por utilizar nosso sistema!");    
    }
    
}
