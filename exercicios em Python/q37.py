import os
print("\nEste programa calcula o volume de diferentes tanques, de diferentes formato, e soma todos!")
n = int(input("\nDigite o numero de unidade de tanque que ira somar o volume: "))
i = 1
volume = 0
soma = 0
while i <= n:
        print("\nMenu\n1.Cubo\n2.Paralelepipedo\n3.Cilindro\n4.Cone.")
        op = int(input("\nAgora digite o numero da opçao desejada: "))
        if op == 1:
                print("\n\t\tCubo!")
                aresta = float(input("\nDigite o valor da aresta do cubo: "))
                volume = int (aresta * aresta *aresta)
        
        elif op == 2:
                print("\n\t\tParalelepipedo!")
                areaB = float(input("\nDigite o valor da area da base: "))
                h = float(input("\nDigite o valor da altura: "))
                volume = int (areaB * h)

        elif op == 3:
                print("\n\t\tCilindro!")
                raio = float(input("\nDigite o valor do raio: "))
                h = float(input("\nDigite o valor da altura: "))
                volume = int(3.14 * (raio * raio) * h)

        elif op == 4:
                print("\n\t\tCone!")
                raio = float(input("\nDigite o valor do raio: "))
                h = float(input("\nDigite o valor da altura: "))
                volume = int((3.14 * ((raio * raio) * h)) / 3)

        else:
                print("\n\t\tOpçao invalida!")
                break

        soma = int(soma + volume)
        i = i + 1

print("\nO valor total da soma e de ",soma)
print("\nObigado por utilizar nosso sistema!")
os.system("pause")
