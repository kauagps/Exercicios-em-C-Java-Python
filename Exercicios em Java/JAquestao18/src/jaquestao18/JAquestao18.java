
package jaquestao18;

import java.util.Scanner;

public class JAquestao18 {

    
    public static void main(String[] args) {
        Scanner leia = new Scanner(System.in);
        int sal, salB = 0, salL = 0;
	System.out.printf("\n\nEste programa imprime o salario bruto, e liquido de um funcionario!");
	System.out.printf("\n\nDigite o valor do salario: ");
	sal = leia.nextInt();
	if (sal <= 2000){
            salB = (int) (((sal * 0.13) + sal) - (sal * 0.08));
            salL = (int) ((sal * 0.13) + sal);
        }
	else 
            if(sal > 2000 && sal < 4000){
		salB = (int) (((sal * 0.11) + sal) - (sal * 0.08));
		salL = (int) ((sal * 0.11) + sal);
            }	
	else 
            if(sal >= 4000){
		salB = (int) (((sal * 0.07) + sal) - (sal * 0.08));
                salL = (int) ((sal * 0.07) + sal);
            }
        System.out.printf("\nO salario liquido reajustado e igual a: %d.", salL);
        System.out.printf("\nE o salario bruto reajustado e com desconto do FGTS e igual a: %d.", salB);
	System.out.printf("\n\nObrigado por utilizar nosso sistema!");
        System.out.println();
    }
    
}
