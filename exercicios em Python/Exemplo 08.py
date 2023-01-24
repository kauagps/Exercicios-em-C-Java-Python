import os

print ("\n\nEste programa emite um relatório de notas!")

n = int(input("\n\nDigite a quantidade de notas: "))

i = 1
soma = 0
#supondo que as notas podem variar entre 0 e 10
maior = 0
menor = 10

while (i <= n):
    nota = float(input("\n\nDigite o valor da nota: "))
    soma = soma + nota
    if (nota > maior):
        maior = nota
    if (nota < menor):
        menor = nota
    i = i + 1

media = soma / n

print ("\n\nQuantidade de notas lidas:", n, "!")
print ("\n\nSoma das notas:", soma, "!")
print ("\n\nMédia das notas:", media, "!")
print ("\n\nMaior nota:", maior, "!")
print ("\n\nMenor nota:", menor, "!")

print ("\n\nObrigado por utilizar nosso sistema!")
os.system("Pause")
