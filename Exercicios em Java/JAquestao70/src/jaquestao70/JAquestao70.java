
package jaquestao70;

import java.util.Scanner;

public class JAquestao70 {

    
    public static void main(String[] args) {
        Scanner leia = new Scanner(System.in);
        int i, n, result, kwh, el, w, hs, soma;
	soma = 0;
	result = 0;
	System.out.printf("\n\nEste programa determina o faturamento mensal de um conta de energia.");
	System.out.printf("\n\nquantos eltronicos possui em sua casa: ");
	n = leia.nextInt();
	for (i = 1; i <= n; i++){
            System.out.printf("\n\nQuantas unidade do %d eletronico voce possui: ", i);
            el = leia.nextInt();
            System.out.printf("\nDigite a quantidade de W o %d aparelho gasta: ", i);
            w = leia.nextInt();
            System.out.printf("\nDigite a quantidade de horas voce gasta com %d aparelho ligado: ", i);
            hs = leia.nextInt();
            result = (el * w * hs * 30) / 1000;
	soma = result + soma;
	}
	System.out.printf("\n\nA fatura do mes de energia equivale a: %d", soma);
	System.out.printf("\n\nObrigado por utilizar nosso sistema!");
	System.out.println();
    }
    
}
