import os
cpftexte = 123456789
senhaTexte = 40028922
dataNacTexte = 11112011
cpf = int(input("\nDigite o valor do cpf: "))
if (cpf == cpftexte):
    senha = int(input("CPF valido! Digite sua senha: "))
    
    if(senha == senhaTexte):
        datanac = int(input("\n\nSenha Valida! Digite sua data de nacimento: "))
        
        if(datanac == dataNacTexte):
            print("\n\nData de nacimento Valida!"))
                 
        elif (dataNacTexte != datanac):
            print("\n\nData de nacimento Invalida! Veja se escrevey corretamente.")
            
    elif (senha != senhaTexte):
        print("\n\nSenha Invalida! Veja se voce escreveu corretamente.")
        
elif (cpf != cpftexte):
    print("\n\nCPF Invalido! Veja se voce escreveu corretamente.")

print("\nObrigado por utilizar nosso sistema!")
os.system("pause")
