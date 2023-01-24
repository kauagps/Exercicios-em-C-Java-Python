
package jaquestao6;

import java.util.Scanner;

public class JAquestao6 {

    
    public static void main(String[] args) {
        Scanner leia = new Scanner(System.in);
        int op, h, raio, aB, volume;
        System.out.printf("\n\nEste programa calcula o vlume de um cone reto!");
        System.out.printf("\n\nDigite 1 caso voce saiba o valor da base do cone, ou 2 caso voce nao saiba o valor da base do cone: ");
        op = leia.nextInt();
        switch(op){
            case 1:
                System.out.printf("\n\nDigite o valor da altura do cone: ");
                h = leia.nextInt();
                System.out.printf("\nAgora digite o valor da base do cone: ");
                aB = leia.nextInt();
                volume = (h * aB) / 3;
                System.out.printf("\nO volume do cone e: %d.", volume);
                break;
            case 2:
                System.out.printf("\n\nDigite o valor da altura do cone: ");
                h = leia.nextInt();
                System.out.printf("\nAgora digite o valor do raio da base do cone: ");
                raio = leia.nextInt();
                volume = (int) ((3.14 * (raio * raio)) * h) / 3;
                System.out.printf("\nO volume do cone e: %d.", volume);
                break;
            default:
                System.out.printf("\n\nOpçao Invalida!");
                break;
        }
        System.out.printf("\n\nObrigado por utilizar nosso sistema!");
    }
    
}
