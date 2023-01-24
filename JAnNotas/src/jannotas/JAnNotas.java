package jannotas;

import java.util.Scanner;

public class JAnNotas {

    public static void main(String[] args) {
        Scanner leia = new Scanner(System.in);
        float nota, soma, media, maior, menor;
        int n, i;
        //No presente caso, nota varia entre 0,0 e 10,0
        soma = 0;
        media = 0;
        maior = 0;
        menor = 10;
        System.out.printf ("\n\nEste programa lê n notas "
                + "e emite um relatório!");
        System.out.printf ("\n\nDigite a quantidade de "
                + "notas: ");
        n = leia.nextInt();
        for (i = 1; i <= n; i++) {
            System.out.printf ("\n\nDigite a %dº nota: ", i);
            nota = leia.nextFloat();
            soma = soma + nota;
            if (nota > maior) {
                maior = nota;
            }
            if (nota < menor) {
                menor = nota;
            }
        }
        media = soma / n;
        System.out.printf ("\n\nQuantidade de notas "
                + "lidas: %d!", n);
        System.out.printf ("\n\nSoma das notas: %.2f!", soma);
        System.out.printf ("\n\nMédias das notas: "
                + "%.2f!", media);
        System.out.printf ("\n\nMaior nota: %.2f!", maior);
        System.out.printf ("\n\nMenor nota: %.2f!", menor);
        System.out.printf ("\n\nObrigado por utilizar "
                + "nosso sistema!");
        System.out.println();
    }
    
}
