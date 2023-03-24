def somar(arr):
    soma = 0
    for i in arr:
        soma += i
    return soma


lista = list(map(int, input().rstrip().split()))
result = somar(lista)
print(result)
