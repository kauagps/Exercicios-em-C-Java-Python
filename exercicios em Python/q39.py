import os

print("\n\nEste programa ler a idade de n pessoas e comparaas para assim definir, a idade media, quem tem a maior idade, quem tem a menor idade, quantos sao maiores de idades, e quantos sao menores de idade.")
n = int(input("\nDigite a quantidade de pessoas a qual iremos comparar a idade:"))
i = 1
media = 0
quantMaior = 0
quantMenor = 0
while i <= n:
        print("\nDigite quantos anos a ",i," pessoa tem: ")
        idade = int(input(""))
        media = media + idade
        if i == 1:
                idadeMenor = idade
                idadeMaior = idade
                
        if idadeMaior < idade:
                idadeMaior = idade
                
        elif idadeMenor > idade:
                idadeMenor = idade

        if idade >= 18:
                quantMaior = quantMaior + 1

        if idade < 18:
                quantMenor = quantMenor + 1

        i = i + 1
        
media = int(media / n)
print("\nA media idade das ",n," pessoa e igual a ",media,", a pessoa mais velha tem ",idadeMaior," anos de idade, e mais nova tem ",idadeMenor," anos de idade.")
print("\nSomando todas as pessoas maiores de idade resulta em ",quantMaior," pessoas, e somando todas menores de idade e igual a ",quantMenor," pessoas.")
print("\nObrigado por utilizar nosso sistema!")
os.system("pause")
