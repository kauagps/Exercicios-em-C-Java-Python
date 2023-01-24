
package jaquestao1;

import java.util.Scanner;

public class JAquestao1 {

    
    public static void main(String[] args) {
        Scanner ler = new Scanner(System.in);
        int min, hs, seg;
        hs = 0;
        seg = 0;
        System.out.printf("\n\nEste programa transforma minutos em, segundos, e horas!");
        System.out.printf("\n\nDigite o valor em minutos: ");
        min = ler.nextInt();
        hs = min / 60;
        seg = min * 60;
        System.out.printf("\nO valor em hora e: %d.", hs);
        System.out.printf("\nE o valor em segundos e: %d.", seg);
        System.out.printf("\n\nObrigado por utilizar nosso suistema!");
    }
    
}
