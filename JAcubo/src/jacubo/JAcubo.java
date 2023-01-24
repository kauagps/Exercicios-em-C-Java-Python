package jacubo;

import java.util.Scanner;

public class JAcubo {

    public static void main(String[] args) {
        Scanner leia = new Scanner (System.in);
        float aresta, cubo, volCubo, volTotal;
        int i, n;
        volCubo = 0;
        volTotal = 0;
        System.out.printf ("\n\nEste programa determina o "
                + "volume total de n cubos!");
        System.out.printf ("\n\nDigite a quantidade de "
                + "cubos: ");
        n = leia.nextInt();
        i = 1;
        while (i <= n) {
            System.out.printf ("\n\nDigite a aresta "
                    + "do %dº cubo: ", i);
            aresta = leia.nextFloat();
            volCubo = (aresta * aresta) * aresta;
            System.out.printf ("\n\nO volume do %d cubo é de "
                    + "%.2f metros cúbicos!", i, volCubo);
            volTotal = volTotal + volCubo;
            i = i + 1;
        }
        System.out.printf ("\n\nO volume total dos %d cubos "
                + "é de %.2f metros cúbicos!", n, volTotal);
        System.out.printf ("\n\nObrigado por utilizar "
                + "nosso sistema!");
        System.out.println();
        
    }
    
}
