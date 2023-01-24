package jaquestao19;

import java.util.Scanner;

public class JAquestao19 {

    
    public static void main(String[] args) {
        Scanner ler = new Scanner(System.in);
        int num, media, n, i, soma;
	soma = 0;
	System.out.printf("\n\nEste programa ler uma quantidade qualquer de numeros reais e, realiza uma media aritimetica simples.");
	System.out.printf("\n\nDigite a quantidade de valores que ira usar: ");
	n = ler.nextInt();
	for (i = 1; i <= n; i++){
            System.out.printf ("\nDigite o %d valor: ", i);
            num = ler.nextInt();
            soma = soma + num;
	}
	System.out.printf ("\n\nA soma de todos os valores e: %d", soma);
	media = soma / n;
	System.out.printf("\nE a media aritimetica simples e: %d", media);
	System.out.printf("\nObrigado por utilizar nosso sistema.");
        System.out.println();
    }
    
}
