
package jaquestao44;

import java.util.Scanner;

public class JAquestao44 {

    
    public static void main(String[] args) {
        Scanner leia = new Scanner(System.in);
        int maiorM, num, media, i, n, soma, maior, menor;
        media = 0;
        soma = 0;
        maior = 0;
        menor = 0;
        maiorM = 0;
	System.out.printf("\n\nEste programa determina o maior e menor numero, e quantos numeros sao superior a media.");
	System.out.printf("\n\nDigite a quantidade de numeros a qual deseja digitar: ");
	n = leia.nextInt();
	for(i = 1; i <= n; i++){
            if(i == 1){
            System.out.printf("\n\nDigite o %d numero: ", i);
            }
            else{
		System.out.printf("\nDigite o %d numero: ", i);
            }
            num = leia.nextInt();
            soma = soma + num;
            if(i == 1){
                maior = num;
		menor = num;
            }
            else if(maior < num){
                    maior = num;
		}
            else if(menor >= num){
                    menor = num;
		}
	}
	media = soma / n;
	System.out.printf("\n\nDigite os valores novamente por favor.");
	for(i = 1; i <= n; i++){
            if(i == 1){
            System.out.printf("\n\nDigite o %d numero novamente: ", i);
            }
            else{
		System.out.printf("\nDigite o %d numero: ", i);
            }
            num = leia.nextInt();
            if(num > media){
                maiorM++;
            }
	}
	System.out.printf("\n\nO maior numero e %d, e o menor numer e %d.", maior, menor);
	System.out.printf("\n A media e de %d, portanto existem %d numeros maior do que a media!", media, maiorM);
	System.out.printf("\nObrigado por utilizar nosso sistema!");
        System.out.println();
    }
    
}
