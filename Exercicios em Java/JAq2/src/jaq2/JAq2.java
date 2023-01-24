
package jaq2;

import java.util.Scanner;

public class JAq2 {

    
    public static void main(String[] args) {
        Scanner ler = new Scanner(System.in);
        int base, area, perimetro, altura, comprimento;
        System.out.printf("\n\nEste programa calcula a area, e o perimetro de um retangulo qualquer.");
        System.out.printf("\n\nDigite o valor da altura do retangulo: ");
        altura = ler.nextInt();
        System.out.printf("\nTambem digite o valor do comprimento do retangulo: ");
        comprimento = ler.nextInt();
        System.out.printf("\nE agora o valor da base do retangulo: ");
        base = ler.nextInt();
        area = altura * base;
        perimetro = comprimento + comprimento + altura + altura;
        System.out.printf("\n\nO valor da area do retangulo e: %d.", area);
        System.out.printf("\nE o valor do perimetro e: %d.", perimetro);
        System.out.printf("\n\nObrigado por utilizar nosso sistema!");
    }
    
}
