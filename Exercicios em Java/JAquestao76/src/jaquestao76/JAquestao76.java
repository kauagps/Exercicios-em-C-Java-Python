
package jaquestao76;

import java.util.Scanner;

public class JAquestao76 {

    
    public static void main(String[] args) {
        Scanner leia = new Scanner(System.in);
        int i, n, tempo, tL, tI;
	tI = 0;
	tL = 0;
	System.out.printf("\n\nEste programa determina quantos clientes foram atendidos dentro e fora do tempo legal.");
	System.out.printf("\n\nDigite o numero de pessoa que estavam na fila: ");
	n = leia.nextInt();
	for(i = 1; i <= n; i++){
            System.out.printf("\n\nDigite a quantidade de tempo a qual o %d cliente esperou na fila: ", i);
            tempo = leia.nextInt();
            if(tempo >= 30){
		tI++;
            }
            else if(tempo < 30){
                    tL++;
		}
	}
	System.out.printf("\n\nA quantidade de clientes atendidos dentro do tempo legal foi de: %d. E a quantidade fora do tempo legal foi de: %d.", tL, tI);
	System.out.printf("\n\nObrigado por utilizar nosso sistema!");
	System.out.println();
    }
    
}
