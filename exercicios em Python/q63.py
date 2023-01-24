import os

print("\nEste programa determina o quadrante de pertencimente no plano cartesiano de um numero x, e y. ")
x = int(input("\n\nDigite o valor de x: "))
y = int(input("\nDigite o valor de y: "))
if (x > 0) & (y > 0):
        print("\n\nOs valores digitados x e y (",x,", ",y,") sao do primeiro quadrante.")

elif (x < 0) & (y > 0):
        print("\n\nOs valores digitados x e y (",x,", ",y,") sao do segundo quadrante.")

elif (x < 0) & (y < 0):
        print("\n\nOs valores digitados x e y (",x,", ",y,") sao do terceiro quadrante.")

elif (x > 0) & (y < 0):
        print("\n\nOs valores digitados x e y (",x,", ",y,") sao do quarto quadrante.")

else:
        print("\n\nOs dois numero estao em ponto de origem!")

print("\n\nObrigado por utilizar nosso sistema!")
os.system("pause")
