
package jaquestao14;

import java.util.Scanner;

public class JAquestao14 {

    
    public static void main(String[] args) {
        Scanner leia = new Scanner(System.in);
        int peso;
	System.out.printf ("\n\nEste programa determina o indice de massa corporal de uma pessoa.");
	System.out.printf("\n\nDigite o peso: ");
	peso = leia.nextInt();
	if (peso < 16) {
		System.out.printf ("\n\nA massa dessa pessoa e de alguem com magresa estrema!!!");
		System.out.printf("\n\nObrigado por utilizar nosso programa, e busque tratamento urgente!!!");
	}
        else if(peso == 16 & peso < 17) {
		System.out.printf("\n\nEssa pessoa esta em um estado de magresa moderada.");
		System.out.printf("\n\nObrigado por utilizar nosso programa, busque melhorar sua saude mais um pouco.");
            }
        else if(peso == 17 & peso < 18){
		System.out.printf("\n\nEssa pessoa esta com magresa leve.");
		System.out.printf("\n\nObrigado por utilizar nosso programa, esta quase la melhore um pouquinho mais sua alimentacao.");
            }
        else if(peso == 18 & peso < 25){
        	System.out.printf("\n\nEssa pessoa esta saudavel.");
		System.out.printf("\n\nObrigado por utilizar nosso programa, parabens continue com sua saude dessa forma.");
            }
        else if(peso == 25 & peso < 30){
                System.out.printf("\n\nEssa pessoa esta com sobre peso.");
		System.out.printf("\n\nObrigado por utilizar nosso programa, busque melhorar alimentacao antes que seja tarde.");
            }
        else if(peso == 30 & peso < 35){
                System.out.printf("\n\nEssa pessoa esta com obesidade gral 1.");
		System.out.printf("\n\nObrigado por utilizar nosso programa, melhore sua alimentacao pois e perigoso.");
            }
        else if(peso == 35 & peso > 40){
		System.out.printf("\n\nEssa pessoa esta com obesidade gral 2. (SEVERA)!");
		System.out.printf("\n\nObrigado por utilizar nosso programa, melhore o quanto antes sua alimentacao pois e grave!");
            }
        System.out.println();
    }
    
}
