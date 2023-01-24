
package jaquestao80;

import java.util.Scanner;

public class JAquestao80 {

    
    public static void main(String[] args) {
        Scanner leia = new Scanner(System.in);
        int i, n, num, sI, sP, qntI, qntP, mP, mI;
	num = 1;
	sI = 0;
	sP = 0;
	qntI = 0;
	qntP = 0;
	mP = 0;
	mI = 0;
	System.out.printf("\nEste programa determina a quantidade de numeros pares, a quantidade de numeros impares, a soma de todos os pares, a soma de todos os impares, a media de todos os pares e a media de todos os impares no intervalo de 0 ate um inteiro positivo n digitado pelo usuario");
	System.out.printf("\nDigite o valor de n: ");
	n = leia.nextInt();
	for (i = 1; i <= n; i++){
            if (i == n){
                System.out.printf("%d. ", num);
            }
            else{
                System.out.printf("%d, ", num);
            }
            if (num % 2 == 0){
    		sP = sP + num;
    		qntP = qntP + 1;
            }
            else{
    		sI = sI + num;
    		qntI = qntI + 1;
            }
            num = num + 1;
	}
	mI = sI / n;
	mP = sP / n;
	System.out.printf("\nA quantidade de numeros pares e de %d, a quantidade de impares de %d. A soma de todos os pares resulta em %d, e a dos impares %d. E por fim a media dos impares e %d, e a dos pares %d.", qntP, qntI, sP, sI, mI, mP);
	System.out.printf("\nObrigado por utilizar nosso sistema!");
        System.out.println();
    }
    
}
