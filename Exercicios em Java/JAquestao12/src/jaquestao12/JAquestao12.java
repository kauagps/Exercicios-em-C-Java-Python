
package jaquestao12;

import java.util.Scanner;

public class JAquestao12 {

    
    public static void main(String[] args) {
        Scanner leia = new Scanner(System.in);
        int DDI;
        System.out.printf("\n\nEste programa determina se um pais e sul americano ou nao, com base em seu DDI.");
        System.out.printf("\nDigite o DDI do pais desejado: ");
        DDI = leia.nextInt();
        if ((DDI == 54 || DDI == 591 || DDI == 55 || DDI == 56 || DDI == 57 || DDI == 593 || DDI == 44 || DDI == 594 || DDI == 592 || DDI == 595 || DDI == 51 || DDI == 597 || DDI == 58 || DDI == 598)){
            System.out.printf("\nO DDI e sim! de um pais sul americano!");
        }
        else{
            System.out.printf("\nO DDI digitado nao pertence a um pais sul americano.");
        }
        System.out.printf("\nObrigado por utilizar nosso sistema!");
    }
    
}
