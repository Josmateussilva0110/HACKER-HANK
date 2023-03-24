def staircase(n):
    copy = n
    for i in range(n):
        cont = 0
        flag = 0
        while cont <= i:
            while flag < copy:
                print(' ',end='')
                flag+= 1
            print('#',end='')
            cont+= 1
        print()
        copy-= 1


n = int(input())
staircase(n)
