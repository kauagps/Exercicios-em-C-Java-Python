package janquadrado;

import java.util.Scanner;

public class JAnQuadrado {

    public static void main(String[] args) {
        Scanner leia = new Scanner(System.in);
        float lado, areaQuadrado, areaTotal;
        int n, i;
        areaQuadrado = 0;
        areaTotal = 0;
        System.out.printf ("\n\nEste programa determina a área "
                + "total de n quadrados!");
        System.out.printf ("\n\nDigite a quantidade de "
                + "quadrados: ");
        n = leia.nextInt();
        i = 1;
        while (i <= n) {
            System.out.printf ("\n\nDigite o lado do %dº "
                    + "quadrado(m): ", i);
            lado = leia.nextFloat();
            areaQuadrado = lado * lado;
            System.out.printf ("\n\nA área do %dº quadrado é "
                    + "de %.2f metros quadrados!", i, areaQuadrado);
            areaTotal = areaTotal + areaQuadrado;
            i = i + 1;
        }
        System.out.printf ("\n\nA área total dos %d quadrados é "
                + "de %.2f metros quadrados!", n, areaTotal);
        System.out.printf ("\n\nObrigado por utilizar nosso "
                + "sistema!");
        System.out.println();
    }
    
}