import os

tI = 0
tL = 0
print("\nEste programa determina quantos clientes foram atendidos dentro e fora do tempo legal.");
n = int(input("\nDigite o numero de pessoa que estavam na fila: "))
i = 1
while i <= n:
        print("\nDigite a quantidade de tempo a qual o ",i," cliente esperou na fila: ")
        tempo = int(input(""))
        if tempo >= 30:
                tI = tI + 1

        elif tempo < 30:
                tL = tL + 1

        i = i + 1

print("\nA quantidade de clientes atendidos dentro do tempo legal foi de: ",tL,". E a quantidade fora do tempo legal foi de: ",tI,".")
print("\nObrigado por utilizar nosso sistema!")
os.system("pause")
