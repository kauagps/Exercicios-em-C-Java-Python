import os

print("\nEste programa determina se tres numeros formam um triangulo, e classifica-o!")
A = int(input("\n\nDigigite o valor da primeira aresta: "))
B = int(input("\nagora o valor da segundo aresta: "))
C = int(input("\ne por ultimo o valor da terceiro aresta: "))
if ((A < B + C) & (B < A + C) & (C < A + B)):
    print("\n\nOs três números formam um triângulo!")
        
if ((A == B) & (A == C) & (B == C)):
    print("\nTemos um triângulo equilátero!")
    
elif ((A == B) | (A == C) | (B == C)): 
    print("\nTemos um triângulo isósceles!")
    
elif ((A != B) & (A != C) & (B != C)):
    print("\nTemos um triângulo escaleno!")

if ((A * A == ((B * B) + (C * C))) | (B * B == (( A * A ) + (C * C))) | (C * C == ((A * A) + (B * B)))):
    print("\nE os valores digitados formam um triangulo retangulo!")

elif((A * A > (B * B) + (C * C)) | (B * B > ( A * A ) + (C * C)) | (C * C > (A * A) + (B * B))):
    print("\nE os valores digitados formam um triangulo obtusangulo!")

elif((A * A < (B * B) + (C * C)) | (B * B < ( A * A ) + (C * C)) | (C * C < (A * A) + (B * B))):
    print("\nE os valores digitados formam um triangulo acutangulo")

else:
    print("\n\nOs três números não formam triângulo!")

print("\n\nObrigado por utilizar nosso sistema!")
os.system ("pause")
