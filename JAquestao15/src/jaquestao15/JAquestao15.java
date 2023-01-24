
package jaquestao15;

import java.util.Scanner;

public class JAquestao15 {

    
    public static void main(String[] args) {
        Scanner leia = new Scanner(System.in);
        int media, soma = 0, n, pontos, i;
        System.out.printf ("\n\nEste programa determima a media bimestral de uma sala.");
	System.out.printf ("\n\nDigite a quantidade de alunos: ");
	n = leia.nextInt();
	for (i = 1; i <= n; i++) {
            System.out.printf ("\n\nDigite a pontucao do %d aluno: ", i);
            pontos = leia.nextInt();
            soma = pontos + soma;
	}	
	media = soma / n;
	System.out.printf("\n\nA media a media bimestral da turma e: %d.", media);
	System.out.printf("\n\nObrigado por utilizar nosso sistema!");
        System.out.println();
    }
    
}
