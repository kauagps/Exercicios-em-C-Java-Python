
package jaquestao10;

import static java.lang.Math.pow;
import java.util.Scanner;

public class JAquestao10 {

    
    public static void main(String[] args) {
        Scanner leia = new Scanner(System.in);
        int op, num1, num2, result;
        System.out.printf("\n\nEste programa raliza uma das operaçoes a seguir.");
        System.out.printf("\n\n\tMenu:");
        System.out.printf("\t\n1.Adiao");
        System.out.printf("\t\n2.Subtraçao");
        System.out.printf("\t\n3.Divisao");
        System.out.printf("\t\n4.potenciaçao.");
        System.out.printf("\n\nDigite a opçao desejada: ");
        op = leia.nextInt();
        switch(op){
            case 1:
                System.out.printf("\n\nVoce escolheu Adiao!");
                System.out.printf("\nDigite o valor do primeiro numero: ");
                num1 = leia.nextInt();
                System.out.printf("\nDigite o valor do segundo numero: ");
                num2 = leia.nextInt();
                result = num1 + num2;
                System.out.printf("\nO resultado da adiçao e: %d.", result);
                break;
            case 2:
                System.out.printf("\n\nVoce escolheu Subtraçao!");
                System.out.printf("\nDigite o valor do primeiro numero: ");
                num1 = leia.nextInt();
                System.out.printf("\nDigite o valor do segundo numero: ");
                num2 = leia.nextInt();
                result = num1 - num2;
                System.out.printf("\nO resultado da Subtraçao e: %d.", result);
                break;
            case 3:
                System.out.printf("\n\nVoce escolheu Divisao!");
                System.out.printf("\nDigite o valor do primeiro numero: ");
                num1 = leia.nextInt();
                System.out.printf("\nDigite o valor do segundo numero: ");
                num2 = leia.nextInt();
                result = num1 / num2;
                System.out.printf("\nO resultado da Divisao e: %d.", result);
                break;
            case 4:
                System.out.printf("\n\nVoce escolheu Potenciaçao!");
                System.out.printf("\nDigite o valor da base: ");
                num1 = leia.nextInt();
                System.out.printf("\nDigite o valor do expoente: ");
                num2 = leia.nextInt();
                result = (int) pow (num1, num2);
                System.out.printf("\nO resultado da potenciaçao e: %d.", result);
                break;
            default:
                System.out.printf("\n\nOpçao invalida!");
                break;
        }
        System.out.printf("\n\nObrigado por utilizar nosso sistema!");
    }
    
}
