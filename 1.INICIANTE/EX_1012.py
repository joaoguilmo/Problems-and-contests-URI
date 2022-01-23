a,b,c = input().split()
A = float(a)
B = float(b)
C = float(c)
tri = A*C/2
cir = 3.14159*C**2
trap = (A*C +B*C)/2
qua = B**2
ret = A*B
print(f'TRIANGULO: {tri:.3f}')
print(f'CIRCULO: {cir:.3f}')
print(f'TRAPEZIO: {trap:.3f}')
print(f'QUADRADO: {qua:.3f}')
print(f'RETANGULO: {ret:.3f}')