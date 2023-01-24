package jaquestao21;

import java.util.Scanner;

public class JAquestao21 {

    
    public static void main(String[] args) {
        Scanner leia = new Scanner(System.in);
        int raio, perimetro, area;
	System.out.printf("\n\nEste programa determina a area e o perimetro de um circulo qualquer.");
	System.out.printf("\n\nDigite o valor do raio do circulo: ");
	raio = leia.nextInt();
	perimetro = (int) (raio * 6.28);
	area = (int)((raio * raio) * 3.14);
	System.out.printf("\n\nA area do circulo e de %d, e o perimetro e de %d", area, perimetro);
	System.out.printf ("\n\nObrigado por utilizar nosso sistema!");
	System.out.println();
    }
    
}
