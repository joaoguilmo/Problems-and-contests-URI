qtd = int(input())

for x4 in range(1,qtd+1):
    a,b = input().split()
    a = str(a)
    b = str(b)
    la = len(a)
    lb = len(b)
    if la <= lb:
        aux = la
        aux2 = b[la:]
    else:
        aux = lb
        aux2 = a[lb:]
    for x in range(0,aux):
        c = a[x]+b[x]
        print(c, end='')
    print(aux2)
