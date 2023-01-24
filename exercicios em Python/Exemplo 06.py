import os

print ("\n\nEste programa verifica a situação de um aluno!")

nota1 = float(input("\n\nDigite a primeira nota: "))
nota2 = float(input("\n\nDigite a segunda nota: "))

media = (nota1 + nota2)/2

print ("\n\nA média do aluno foi de", media, "!")

#Para aprovação, media >=7
if (media >= 7):
    print ("\n\nAluno aprovado!")
else:
    print ("\n\nAluno reprovado!")

print ("\n\nObrigado por utilizar nosso programa!")
os.system ("Pause!")
