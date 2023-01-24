
package jaquestao55;

import java.util.Scanner;

public class JAquestao55 {

    
    public static void main(String[] args) {
        Scanner leia = new Scanner(System.in);
        int num1, num2, num3, num4;
	System.out.printf("\n\nEste programa determina se 4 numero formam um quadrado ou paralelepipedo.");
	System.out.printf("\nDigite o valor da primeira aresta: ");
	num1 = leia.nextInt();
	System.out.printf("\nDigite o valor da segunda aresta: ");
	num2 = leia.nextInt();
	System.out.printf("\nDigite o valor da terceira aresta: ");
	num3 = leia.nextInt();
	System.out.printf("\nDigite o valor da quarta aresta: ");
	num4 = leia.nextInt();
	if((num1 == num2) && (num3 == num4) && (num1 == num3)){
            System.out.printf("\nOs quatros valores formam um quadrado!");
	}
	else{
            System.out.printf("\n\nOs valores digitados nao formam um quadrado!");
	}
	if(((num1 == num2) && (num3 == num4) && (num1 != num3)) || ((num1 == num3) && (num2 == num4) && (num1 != num2)) || ((num1 == num4) && (num2 == num3) && (num1 != num2))){
            System.out.printf("\nOs valores digitados formam um retangulo!");
	}
	else{
            System.out.printf("\nOs valores digitados nao formam um retangulo!");
	}
	System.out.printf("\n\nObrigado por utilizar nosso sistema!");
        System.out.println();
    }
    
}
