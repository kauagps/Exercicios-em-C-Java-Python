package jamediaaluno;

import java.util.Scanner;

public class JAmediaAluno {

    public static void main(String[] args) {
        Scanner leia = new Scanner(System.in);
        float nota1, nota2, nota3, nota4, media;
        media = 0;
        System.out.printf ("\n\nEste programa verifica se um "
                + "aluno foi aprovado ou reprovado!");
        System.out.printf ("\n\nDigite a 1ª nota: ");
        nota1 = leia.nextFloat();
        System.out.printf ("\n\nDigite a 2ª nota: ");
        nota2 = leia.nextFloat();
        System.out.printf ("\n\nDigite a 3ª nota: ");
        nota3 = leia.nextFloat();
        System.out.printf ("\n\nDigite a 4ª nota: ");
        nota4 = leia.nextFloat();
        media = (nota1 + nota2 + nota3 + nota4) / 4;
        //Supondo que a média mínima para aprovação é 7,0
        if (media >= 7) {
            System.out.printf ("\n\nAluno aprovado com média "
                    + "%.2f!", media);
        }
        else if (media < 7) {
            System.out.printf ("\n\nAluno reprovado com média "
                    + "%.2f!", media);
        }
        System.out.printf ("\n\nObrigado por utilizar nosso "
                + "sistema!");
        System.out.println();
        
    }
    
}
