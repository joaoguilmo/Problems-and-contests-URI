nome = str(input())
salario_base = float(input())
vendas = float(input())

salario_final = salario_base+0.15*vendas
print(f'TOTAL = R$ {salario_final:.2f}')