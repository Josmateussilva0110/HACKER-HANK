def extraLongFactorials(n):
    fat = 1
    for i in range(n, 0, -1):
        fat *= i
    return fat


n = int(input())
result = extraLongFactorials(n)
print(result)
