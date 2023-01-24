import os

print ("\n\nEste programa imprime a Série de Fibonacci até um termo n!")

n = int(input("\n\nDigite a quantidade de termos da Série para impressão: "))

if (n <= 0):
    print ("\n\nNão é possível imprimir nenhum termo da Série de Fibonacci!")
elif (n == 1):
    print ("\n\nSérie de Fibonacci: 1 ")
elif (n == 2):
    print ("\n\nSérie de Fibonacci: 1 1 ")
elif (n > 2):
    termo1 = 1
    termo2 = 1
    novoTermo = 0
    print ("\n\nSérie de Fibonacci:")
    print (termo1)
    print (termo1)
    i = 3
    while (i <= n):
        novoTermo = termo1 + termo2
        print (novoTermo)
        termo1 = termo2
        termo2 = novoTermo
        i = i + 1

print ("\n\nObrigado por utilizar nosso sistema!")
os.system ("Pause")
