import os

print("\n\nEste programa determina a media de curtidas a qual voce recebe em um dia.")
n = int(input("\n\nDigite a quantidade de postagens q voce faz no dia: "))
i = 1
soma = 0
media = 0
while i <= n:
        print("\n\nDigite a quantidade de curtidas da ",i," publicaca: ")
        likes = int(input(""))
        soma = int(likes + soma)
        i = i + 1
        
media = int(soma / n)
print("A media de like e: ",media)
print("\n\nObrigado por utilizar nosso sistema!")
os.system("pause")
