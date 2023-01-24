import os

print("\nEste programa realiza a soma de volume de diferentes tanques.")
n = int(input("\nDigite a quantidade de tanques que deseja somar os valores volume desejados: "))
i = 1
volume = 0
semelhanteCu = 0
smlP = 0
smlCi = 0
smlCo = 0
smlPi = 0
soma = 0
while i <= n:
        op = int(input("\nMenu:\n1. Cubo.\n2. Paralelepipedo.\n3. Cilindro.\n4. Cone.\n5. Piramide.\nDigite a opcao a qual deseja somar o volume: "))
        if op == 1:
                print("\n\n\n\t\tVoce escolheu Cubo!")
                aresta = float(input("\nDigite o valor da aresta do cubo: "))
                volume = int(aresta * aresta *aresta)
                semelhanteCu = int(semelhanteCu + volume)

        elif op == 2:
                print("\n\n\n\t\tVoce escolheu Paralelepipedo!")
                areaB = float(input("\nDigite o valor da base: "))
                altura = float(input("\nDigite o valor da altura: "))
                volume = int(areaB * altura)
                smlP = int(smlP + volume)
	
        elif op == 3:
                print("\n\n\n\t\tVoce escolheu cilindro!")
                raio = float(input("\nDigite o valor do raio: "))
                h = float(input("\nDigite o valor da altura: "))
                volume = int(3.14 * (raio * raio) * h)
                smlCi = int(smlCi + volume)
	
        elif op == 4:
                print("\n\n\n\t\tVoce escolheu Cone!")
                raio = float(input("\nDigite o valor do raio: "))
                h = float(input("\nDigite o valor da altura: "))
                volume = int((3.14 * ((raio * raio) * h)) / 3)
                smlCo = int(smlCo + volume)
			
        elif op == 5:
                print("\n\n\n\t\tVoce escolheu Piramide!")
                base = float(input("\nDigite o valor da area da base da piramide: "))
                h = float(input("\nDigite o valor da altura: "))
                volume = int(base * h / 3)
                smlPi = int(smlPi + volume)
			
        else:
                print("\n\nOpcao invalida!!!")
                break;

        print("\nO ",i," tem o valor de: ",volume)
        soma = int(soma + volume)
        i = i + 1

print("\n\n\nA soma total dos volumes e: ",soma)
if semelhanteCu > 0:
        print("\nO valor dos semelhantes cubo e: ", semelhanteCu)
                
elif smlP > 0:
        print("\nO valor dos semelhantes paralelepipedo e: ", smlP)

elif smlCi > 0:
        print("\nO valor dos semelhantes cilindro e: ", smlCi)

elif smlCo > 0:
        print("\nO valor dos semelhantes Cone e: ", smlCo)

elif smlPi > 0:
        print("\nO valor dos semelhantes Piramide e: ", smlPi)

print("\n\nObrigado por utilizar nosso sistema!")
os.system("pause")
