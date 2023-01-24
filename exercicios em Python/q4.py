import os

print("\nEste programa converte o real em uma de 4 moedas diferentes!")
print("\nmenu")
print("\n1.Dolar.")
print("\n2.Euro")
print("\n3.Libras Esterlinas.")
print("\n4.Renminbi.")
op = int(input("\nDigite a opçao desejada: "))

if op == 1:
    print("\nVoce escolheu o dolar!")
    real = float(input("\nDigite o valor em reais a qual voce deseja converter: "))
    conversao = float(real / 3.90)
    print("\n",real," reais vale ",conversao,"Dolares.")


elif op == 2:
    print("\nVoce escolheu o Euro!")
    real = float(input("\nDigite o valor em reais a qual voce deseja converter: "))
    conversao = float(real / 4.38)
    print("\n",real," reais vale ",conversao,"Euros.")

elif op == 3:
    print("\nVoce escolheu as Libras Esterlinas!")
    real = float(input("\nDigite o valor em reais a qual voce deseja converter: "))
    conversao = float(real / 5.10)
    print("\n",real," reais vale ",conversao,"Libras esterlinas.")

elif op == 4:
    print("\nVoce escolheu o Renminbi!")
    real = float(input("\nDigite o valor em reais a qual voce deseja converter: "))
    conversao = float(real / 0.58)
    print("\n",real," reais vale ",conversao,"Renminbis.")

print("\nObrigado por utilizar nosso sistema!")
os.system ("pause")
