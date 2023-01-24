
package jaquestao63;

import java.util.Scanner;

public class JAquestao63 {

    
    public static void main(String[] args) {
        Scanner leia = new Scanner(System.in);
        int x, y;
	System.out.printf("\n\nEste programa determina o quadrante de pertencimente no plano cartesiano de um numero x, e y. ");
	System.out.printf("\n\nDigite o valor de x: ");
	x = leia.nextInt();
	System.out.printf("\n\nDigite o valor de y: ");
	y = leia.nextInt();
	if (x > 0 & y > 0){
            System.out.printf("\n\nOs valores digitados x e y (%d, %d) sao do primeiro quadrante.", x, y);
	}
	else if (x < 0 & y > 0){
            System.out.printf("\n\nOs valores digitados x e y (%d, %d) sao do segundo quadrante.", x, y);
	}
	else if (x < 0 & y < 0){
            System.out.printf("\n\nOs valores digitados x e y (%d, %d) sao do terceiro quadrante.", x, y);
	}
	else if(x > 0 & y < 0){
            System.out.printf("\n\nOs valores digitados x e y (%d, %d) sao do quarto quadrante.", x, y);
	}
	else if(x == 0 & y == 0){
            System.out.printf("\n\nOs dois numero estao em ponto de origem!");
	}
	System.out.printf("\n\nObrigado por utilizar nosso sistema!");
	System.out.println();
    }
    
}
