flag2 = True
flag = False
while flag2 == True:
    flag3 = False
    if flag == True:
        print()
        flag = False
    else:
        a, b = input().split()
        b = str(b)
        a = str(a)
        a_int = int(a)
        if (a == b) and (a_int == 0):

            flag2 = False
            break

        tamanho = len(b)
        for i in range(0,tamanho):
            s = b.replace(a, '0')
            b_int = int(s)
            if b_int == 0:
                print(0)
                break

            elif ((b[i] != a) and ( (b[i] != '0') or (flag3 == True))):
                print(b[i], end='')
                flag3 = True
                flag = True

