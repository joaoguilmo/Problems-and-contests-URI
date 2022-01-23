while True:
    try:
        a = str(input())
        l = len(a)
        count = 0
        m = " "
        for i in range(0, l):
            x = str(a[i])
            if x.isspace():
                print(m, end='')
            elif (count%2) == 0:
                string = a[i]
                print(string.upper(), end='')

                if not a[i].isnumeric():
                    count += 1
            else:
                string = a[i]
                print(string.lower(), end='')

                if not a[i].isnumeric():
                    count += 1
        if i == l-1:
            print()
    except EOFError:
        break
