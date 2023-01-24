import os

print ("\n\nEste programa determina o preco total de n obras de um museu.")
n = int(input("\nDigite a quantidade de obras a qual voce quer calcular o preco: "))
i = 1
soma = 0
while i <= n:
        print("\nDigite o preco da ",i," obra: ")
        preco = int(input(""))
        soma = soma + preco
        i = i + 1

print("\n\nO valor total das obras e: ",soma)
print("\n\nObrigado por utilizar nosso programa!")
os.system("pause")
