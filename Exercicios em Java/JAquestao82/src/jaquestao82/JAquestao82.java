
package jaquestao82;

import java.util.Scanner;

public class JAquestao82 {

    
    public static void main(String[] args) {
        Scanner leia = new Scanner(System.in);
        int volume, i, n, raio, soma = 0;
	System.out.printf("\n\nEste programa determina o volume de n esferas, e determina o valor soma total.");
	System.out.printf("\n\nDigite quantos esferas voce deseja calcular o volume: ");
	n = leia.nextInt();
	for (i = 1; i <= n; i++){
            System.out.printf("\n\n\n\nDigite o valor do raio da %d esfera: ", i);
            raio = leia.nextInt();
            volume = (int) ((12.56 * (raio * raio * raio)) / 3);
            soma = soma + volume;
            System.out.printf("\nO valor volume do %d esfera e de: %d.", i, volume);
	}
	System.out.printf("\n\n\n\nO valor total das %d esferas e de: %d.", n, soma);
	System.out.printf("\nObrigado por utilizar nosso sistema!");
	System.out.println();
    }
    
}
