import os

print ("\n\nEste programa determina a velocidade média de um móvel!")

espaco = float(input("\n\nDigite o espaço percorrido (km): "))
tempo = float(input("\n\nDigite o tempo gasto no deslocamento(h): "))

velMedia = espaco / tempo
print ("\n\nA velocidade média do móvel é de", velMedia, "km/h!")

print ("\n\nObrigado por utilizar nosso sistema!")
os.system ("Pause")
