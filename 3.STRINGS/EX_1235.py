qtd = int(input())
for i in range(0,qtd):
    x = str(input())
    l = len(x)
    metade = int((l)/2)
    a = x[:metade]
    b = x[metade:]
    print(''.join(reversed(a)) + ''.join(reversed(b)))