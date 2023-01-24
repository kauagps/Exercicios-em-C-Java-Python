import os

print ("\n\nEste programa lê e imprime os dados de um usuário!")

nome = input("\n\nDigite seu nome: ")
idade = int(input("\n\nDigite sua idade: "))
altura = float(input("\n\nDigite sua altura(m): "))

print ("\n\nSeu nome é", nome, "! Você tem", idade, "anos!")
print ("\n\nSua altura é de", altura, "metros!")

print ("\n\nObrigado por utilizar nosso programa!")
os.system ("Pause")

