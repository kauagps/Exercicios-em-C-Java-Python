package jasoma;

import java.util.Scanner;

public class JASoma {

    public static void main(String[] args) {
        //Instância de classe
        Scanner ler = new Scanner(System.in);
        int num1, num2, soma;
        soma = 0;
        System.out.printf ("\n\nEste programa soma dois números!");
        System.out.printf ("\n\nDigite o primeiro número: ");
        num1 = ler.nextInt();
        System.out.printf ("\n\nDigite o segundo número: ");
        num2 = ler.nextInt();
        soma = num1 + num2;
        System.out.printf ("\n\nResultado");
        System.out.printf ("\n\n%d + %d = %d!", num1, num2, soma);
        System.out.printf ("\n\nObrigado por utilizar nosso sistema!");
        System.out.println(); //Salto de carro de linha
    }
    
}
