import os
print("\n\nEste programa calcula o numero de alunos assima da media.");
n = int(input("\n\nDigite a quantidade de alunos: "))
i = 1
media = 0
while i <= n:
        print("\nDigite a nota do ",i," aluno:")
        nota = int(input(" "))
        if nota >= 7:
                media = media + 1
        i = i + 1

print("\n\nA sala de aula com ",n," alunos, teve ",media," alunos com a nota assima da media.")
print("\n\nObrigado por utilizar nosso programa!")
os.system("pause")
