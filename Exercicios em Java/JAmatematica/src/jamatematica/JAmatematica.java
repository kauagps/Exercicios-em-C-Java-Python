package jamatematica;

import java.util.Scanner;

public class JAmatematica {

    public static void main(String[] args) {
        Scanner leia = new Scanner(System.in);
        float num1, num2, resultado;
        int op;
        resultado = 0;
        System.out.printf ("\n\nEste progrma realiza uma das "
                + "quatro operações matemáticas básicas com dois "
                + "números!");
        System.out.printf ("\n\n\t\tMENU");
        System.out.printf ("\n\n1 - Adição");
        System.out.printf ("\n\n2 - Subtração");
        System.out.printf ("\n\n3 - Multiplicação");
        System.out.printf ("\n\n4 - Divisão");
        System.out.printf ("\n\nDigite a opção desejada: ");
        op = leia.nextInt();
        switch (op) {
            
            case 1:
                System.out.printf ("\n\nAdição");
                System.out.printf ("\n\nDigite o 1º número: ");
                num1 = leia.nextFloat();
                System.out.printf ("\n\nDigite o 2º número: ");
                num2 = leia.nextFloat();
                resultado = num1 + num2;
                System.out.printf ("\n\nResultado: %.2f + %.2f = %.2f!", 
                        num1, num2, resultado);
                break;
            
            case 2:
                System.out.printf ("\n\nSubtração");
                System.out.printf ("\n\nDigite o 1º número: ");
                num1 = leia.nextFloat();
                System.out.printf ("\n\nDigite o 2º número: ");
                num2 = leia.nextFloat();
                resultado = num1 - num2;
                System.out.printf ("\n\nResultado: %.2f - %.2f = %.2f!", 
                        num1, num2, resultado);
                break;
            
            case 3:
                System.out.printf ("\n\nMultiplicação");
                System.out.printf ("\n\nDigite o 1º número: ");
                num1 = leia.nextFloat();
                System.out.printf ("\n\nDigite o 2º número: ");
                num2 = leia.nextFloat();
                resultado = num1 * num2;
                System.out.printf ("\n\nResultado: %.2f * %.2f = %.2f!", 
                        num1, num2, resultado);
                break;
            
            case 4:
                System.out.printf ("\n\nDivisão");
                System.out.printf ("\n\nDigite o 1º número: ");
                num1 = leia.nextFloat();
                System.out.printf ("\n\nDigite o 2º número: ");
                num2 = leia.nextFloat();
                if (num2 != 0) {
                    resultado = num1 / num2;
                    System.out.printf ("\n\nResultado: %.2f / %.2f = %.2f!", 
                        num1, num2, resultado);
                }
                else
                    System.out.printf ("\n\nNão é possível realizar a "
                            + "divisão!");
                break;
            
            default:
                System.out.printf ("\n\nDigite uma opção válida!");
        }
        System.out.printf ("\n\nObrigado por utilizar nosso sistema!");
        System.out.println();
    }
    
}
