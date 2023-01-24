
package jaquestao4;

import java.util.Scanner;

public class JAquestao4 {

    
    public static void main(String[] args) {
        Scanner leia = new Scanner(System.in);
        int op, real, dol, lib, eur, ren;
        System.out.printf("\n\nEste programa converte o real em uma das seguintes moedas.");
        System.out.printf("\n\nMenu:");
        System.out.printf("\n1.Dolar.");
        System.out.printf("\n2.Euro.");
        System.out.printf("\n3.Libras Esterlinas.");
        System.out.printf("\n4.Renminbi.");
        System.out.printf("\nDigite a opcao desejada: ");
        op = leia.nextInt();
        switch(op){
            case 1:
                System.out.printf("\n\nVoce escolheu a conversao do dolar!");
                System.out.printf("\n\nDigite o valor em real a qual deseja converter: ");
                real = leia.nextInt();
                dol = (int) (real / 3.90);
                System.out.printf("\nA conversao e igual a: %d", dol);
                break;
            case 2:
                System.out.printf("\n\nVoce escolheu a conversao do Euro!");
                System.out.printf("\n\nDigite o valor em real a qual deseja converter: ");
                real = leia.nextInt();
                eur = (int) (real / 4.38);
                System.out.printf("\nA conversao e igual a: %d", eur);
                break;
            case 3:
                System.out.printf("\n\nVoce escolheu a conversao das Libras Esterlinas!");
                System.out.printf("\n\nDigite o valor em real a qual deseja converter: ");
                real = leia.nextInt();
                lib = (int) (real / 5.10);
                System.out.printf("\nA conversao e igual a: %d", lib);
                break;
            case 4:
                System.out.printf("\n\nVoce escolheu a conversao do Renminbi!");
                System.out.printf("\n\nDigite o valor em real a qual deseja converter: ");
                real = leia.nextInt();
                ren = (int) (real / 0.58);
                System.out.printf("\nA conversao e igual a: %d", ren);
                break;
            default:
                System.out.printf("\n\nDigite uma opao valida!");
                break;
        }
        System.out.printf("\n\nObrigado por utilizar nosso sistema!");
    }
    
}
