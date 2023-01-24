import os

print("\n\nEste programa ler a nota individual de n alunos e determina a nota máxima, a nota mínima, a média da turma, a quantidade de notas maiores do que a média e a quantidade de notas inferiores ao valor da média, e quantos alunos foram aprovados!")
n = int(input("\nDigite a quantidade de alunos pertencente a sala: "))
i = 1
media = 0
rep = 0
apr = 0
mm = 0
mM = 0
while i <= n:
        print("\nDigite a nota do ",i," aluno:")
        nota = int(input(""))
        media = media + nota
        if i == 1:
                notamx = nota
                notamn = nota
                
        elif notamx < nota:
                notamx = nota

        elif notamn > nota:
                notamn = nota

        if nota < 7:
                rep = rep + 1

        elif nota >= 7:
                apr = apr + 1

        i = i + 1

print("\nAgora porfavor digite as notas do aluno novamente")
media = media / n
i = 1
while i <= n:
        print("\nDigite a nota do ",i," aluno:")
        nota = int(input(""))
        if nota < media:
                mm = mm + 1

        elif nota >= media:
                mM = mM + 1

        i = i + 1

print("\nA nota maxima foi ",notamx," e a nota minima ",notamn,". A media da turma foi ",media,", a quantidade de alunos assima da media da turma foi de ",mM," e a quantidade de menores foi ",mm,". E por fim a quantidade de alunos aprovados foram de ",apr," e de reprovados de ",rep,".")
print("\nObrigado por utilizar nosso sistema!")
os.system("pause")
