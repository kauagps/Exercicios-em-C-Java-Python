import os

print("\nEste programa determina o maior e menor numero, e quantos numeros sao superior a media.")
n = int(input("\nDigite a quantidade de numeros a qual deseja digitar: "))
i = 1
soma = 0
media = 0
maiorM = 0
while i <= n:
        print("\nDigite o ",i," numero: ")
        num = int(input(""))
        soma = int(soma + num)
        if i == 1:
                maior = num
                menor = num
        elif maior < num:
                maior = num
        elif menor > num:
                menor = num
        i = i + 1

media = int(soma / n)
print("\nDigite os valores novamente por favor.")
i = 1
while i <= n:
        print("\nDigite o ",i," numero: ")
        num = int(input(""))
        if num > media:
                maiorM = maiorM + 1
        i = i + 1
        
print("\n\nO maior numero e ",maior,", e o menor numer e ",menor,".")
print("\n A media e de ",media,", portanto existem ",maiorM," numeros maior do que a media!")
print("\nObrigado por utilizar nosso sistema!")
os.system("pause")
