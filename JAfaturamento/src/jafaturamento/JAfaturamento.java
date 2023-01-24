package jafaturamento;

import java.util.Scanner;

public class JAfaturamento {

    public static void main(String[] args) {
        Scanner leia = new Scanner(System.in);
        float precoItem, quantItem, fatItem, fatGeral;
        int n, i;
        fatItem = 0;
        fatGeral = 0;
        System.out.printf ("\n\nEste programa calcula o "
                + "faturamento geral de uma empresa!");
        System.out.printf ("\n\nDigite a quantidade de itens "
                + "vendidos: ");
        n = leia.nextInt();
        i = 1;
        while (i <= n) {
            System.out.printf ("\n\nDigite a quantidade vendida "
                    + "do item %d: ", i);
            quantItem = leia.nextFloat();
            System.out.printf ("\n\nDigite o preço unitário (R$) "
                    + "do item %d: ", i);
            precoItem = leia.nextFloat();
            fatItem = precoItem * quantItem;
            System.out.printf ("\n\nO faturamento do "
                    + "item %d foi de R$ %.2f!", i, fatItem);
            fatGeral = fatGeral + fatItem;
            i = i + 1;
        }
        System.out.printf ("\n\nO faturamento geral da empresa "
                + "foi de R$ %.2f!", fatGeral);
        System.out.printf ("\n\nObrigado por utilizar nosso "
                + "sistema!");
        System.out.println();
    }
    
}
