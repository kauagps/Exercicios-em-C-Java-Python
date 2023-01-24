
package jaquestao39;

import java.util.Scanner;

public class JAquestao39 {

    
    public static void main(String[] args) {
        Scanner leia = new Scanner(System.in);
        int i, n, idade, media = 0, idadeMaior, idadeMenor, quantMaior, quantMenor;
	idadeMaior = 0;
	idadeMenor = 0;
	quantMaior = 0;
	quantMenor = 0;
	System.out.printf("\n\nEste programa ler a idade de n pessoas e comparaas para assim definir, a idade media, quem tem a maior idade, quem tem a menor idade, quantos sao maiores de idades, e quantos sao menores de idade.");
	System.out.printf("\n\nDigite a quantidade de pessoas a qual iremos comparar a idade:");
	n = leia.nextInt();
	for (i = 1; i <= n; i++){
		System.out.printf("\n\nDigite quantos anos a %d pessoa tem: ", i);
		idade = leia.nextInt();
		media = media + idade;
		if (i == 1){
			idadeMenor = idade;
			idadeMaior = idade;
		}
		if (idadeMaior < idade){
			idadeMaior = idade;
		}
		else if(idadeMenor > idade){
			idadeMenor = idade;
		}
		if (idade > 18){
			quantMaior = quantMaior + 1;
		}
		if(idade <= 18){
			quantMenor = quantMenor + 1;
		}
	}
	media = media / n;
	System.out.printf("\n\nA media idade das %d pessoa e igual a %d, a pessoa mais velha tem %d anos de idade, e mais nova tem %d anos de idade.", n, media, idadeMaior, idadeMenor);
	System.out.printf("\nSomando todas as pessoas maiores de idade resulta em %d pessoas, e somando todas menores de idade e igual a %d pessoas.", quantMaior, quantMenor);
        System.out.printf("\nObrigado por utilizar nosso sistema!");
        System.out.println();
    }
    
}
