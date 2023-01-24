
package jaquestao46;

import java.util.Scanner;

public class JAquestao46 {

    
    public static void main(String[] args) {
        Scanner leia = new Scanner(System.in);
        int desconto, venda, salarioTotal, i, n;
	salarioTotal = 5000;
	System.out.printf("\n\nEste rograma determina o valor total do salario de um vendedor no final do mes, sabendo que ele ja tem um salario fixo de 5000.");
	System.out.printf("\n\nDigite o numero de vendas feitas no mes: ");
	n = leia.nextInt();
	for(i = 1; i <= n; i++){
            if(i == 1){
                System.out.printf("\n\nDigite o valor da %d venda: ", i);
            }
            else{
                System.out.printf("\nDigite o valor da %d venda: ", i);
            }
            venda = leia.nextInt();
            if (venda <= 1000){
		desconto = (int) (venda * 0.05);
		venda = venda - desconto;
            }
            else if(venda > 1000 && venda <= 2000){
		desconto = (int) (venda * 0.07);
		venda = venda + desconto;
            }
            else if(venda > 2000){
		desconto = (int) (venda * 0.11);
		venda = venda + desconto;
            }
            salarioTotal = salarioTotal + venda;
	}
	System.out.printf("\n\nO salario total do funcionario e igual a: %d", salarioTotal);	
	System.out.printf("\n\nObrigado por utilizar noso programa!");
	System.out.println();
    }
}

