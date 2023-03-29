def cats_and_mouse(x, y, z):
    a = x - z
    if a < 0:
        a *= (-1)
    b = y - z
    if b < 0:
        b *= (-1)
    if a < b:
        print('Cat A')
    elif b < a:
        print('Cat B')
    else:
        print('Mouse C')


qnt = int(input())
for _ in range(qnt):
    x, y, z = input().split()
    x = int(x)
    y = int(y)
    z = int(z)
    cats_and_mouse(x, y, z)
