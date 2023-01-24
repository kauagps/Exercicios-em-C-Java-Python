
package jaquestao20;

import java.util.Scanner;

public class JAquestao20 {

    
    public static void main(String[] args) {
        Scanner leia = new Scanner(System.in);
        int n, i, num, menor = 0, maior = 0;
	num = 0;
	System.out.printf("\n\nEste programa ler uma quantidade qualquer de numero e determina o maior e menor numero.");
	System.out.printf("\n\nDigite a quantidade de valores a qual voce usara: ");
	n = leia.nextInt();
	for (i = 1; i <= n; i++){
            System.out.printf("\n\nDigite o %d valor: ", i);
            n = leia.nextInt();
            if(i == 1){
                maior = num;
		menor = num;
            }
            else
                if(num > maior){
                    maior = num;
		}
            else
                if(num < menor){
                    menor = num;
                }
	}
	System.out.printf("\nO maior numero e: %d. E o menor e: %d.", maior, menor);
	System.out.printf("\n\nObrgado por utilizar nosso programa.");

    }
    
}
