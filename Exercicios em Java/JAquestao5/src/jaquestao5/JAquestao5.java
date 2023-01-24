
package jaquestao5;

import java.util.Scanner;

public class JAquestao5 {

    
    public static void main(String[] args) {
        Scanner leia = new Scanner(System.in);
        int a, b, c, delta;
        System.out.printf("Este programa calcula o valor de uma equaçao de segundo gral, e informa quantas raizes o delta possui!");
        System.out.printf("\n\nDigite o valor de a: ");
        a = leia.nextInt();
        System.out.printf("\nDigite o valor de b: ");
        b = leia.nextInt();
        System.out.printf("\nDigite o valor de c: ");
        c = leia.nextInt();
        delta = (b * b) - 4 * a * c;
        System.out.printf("\n\nO valor do delta e: %d", delta);
        if (delta < 0){
            System.out.printf("\nE o delta nao possui nenhuma raiz!");
        }
        else if(delta == 0){
            System.out.printf("\nE o delta possui somente uma raiz!");
        }
        else if(delta > 0){
            System.out.printf("\nE o delta possui duas raiz!");
        }
        System.out.printf("\n\nObrigado por utilizar nosso sistema!");
    }
}