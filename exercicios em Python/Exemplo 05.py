import os

print ("\n\nEste programa trabalha com operações matemáticas básicas!")

num1 = int(input("\n\nDigite o primeiro número: "))
num2 = int(input("\n\nDigite o segundo número: "))

#Adição: +
print (num1, "+", num2, "=", num1 + num2)

#Subtração: -
print (num1, "-", num2, "=", num1 - num2)

#Multiplicação: *
print (num1, "*", num2, "=", num1 * num2)

#Potenciação: **
print (num1, "**", num2, "=", num1 ** num2)

#Divisão com truncamento: //
print (num1, "//", num2, "=", num1 // num2)

#Divisão real - ponto flutuante: /
print (num1, "/", num2, "=", num1 / num2)

print ("\n\nObrigado por utilizar nosso sistema!")
os.system ("Pause!")
