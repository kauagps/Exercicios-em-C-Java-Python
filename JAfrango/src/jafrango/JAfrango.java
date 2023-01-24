package jafrango;

import java.util.Scanner;

public class JAfrango {

    public static void main(String[] args) {
        Scanner leia = new Scanner (System.in);
        float pesoFrango, pesoMedio;
        int n;
        pesoMedio = 0;
        System.out.printf ("\n\nEste programa determina o peso "
                + "médio de n frangos!");
        System.out.printf ("\n\nDigite a quantidade de frangos: ");
        n = leia.nextInt();
        for (int i = 1; i <= n; i++) {
            System.out.printf ("\n\nDigite o peso do %dº frango (kg): ", i);
            pesoFrango = leia.nextFloat();
            pesoMedio = pesoMedio + pesoFrango;
        }
        pesoMedio = pesoMedio / n;
        System.out.printf ("\n\nO peso médio dos %d frangos é de "
                + "%.2f kg!", n, pesoMedio);
        System.out.printf ("\n\nObrigado por utilizar nosso sistema!");
        System.out.println();
    }
    
}
