import os

print ("\n\nEste programa imprime n termos positivos!")

n = int(input("\n\nDigite o valor de n: "))

if (n < 0):
    print ("\n\nDigite um valor válido!")
else:
    for i in range (0, n): #primeiro parâmetro fixa um valor
        print (i, end = ' ')

print ("\n\nObrigado por utilizar nosso sistema!")
os.system ("Pause")
