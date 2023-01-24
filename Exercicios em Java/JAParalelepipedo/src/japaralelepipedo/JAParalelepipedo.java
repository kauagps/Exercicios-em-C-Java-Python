package japaralelepipedo;

import java.util.Scanner;

public class JAParalelepipedo {

    public static void main(String[] args) {
        Scanner leia = new Scanner(System.in);
        float comprimento, largura, altura, volume;
        volume = 0;
        System.out.printf ("\n\nEste programa calcula "
                + "o volume de um paralelepípedo!");
        System.out.printf ("\n\nDigite o comprimento do "
                + "paralelepípedo(m): ");
        comprimento = leia.nextFloat();
        System.out.printf ("\n\nDigite a largura do "
                + "paralelepípedo(m): ");
        largura = leia.nextFloat();
        System.out.printf ("\n\nDigite a altura do "
                + "paralelepípedo(m): ");
        altura = leia.nextFloat();
        volume = (comprimento * largura) * altura;
        System.out.printf ("\n\nO volume do paralelepípedo é "
                + "de %.2f metros cúbicos!", volume);
        System.out.printf ("\n\nObrigado por utilizar nosso "
                + "sistema!");
        System.out.println();
    }
    
}
