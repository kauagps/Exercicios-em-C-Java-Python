import os

print("\nEste programa determina a quantidade de espulma necessario para proteger n luminarias.")
n = int(input("\nDigite a quantidade de luminarias a qual voce deseja protejer: "))
areaBc = float(input("\nDigite o valor da area da base do cilindro: "))
h = float(input("\nDigite o valor da altura do cilindro: "))
com = float(input("\nDigite o valor do comprimento da caixa: "))
alt = float(input("\nDigite o valor da altura da caixa: "))
lar = float(input("\nDigite o valor da largura da caixa: "))
volumeCi = int(areaBc * h)
volumeCa = int((com * alt) * lar)
if volumeCi > volumeCa:
        print("\n\nA caixa nao suporta o tamanho da luminaria!")

else:
        volEspuma = int((volumeCa - volumeCi) * n)
        print("\nO volume necessario de espuma e de: ", volEspuma)
        
print("\nObrigado por utilizar nosso sistema!")
os.system("pause")
