
package jaquestao24;

import java.util.Scanner;

public class JAquestao24 {

    
    public static void main(String[] args) {
        Scanner leia = new Scanner(System.in);
        int i, n, fat, p, num;
	fat = 0;
	System.out.printf("\nEste programa calcula o faturamento mensal de um mercado!");
	System.out.printf("\nDigite o numero de mercadorias diferentes que voce possui: ");
	n = leia.nextInt();
	for (i = 1; i <= n; i++){
            System.out.printf("\nDigite o numero de unidades vendidas da %d mercadoria: ", i);
            num = leia.nextInt();
            System.out.printf("\nDigite o preco da %d mercadoria: ", i);
            p = leia.nextInt();
            fat = (num * p) + fat;
	}
	System.out.printf("\nO faturamento mensal e de %d.", fat);
        System.out.println();
    }
    
}
