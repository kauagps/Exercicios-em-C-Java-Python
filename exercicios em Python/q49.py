import os

n = int(input("\nEste programa soma diferentes valores de volume de cubo, cilindro, e paralelepipedo.\nDigite a quantidade de tanques que deseja somar os valores volume desejada:"))
i = 1
soma = 0
volume = 0
while i <= n:
        print("\n\t\t",i," tanque")
        op = int(input("\n\nMenu:\n1. Cubo.\n2. Paralelepipedo.\n3. Cilindro.\nDigite a opcao a qual deseja somar o volume: "))
        if op == 1:
                aresta = float(input("\n\t\tVoce escolheu Cubo!\nDigite o valor da aresta do cubo: "))
                volume = int(aresta * aresta * aresta)

        elif op == 2:
                print("\n\t\tVoce escolheu Paralelepipedo!")
                base = float(input("\nDigite o valor da base: "))
                altura = float(input("\nDigite o valor da altura: "))
                volume = int(altura * base)
	
        elif op == 3:
                print("\n\n\t\tVoce escolheu cilindro!")
                raio = float(input("\nDigite o valor do raio: "))
                h = float(input("\nDigite o valor da altura: "))
                volume = int(3.14 * (raio * raio) * h)
	
        else:
                print("\n\nOpcao invalida!!!")
                break;

        soma = soma + volume;
        i = i + 1
        
print("\n\nA soma total dos volumes e: ", soma)
print("\nObrigado por utilizar nosso sistema!")
os.system("pause")
