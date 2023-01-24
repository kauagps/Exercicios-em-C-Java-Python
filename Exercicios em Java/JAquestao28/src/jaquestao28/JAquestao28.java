
package jaquestao28;

import java.util.Scanner;

public class JAquestao28 {

    
    public static void main(String[] args) {
        Scanner leia = new Scanner(System.in);
        int a1, b1, c1, a2, b2, c2, a3, b3, c3;
	System.out.printf("\n\nEste progrma determina se tres atomos sao isobaros, isotonos ou isotopos.");
	System.out.printf("\n\nDigite o numero de protons do primeiro atomo: ");
	a1 = leia.nextInt();
	System.out.printf("\n\nDigite o numero de protons do segundo atomo: ");
	b1 = leia.nextInt();
	System.out.printf("\n\nDigite o numero de protons do terceiro atomo: ");
	c1 = leia.nextInt();
	
	System.out.printf("\n\nDigite o numero de massa do primeiro atomo: ");
	a2 = leia.nextInt();
	System.out.printf("\n\nDigite o numero de massa do segundo atomo: ");
	b2 = leia.nextInt();
	System.out.printf("\n\nDigite o numero de massa do terceiro atomo: ");
	c2 = leia.nextInt();
	
	System.out.printf("\n\nDigite o numero de neutrons do primeiro atomo: ");
	a3 = leia.nextInt();
	System.out.printf("\n\nDigite o numero de neutrons do segundo atomo: ");
	b3 = leia.nextInt();
	System.out.printf("\n\nDigite o numero de neutrons do terceiro atomo: ");
	c3 = leia.nextInt();
	
	if(a1 == b1 & a1 == c1){
            System.out.printf("\n\nOs tres atomos sao isotonos!");
	}
	else if (a1 == b1 & b1 != c1){
            System.out.printf("\n\nSomente o primeiro e segundo atomos sao isotanos!");
	}
	else if (a1 == c1 & c1 != b1){
            System.out.printf("\n\nSomente o primeiro e terceiro atomos sao isotanos!");
	}
	else if(c1 == b1 & b1 != a1){
            System.out.printf("\n\nSomente o segundo e o terceiro atomo sao isotanos!");
	}
	else {
            System.out.printf("\n\nNenum dos atomos sao isotanos!");
	}
		
	
	if(b2 == a2 & a2 == c2){
            System.out.printf("\n\nOs tres atomos sao isobaros!");
	}
	else if (a2 == b2 & b2 != c2){
            System.out.printf("\n\nSomente o primeiro e segundo atomos sao isobaros!");
	}
	else if (a2 == c2 & c2 != b2){
            System.out.printf("\n\nSomente o primeiro e terceiro atomos sao isobaros!");
	}
	else if(c2 == b2 & b2!= a2){
            System.out.printf("\n\nSomente o segundo e o terceiro atomo sao isobaros!");
	}
	else {
            System.out.printf("\n\nNenum dos atomos sao isobaros!");
	}
	
	if(b3 == a3 & a3 == c3){
            System.out.printf("\n\nOs tres atomos sao isotopos!");
	}
	else if (a3 == b3 & b3 != c3){
            System.out.printf("\n\nSomente o primeiro e segundo atomos sao isotopos!");
	}
	else if (a3 == c3 & c3 != b3){
            System.out.printf("\n\nSomente o primeiro e terceiro atomos sao isotopos!");
	}
	else if(c3 == b3 & b3 != a3){
            System.out.printf("\n\nSomente o segundo e o terceiro atomo sao isotopos!");
	}
	else {
            System.out.printf("\nNenum dos atomos sao isotopos!");
	}
	
	System.out.printf("\n\nObrigado por utilizar nosso programa.");
    }
    
}
