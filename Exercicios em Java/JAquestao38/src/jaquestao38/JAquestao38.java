
package jaquestao38;

import java.util.Scanner;

public class JAquestao38 {

    
    public static void main(String[] args) {
        Scanner leia = new Scanner(System.in);
        int i, n, razao, num;
	n = 100;
	System.out.printf("\n\nEste programa recebe uma razao de progressao aritimetica e imprime uma sequecia de 100 numeros, o usuario determina qual o primeiro termo!");
	System.out.printf("\n\nDigite o valor da razao: ");
	razao = leia.nextInt();
	System.out.printf("\nDigite o numero a qual a progressao inicia: ");
	num = leia.nextInt();
	for (i = 1; i <= n; i++){
            if (i == 1){
                System.out.printf("%d, ", num);
            }
            else if(i == 100){
                    num = num + razao;
                    System.out.printf("%d.", num);
            }
            else if(i == 30){
                    num = num + razao;
                    System.out.printf("\n%d, ", num);
            }
            else if(i == 60){
                    num = num + razao;
                    System.out.printf("\n%d, ", num);
            }
            else if(i == 90){
                    num = num + razao;
                    System.out.printf("\n%d, ", num);
            }
            else{
		num = num + razao;
		System.out.printf("%d, ", num);
            }
	}
	System.out.printf("\n\nObrigado por utilizar nosso sistema!");
        System.out.println();
    }
    
}
