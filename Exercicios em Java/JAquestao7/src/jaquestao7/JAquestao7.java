
package jaquestao7;

import java.util.Scanner;

public class JAquestao7 {

    
    public static void main(String[] args) {
        Scanner leia = new Scanner(System.in);
        int fatEx, minEx, min, fat;
        float pi;
        pi = (float) 0.13;
        System.out.print("\n\nEste programa determina a fatura de telefone mensa de um cliente!");
        System.out.printf("\n\nDigite a quantidade de minutos gastos por ligaçoes: ");
        min = leia.nextInt();
        if (min > 6000){
            minEx = min - 6000;
            fatEx = (int) (pi * minEx);
            fat = fatEx + 70;
        }
        else{
            fat = 70;
        }
        System.out.printf("\n\nO valor do fatura equivale a: %d", fat);
        System.out.printf("\n\nObrigado por utlizar nosso sistema!");
    }
    
}
