
package jaquestao65;

import java.util.Scanner;

public class JAquestao65 {

    
    public static void main(String[] args) {
        Scanner leia = new Scanner(System.in);
        int n, volEspuma, volumeCa, volumeCi, areaBc, h, com, alt, lar;
	System.out.printf("\n\nEste programa determina a quantidade de espulma necessario para proteer n luminarias.");
	System.out.printf("\n\nDigite a quantidade de luminarias a qual voce deseja protejer: ");
	n = leia.nextInt();
	System.out.printf("\n\ndigite o valor da area da base do cilindro: ");
	areaBc = leia.nextInt();
	System.out.printf("\n\nDigite o valor da altura do cilindro: ");
	h = leia.nextInt();
	System.out.printf("\n\ndigite o valor do comprimento da caixa: ");
	com = leia.nextInt();
	System.out.printf("\n\nDigite o valor da altura da caixa: ");
	alt = leia.nextInt();
	System.out.printf("\n\nDigite o valor da largura da caixa: ");
	lar = leia.nextInt();
	volumeCi = areaBc * h;
	volumeCa = (com * alt) * lar;
	if(volumeCi > volumeCa){
            System.out.printf("\n\nA caixa nao suporta o tamanho da luminaria!");
	}
        else{
            volEspuma = (volumeCa - volumeCi) * n;
            System.out.printf("\n\nO volume necessario de espuma e de: %d", volEspuma);
        }
	System.out.printf("\n\nObrigado por utilizar nosso sistema!");
	System.out.println();
    }
    
}
