def birthdayCakeCandles(candles):
    maior = max(candles)
    cont = 0
    for i in candles:
        if i == maior:
            cont+= 1
    return cont


if __name__ == '__main__':
    candles = list(map(int, input().rstrip().split()))
    result = birthdayCakeCandles(candles)
    print(result)
