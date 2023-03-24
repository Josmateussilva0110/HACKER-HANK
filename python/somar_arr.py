def aVeryBigSum(ar):
    soma = sum(ar)
    return soma

if __name__ == '__main__':
    va = list()
    q = int(input())
    for i in range(q):
        n = int(input())
        va.append(n)
    result = aVeryBigSum(va)
    print(result)
