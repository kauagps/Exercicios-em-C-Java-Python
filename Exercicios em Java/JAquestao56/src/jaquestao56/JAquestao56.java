
package jaquestao56;

import java.util.Scanner;
        
public class JAquestao56 {

    
    public static void main(String[] args) {
        Scanner leia = new Scanner(System.in);
        int i, n, peso, altura, idade, mediaP = 0, mediaA = 0, mediaI = 0, maA = 0, maP = 0, maI = 0, meA = 0, meP = 0, meI = 0;
	System.out.printf("\n\nEste programa determina a media, maior e menor, peso, idade e altura de n pessoas.");
	System.out.printf("\n\nDigite a quantidade de pessoas a qual voce ira compara peso, idade, e altura: ");
	n = leia.nextInt();
	for(i = 1; i <= n; i++){
            System.out.printf("\n\nDigite o peso da %d pessoa: ", i);
            peso = leia.nextInt();
            System.out.printf("\nDigite a altura da %d pessoa: ", i);
            altura = leia.nextInt();
            System.out.printf("\nDigite a idade da %d pessoa: ", i);
            idade = leia.nextInt();
            mediaP = mediaP + peso;
            mediaA = mediaA + altura;
            mediaI = mediaI + idade;
            if(i == 1){
		maA = altura;
		maP = peso;
		maI = idade;
		meA = altura;
		meP = peso;
		meI = idade;
		}
            if(maA < altura){
		maA = altura;
            }
            else if(meA > altura){
                    meA = altura;
		}
            if(maP < peso){
		maP = peso;
            }
            else if(meP > peso){
                    meP = peso;
		}
            if(maI < idade){
                maI = idade;
            }
            else if(meI > idade){
                    meI = idade;
		}
	}
	mediaP = mediaP / n;
	mediaA = mediaA / n;
	mediaI = mediaI / n;
	System.out.printf("\n\nAs medias sao: media de peso %d, media de altura %d, e media de idade %d.", mediaP, mediaA, mediaI);
	System.out.printf("\nA maior altura e %d, e a menor altura e %d, o maior peso e %d, e o menor peso e %d, a maior idade e %d, e a menor idade e %d.", maA, meA, maP, meP, maI, meI);
	System.out.printf("\n\nObrigado por utilizar nosso sistema!");
	System.out.println();
    }
    
}
