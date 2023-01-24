
package jaquestao27;

import java.util.Scanner;

public class JAquestao27 {

    
    public static void main(String[] args) {
        Scanner leia = new Scanner(System.in);
        Scanner entrada = new Scanner(System.in);
        char ch, a, e, i, o, u, A, E, I, O, U;
	int r = 1, n, soma, somaC;
	soma = 0;
        somaC = 0;
        System.out.printf("\nEste programa determina quantas vogais uma plavra possui!");
	System.out.printf("\n\ndigite o numero de letras a qual a palavra desejada tem: ");
	n = leia.nextInt();
	while (r <= n){
		System.out.printf("\n\nDigite a %d letra: ", r);
		ch = entrada.next().charAt(0); 
		if ((ch == 'a') || (ch == 'e') || (ch == 'i') || (ch == 'o') || (ch == 'u') || (ch == 'A') || (ch == 'E') || (ch == 'I') || (ch == 'O') || (ch == 'U')){
			soma = soma + 1;
		}
                else{
                    somaC = somaC + 1;
                }
		r = r + 1;
	}
	
        System.out.printf("\n\nA quantidade de vogais na palavra e: %d. E de consoante e: %d.", soma, somaC);
        System.out.printf("\n\nObrigado por utilizar nosso sistema!");
        System.out.println();
    }
    
}
