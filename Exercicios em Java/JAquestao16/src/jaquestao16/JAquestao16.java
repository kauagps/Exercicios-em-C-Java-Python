
package jaquestao16;

import java.util.Scanner;

public class JAquestao16 {

    
    public static void main(String[] args) {
        Scanner leia = new Scanner(System.in);
        int perimetro, a, b, c, area, d;
	System.out.printf("\n\nEste programa determina a area e o perimetro de um triangulo qualquer.");
	System.out.printf("\n\nDigite o valor da primeira aresta: ");
	a = leia.nextInt();
	System.out.printf("\n\nDigite o valor da segunda aresta: ");
	b = leia.nextInt();
	System.out.printf("\n\nDigite o valor da base: ");
	c = leia.nextInt();
	System.out.printf("\n\nDigite o valor da altura: ");
	d = leia.nextInt();
	perimetro = a + b + c;
	area = c * d / 2;
	System.out.printf("\n\nO valor do perimetro do triangulo e: %d\n", perimetro);
	System.out.printf("\n\nO valor da area do triangulo e: %d\n", area);
	System.out.printf("\n\nObrigado por utilizar nosso sistema!");
        System.out.println();
    }
    
}
