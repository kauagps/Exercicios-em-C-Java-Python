
package jaquestao42;

import java.util.Scanner;

public class JAquestao42 {

    
    public static void main(String[] args) {
        Scanner leia = new Scanner(System.in);
        int i, n, n2, n2C = 0, num1, num2, ass;
	num1 = 1;
	num2 = 0;
	System.out.printf("\n\nEste programa realiza a serie de fibonacci e, determina se um termo usado pelo usuario pertence a serie de fibonacci.");
	System.out.printf("\n\nDigite a quantidade de termos que voce deseja que repita se a serie de fibonacci: ");
	n = leia.nextInt();
	System.out.printf("\nDigite o numero a qual voce acredita que faz parte da serie de fibonacci: ");
	n2 = leia.nextInt();
	for (i = 1; i <= n; i++){
            ass = num1 + num2;
            num1 = num2;
            num2 = ass;
            if(i == 1){
                System.out.printf("\n\n%d,", num1);
            }
            else if(i == n){
                    System.out.printf("%d.", num1);
		}
            else{
                System.out.printf("%d,", num1);
            }
            if(num2 == n2){
		n2C = num2;
            }	
	}
        if (n2 == n2C){
            System.out.printf("\n\nO numero %d faz parte da serie!", n2);
        }
        else{
            System.out.printf("\n\nO numero %d nao faz parte da serie!", n2);
        }
	System.out.printf("\nObrigado por utilizar nosso sistema!");
	System.out.println();
    }
    
}
