
package jaquestao53;

import java.util.Scanner;

public class JAquestao53 {

    
    public static void main(String[] args) {
        Scanner leia = new Scanner(System.in);
        int raio, smlPi = 0, smlCi = 0, smlP = 0, smlCo = 0, semelhanteCu = 0, h, area, base, altura, aresta, i, n, op, volume = 0, soma = 0;
	System.out.printf("\n\nEste programa realiza a soma de volume de diferentes tanques.");
	System.out.printf("\n\nDigite a quantidade de tanques que deseja somar os valores volume desejados.");
	n = leia.nextInt();
	for(i = 1; i <= n; i++){
		System.out.printf("\n\nMenu:");
		System.out.printf("\n1. Cubo.");
		System.out.printf("\n2. Paralelepipedo.");
		System.out.printf("\n3. Cilindro.");
		System.out.printf("\n4. Cone.");
		System.out.printf("\n5. Piramide.");
		System.out.printf("\nDigite a opcao a qual deseja somar o volume: ");
		op = leia.nextInt();
		switch (op) {
			case 1:
			System.out.printf("\n\n\nVoce escolheu Cubo!");
			System.out.printf ("\nDigite o valor da aresta do cubo: ");
			aresta = leia.nextInt();
			volume = aresta * aresta *aresta;
			semelhanteCu = semelhanteCu + volume;
			break;

			case 2:
			System.out.printf("\n\n\nVoce escolheu Paralelepipedo!");
			System.out.printf ("\nDigite o valor da base: ");
			base = leia.nextInt();
			System.out.printf ("\nDigite o valor da altura: ");
			altura = leia.nextInt();
			System.out.printf ("\nDigite o valor da altura: ");
			area = leia.nextInt();
			volume = area * altura * base;
			smlP = smlP + volume;
			break;
	
			case 3:
			System.out.printf("\n\n\nVoce escolheu cilindro!");
			System.out.printf ("\nDigite o valor do raio: ");
			raio = leia.nextInt();
			System.out.printf ("\nDigite o valor da altura: ");
			h = leia.nextInt();
			volume = (int) 3.14 * (raio * raio) * h;
			smlCi = smlCi + volume;
			break;
	
			case 4:
			System.out.printf("\n\n\nVoce escolheu Cone!");
			System.out.printf ("\nDigite o valor do raio: ");
			raio = leia.nextInt();
			System.out.printf ("\nDigite o valor da altura: ");
			h = leia.nextInt();
			volume = (int) ((3.14 * ((raio * raio) * h)) / 3);
			smlCo = smlCo + volume;
			break;
			
			case 5:
			System.out.printf("\n\n\nVoce escolheu Piramide!");
			System.out.printf ("\nDigite o valor da area da base da piramide: ");
			base = leia.nextInt();
			System.out.printf ("\nDigite o valor da altura: ");
			h = leia.nextInt();
			volume = base * h / 3;
			smlPi = smlPi + volume;
			break;
			
			default:
			System.out.printf("\n\nOpcao invalida!!!");
			break;
		}
		System.out.printf("\nO %d tem o valor de: %d", i, volume);
		soma = soma + volume;
	}
	System.out.printf("\n\n\nA soma total dos volumes e: %d", soma);
	System.out.printf("\nO valor dos semelhantes cubo e: %d", semelhanteCu);
	System.out.printf("\nO valor dos semelhantes paralelepipedo e: %d", smlP);
	System.out.printf("\nO valor dos semelhantes cilindro e: %d", smlCi);
	System.out.printf("\nO valor dos semelhantes Cone e: %d", smlCo);
	System.out.printf("\nO valor dos semelhantes Piramide e: %d", smlPi);
	System.out.printf("\n\nObrigado por utilizar nosso sistema!");
    }
    
}
