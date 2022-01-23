import re

while True:
    try:
        a = str(input())
        b = str(input())
        maior = 0
        for x in range(0,len(a)-1):
            x1 = x
            for x2 in range(0,len(a)-1):
                aux = b[x1:len(a)-x2]
                if re.search(aux, a):
                    if len(aux) > maior:
                        maior = len(aux)
                    continue
        print(maior)
    except EOFError:
        break