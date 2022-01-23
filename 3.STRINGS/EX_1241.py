qtd = int(input())

for i in range(0,qtd):
    a,b = input().split()
    a = str(a)
    b = str(b)
    la = len(a)
    lb = len(b)
    if la < lb:
        print('nao encaixa')
    elif la > lb:
        aux = lb
        aux1 = la - lb
        if(a[aux1:] == b):
            print('encaixa')
        else:
            print('nao encaixa')
    else:
        if( a == b):
            print('encaixa')
        else:
            print('nao encaixa')