
package jaquestao32;

import static java.lang.Math.pow;
import java.util.Scanner;

public class JAquestao32 {

    
    public static void main(String[] args) {
        Scanner leia = new Scanner(System.in);
        int base, expoente, result;
        result = 0;
	System.out.printf("\n\nEste programa realiza um operacao de potenciacao.");
	System.out.printf("\n\ndigite o valor da base: ");
	base = leia.nextInt();
	System.out.printf("\n\nDigite o valor do expoente: ");
	expoente = leia.nextInt();
	result = (int) pow (base, expoente);
	System.out.printf("\n\n%d", result);
	System.out.printf("\n\nObrigado por ultilizar nosso programa!");
        System.out.println();
    }
    
}
