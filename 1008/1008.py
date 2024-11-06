idFuncionario = int(input())
horasTrabalhadas = int(input())
salarioHoras = float(input())

salarioHoras *= horasTrabalhadas

print("NUMBER =", idFuncionario)
print(f"SALARY = U$ {salarioHoras:.2f}")