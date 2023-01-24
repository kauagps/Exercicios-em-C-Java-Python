import os
print("\n\nEste progrma determina se tres atomos sao isobaros, isotonos ou isotopos.")
a1 = int(input("\n\nDigite o numero de protons do primeiro atomo: "))
a2 = int(input("\nDigite o numero de protons do segundo atomo: "))
a3 = int(input("\nDigite o numero de protons do terceiro atomo: "))
	
b1 = int(input("\n\nDigite o numero de massa do primeiro atomo: "))
b2 = int(input("\nDigite o numero de massa do segundo atomo: "))
b3 = int(input("\nDigite o numero de massa do terceiro atomo: "))
	
c1 = int(input("\n\nDigite o numero de neutrons do primeiro atomo: "))
c2 = int(input("\nDigite o numero de neutrons do segundo atomo: "))
c3 = int(input("\nDigite o numero de neutrons do terceiro atomo: "))
	
if a1 == b1 & a1 == c1:
        print("\n\nOs tres atomos sao isotonos!")
        
elif a1 == b1 & b1 != c1:
        print("\n\nSomente o primeiro e segundo atomos sao isotanos!")
        
elif c1 == b1 & c1 != a1:
        print("\n\nSomente o segundo e o terceiro atomo sao isotanos!")

else:
        print("\n\nNenum dos atomos sao isotanos!")

if a2 == b2 & a2  == c2:
        print("\nOs tres atomos sao isobaros!")
        
elif a2 == b2 & a2 != c2:
        print("\nSomente o primeiro e segundo atomos sao isobaros!")
        
elif c2 == b2 & c2 != a2:
        print("\nSomente o segundo e o terceiro atomo sao isobaros!")

else:
        print("\n\nNenum dos atomos sao isobaros!")

if a3 == b3 & a3 == c3:
        print("\nOs tres atomos sao isotopos!")
        
elif a3 == b3 & a3 != c3:
        print("\nSomente o primeiro e segundo atomos sao isotopos!")

elif c3 == b3 & c3 != a3:
        print("\nSomente o segundo e o terceiro atomo sao isotopos!")

else:
        print("\nNenum dos atomos sao isotopos!")

print("\n\nObrigado por utilizar nosso programa.")
os.system("pause")
