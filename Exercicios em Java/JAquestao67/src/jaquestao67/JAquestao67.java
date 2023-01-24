
package jaquestao67;

import java.util.Scanner;

public class JAquestao67 {

    
    public static void main(String[] args) {
        Scanner leia = new Scanner(System.in);
        int min, fat, desconto;
	System.out.printf("\n\nEste programa determina o faturamento total de chamdas internacionais, sabendo que cada minuto equivale 0,30, e que caso o faturamento passe de 500,00, a fatura recebera um desconto de 5 porcentos.");
	System.out.printf("\n\ndigite a quantidade de minutos gastos: ");
	min = leia.nextInt();
	fat = (int) (min * 0.30);
	if (fat > 500){
            desconto = (int) (fat * 0.05);
            fat = fat - desconto;
	}
	System.out.printf("\n\nO valor da fatura do cliente com chamadas internacionais e de: %d", fat);
	System.out.printf("\n\nObrigado por utilizar nosso sistema!");
	System.out.println();
    }
    
}
