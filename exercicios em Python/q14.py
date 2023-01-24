import os

print("\nEste programa calssifica um pessoa de acordo com o seu respectivo IMC!")
peso = int(input("\nDigite o seu peso atual: "))
if 16 > peso:
    print("\n\nA massa dessa pessoa e de alguem com magresa estrema!!!")
    print("\n\nObrigado por utilizar nosso programa, e busque tratamento urgente!!!")

elif peso == 16 & peso < 17:
    print("\n\nEssa pessoa esta em um estado de magresa moderada.")
    print("\n\nObrigado por utilizar nosso programa, busque melhorar sua saude mais um pouco.")
    
elif peso == 17 & peso < 18:
    print("\n\nEssa pessoa esta com magresa leve.")
    print("\n\nObrigado por utilizar nosso programa, esta quase la melhore um pouquinho mais sua alimentacao.")

elif peso == 18 & peso < 25:
    print("\n\nEssa pessoa esta saudavel.")
    print("\n\nObrigado por utilizar nosso programa, parabens continue com sua saude dessa forma.")
	    
elif peso == 25 & peso < 30:
    print("\n\nEssa pessoa esta com sobre peso.")
    print("\n\nObrigado por utilizar nosso programa, busque melhorar alimentacao antes que seja tarde.")
			
elif peso == 30 & peso < 35:
    print("\n\nEssa pessoa esta com obesidade gral 1.")
    print("\n\nObrigado por utilizar nosso programa, melhore sua alimentacao pois e perigoso.")
			
elif peso == 35 & peso < 40:
    print("\n\nEssa pessoa esta com obesidade gral 2. (SEVERA)!")
    print("\n\nObrigado por utilizar nosso programa, melhore o quanto antes sua alimentacao pois e grave!")
			
elif peso > 40:
    print("\n\nEssa pessoa esta com obesidade gral 3. (MORBIDA)!!!")
    print("\n\nObrigado por utilizar nosso programa, busque tratamento urgente pois sua situacao e grave!!!")
			
os.system ("pause")          
