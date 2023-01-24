import os

print ("\n\nEste programa verifica se três números formam um triângulo!")

A = float(input("\n\nDigite o primeiro número: "))
B = float(input("\n\nDigite o segundo número: "))
C = float(input("\n\nDigite o terceiro número: "))

if ((A < B + C) and (B < A + C) and (C < A + B)):
    print ("\n\nOs três números formam um triângulo!")
    if (A == B and A == C and B == C):
        print ("\n\nTemos um triângulo equilátero!")
    elif (A == B or B == C or A == C):
        print ("\n\nTemos um triângulo isósceles!")
    elif (A != B and A != C and B != C):
        print ("\n\nTemos um triângulo escaleno!")
else:
    print ("\n\nOs três números não formam um triângulo!")

print ("\n\nObrigado por utilizar nosso sistema!")
os.system ("Pause")
