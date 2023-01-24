import os

print("\nEste programa calcula o valor de um delta, e determina quantas raizes ele possui.")
a = float(input("\n\nDigite o valor de a: "))
b = float(input("\n\nDigite o valor de b: "))
c = float(input("\n\nDigite o valor de c: "))
delta = (b * b) - ((4 * a) * c)
if delta < 0:
    print("\n\nO valor do delta e igual a ",delta,", e ele nao possui raizes!")

elif delta == 0:
    print("\n\nO valor do delta e igual a ",delta,", e ele possui somente uma raiz!")

elif delta > 0:
    print("\n\nO valor do delta e igual a ",delta,", e ele possui duas raizes!")

print("\n\nObrigado por utilizar nosso sistema!")
os.system ("pause")
          
