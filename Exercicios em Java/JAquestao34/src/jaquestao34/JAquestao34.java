
package jaquestao34;

import java.util.Scanner;

public class JAquestao34 {

    
    public static void main(String[] args) {
        Scanner leia = new Scanner(System.in);
        int i, nota = 0, n, notaMax = 0, notaMin = 0, media = 0, maiorM, menorM, alunosRep, alunosAprov;
	maiorM = 0; 
	menorM = 0;
	alunosRep = 0; 
	alunosAprov = 0;
	System.out.printf("\n\nEste programa ler notas variadas entre 0 e 10 de n alunos e determina, nota maxima, nota mminima, a media da turma, a quantidade de notas maiores do que a media, a quantidade de notas menores que a media, a quantidade de alunos aprovados, e reprovados.");
	System.out.printf("\n\nDigite a quantidade de alunos pertencente a turma: ");
	n = leia.nextInt();
	for(i = 1; i <= n; i++){
            System.out.printf("\n\nDigite a nota do %d aluno: ", i);
            nota = leia.nextInt();
            media = media + nota;
            if (i == 1){
		notaMax = nota;
		notaMin = nota;
            }
            if(notaMax < nota){
		notaMax = nota;
            }
            else if(notaMin > nota){
                    notaMin = nota;
                }
            if (nota < 7){
                alunosRep++;
            }
            else if(nota >= 7){
                    alunosAprov++;
		}
	}
	System.out.printf("\n\nPorfavor Digite as notas do alunos novamente para o calculo da media");
        media = media / n;
	for(i = 1; i <= n; i++){
            System.out.printf("\n\nDigite a nota do %d novamente: ", i);
            nota = leia.nextInt();
            if (nota >= media){
                maiorM = maiorM + 1;
            }
            else if (nota < media){
                    menorM = menorM + 1;
            }
        }
	System.out.printf("\n\nA nota maxima foi %d, e a nota minima foi %d .", notaMax, notaMin);
	System.out.printf("\n\nA media da turma foi %d, a quantidade de notas maiores da media foi %d, e a quantidade menores foram %d", media, maiorM, menorM);
	System.out.printf("\n\nA quantidade de alunos aprovados foram %d, e a quantidade de reprovados foram %d.", alunosAprov, alunosRep);
	System.out.printf("\n\nObrigado utilizar nosso programa!");
        System.out.println();
    }
    
}
