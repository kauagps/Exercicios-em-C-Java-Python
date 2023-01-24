
package jaquestao25;

import java.util.Scanner;

public class JAquestao25 {

    
    public static void main(String[] args) {
        Scanner leia = new Scanner(System.in);
        int n, nota, media, i;
        media = 0;
        System.out.printf("\n\nEste programa calcula o numero de alunos assima da media.");
	System.out.printf("\n\nDigite a quantidade de alunos: ");
	n = leia.nextInt();
	for (i = 1; i <= n; i++){
            System.out.printf("\n\nDigite a nota do %d aluno: ", i);
            nota = leia.nextInt();
            if(nota > 7){
		media = media + 1;	
            }
	}
	System.out.printf("\n\nA sala de aula com %d alunos, teve %d alunos com a nota assima da media.", n, media);
	System.out.printf("\n\nObrigado por utilizar nosso programa!");
        System.out.println();
    }
    
}
