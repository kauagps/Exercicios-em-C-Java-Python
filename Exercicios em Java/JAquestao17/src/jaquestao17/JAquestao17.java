
package jaquestao17;

import java.util.Scanner;

public class JAquestao17 {

    
    public static void main(String[] args) {
        Scanner leia = new Scanner(System.in);
        int cpf, cpftexte, senha, senhaTexte, datanac, datanacTexte = 15022004;
	cpftexte = 123456789;
	senhaTexte = 40028922;

	System.out.printf ("\n\nEste programa ler seu CPF, senha e data de nacimento, e confirma se e valido ou nao.");
	System.out.printf("\n\nDigite seu CPF: ");
	cpf = leia.nextInt();
	if (cpf == cpftexte){
            System.out.printf("CPF valido! Digite sua senha: ");
            senha = leia.nextInt();
            if(senha == senhaTexte){
		System.out.printf("\n\nSenha Valida! Digite sua data de nacimento: ");
		datanac = leia.nextInt();
		if(datanac == datanacTexte){
                    System.out.printf("\n\nData de nacimento Valida!");
                    System.out.printf("\n\nObrigado por utilizar nosso sistema!");
                }
                else{
                    System.out.printf("\n\nData de nacimento invalida! Veja se voce escreveu corretamente.");
                    System.out.printf("\n\nObrigado por utilizar nosso sistema!");
                }
            }
            else{
                System.out.printf("\n\nSenha Invalida! Veja se voce escreveu corretamente.");
                System.out.printf("\n\nObrigado por utilizar nosso sistema!");
            }
	}
        else{
            System.out.printf("\n\nCPF Invalido! Veja se voce escreveu corretamente.");
            System.out.printf("\n\nObrigado por utilizar nosso sistema!");
	}
        System.out.println();
    }
    
}
