
package jaquestao64;

import java.util.Scanner;

public class JAquestao64 {

    
    public static void main(String[] args) {
        Scanner leia = new Scanner(System.in);
        int vc, raio, volumeB;
	System.out.printf("\n\nEste programa calcula o volume de uma bola e determina o volume necessario de uma caixa para comportar 10 bolas.");
	System.out.printf("\n\nDigite o valor do raio de uma das bolas: ");
	raio = leia.nextInt();
	volumeB = (int) (12.56 * ((raio * raio)* raio) / 3);
	vc = volumeB * 11;
	System.out.printf("\n\nO volume necessario da caixa para comportar 10 bolas de volume %d e %d", volumeB, vc);
	System.out.printf("\n\nObrigado por utilizar nosso sistema!");
	System.out.println();
    }
    
}
