def plusMinus(arr):
    positivos = negativos = zero = 0
    for i in arr:
        if i > 0:
            positivos += 1
        if i < 0:
            negativos += 1
        if i == 0:
            zero += 1
    div_posi = positivos / len(arr)
    div_negativos = negativos / len(arr)
    div_zero = zero / len(arr)
    print(f'{div_posi:.6f}')
    print(f'{div_negativos:.6f}')
    print(f'{div_zero:.6f}')


lista = list()
tam = int(input())
for _ in range(tam):
    lista.append(int(input()))
plusMinus(lista)
