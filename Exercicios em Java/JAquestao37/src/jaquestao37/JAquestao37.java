
package jaquestao37;

import java.util.Scanner;

public class JAquestao37 {

    
    public static void main(String[] args) {
        Scanner leia = new Scanner(System.in);
        int raio, h, area, base, altura, aresta, i, n, op, volume = 0, soma = 0;
	System.out.printf("\n\nEste programa soma o voume de diferentes tanques.");
	System.out.printf("\n\nDigite a quantidade de tanques que deseja somar os valores volume desejada: ");
	n = leia.nextInt();
	for(i = 1; i <= n; i++){
            System.out.printf("\n\nMenu:");
            System.out.printf("\n\n1. Cubo.");
            System.out.printf("\n\n2. Paralelepipedo.");
            System.out.printf("\n\n3. Cilindro.");
            System.out.printf("\n\n4. Cone.");
            System.out.printf("\n\nDigite a opcao a qual deseja somar o volume: ");
            op = leia.nextInt();
            switch (op) {
                case 1:
                    System.out.printf("\n\nVoce escolheu Cubo!");
                    System.out.printf ("\n\nDigite da aresta do cubo: ");
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
                    volume = (int) 3.14 * (raio * raio) * h;
                    break;
	
		case 4:
                    System.out.printf("\n\nVoce escolheu Cone!");
                    System.out.printf ("\n\nDigite o valor do raio: ");
                    raio = leia.nextInt();
                    System.out.printf ("\n\nDigite o valor da altura: ");
                    h = leia.nextInt();
                    volume = (int) (((raio * raio) * h) * 3.14) / 3;
                    break;
			
		default:
                    System.out.printf("\n\nOpcao invalida!!!");
                    break;
            }
            soma = soma + volume;
	}
	System.out.printf("\n\nA soma total dos volumes e: %d", soma);
	System.out.printf("\n\nObrigado por utilizar nosso sistema!");
        System.out.println();
    }
    
}
