def bonAppetit(bill, k, b):
    for i in range(len(bill)):
        if i == k:
            bill[i] = 0
    soma = sum(bill)
    divisao = soma / 2
    if b > divisao:
        desconto = b - divisao
        print(f'{desconto:.0f}')
    if b == divisao:
        print('Bon Appetit')

if __name__ == '__main__':
    first_multiple_input = input().rstrip().split()
    n = int(first_multiple_input[0])
    k = int(first_multiple_input[1])
    bill = list(map(int, input().rstrip().split()))
    b = int(input().strip())
    bonAppetit(bill, k, b)
