import os

print("\nEste programa determina a media, maior e menor, peso, idade e altura de n pessoas.")
n = int(input("\nDigite a quantidade de pessoas a qual voce ira compara peso, idade, e altura: "))
i = 1
mediaP = 0
mediaI = 0
mediaA = 0
while i <= n:
        print("\n\nDigite o peso da ",i," pessoa: ")
        peso = float(input(""))
        print("\nDigite a altura da ",i," pessoa: ")
        altura = float(input(""))
        print("\nDigite a idade da ",i," pessoa: ")
        idade = float(input(""))
        mediaP = int(mediaP + peso)
        mediaA = int(mediaA + altura)
        mediaI = int(mediaI + idade)
        if i == 1:
                maA = altura
                maP = peso
                maI = idade
                meA = altura
                meP = peso
                meI = idade

        if maA < altura:
                maA = altura

        elif meA > altura:
                meA = altura

        if maP < peso:
                maP = peso

        elif meP > peso:
                meP = peso

        if maI < idade:
                maI = idade

        elif meI > idade:
                mel = idade

        i = i + 1

meI = idade
mediaP = int(mediaP / n)
mediaA = int(mediaA / n)
mediaI = int(mediaI / n)
print("\n\nAs medias sao: media de peso ",mediaP,", media de altura ",mediaA,", e media de idade ", mediaI)
print("\nA maior altura e ",maA,", e a menor altura e ",meA,", o maior peso e ",maP,", e o menor peso e ",meP,", a maior idade e ",maI,", e a menor idade e ", meI)
print("\nObrigado por utilizar nosso sistema!")
os.system("pause")
