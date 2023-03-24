def miniMaxSum(lista):
    total = sum(lista)
    somas = [total - num for num in lista]
    min_soma = min(somas)
    max_soma = max(somas)
    print(f'{min_soma} {max_soma}')


lista = list(map(int, input().rstrip().split()))
miniMaxSum(lista)
