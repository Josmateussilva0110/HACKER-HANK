def breakingRecords(scores):
    contmax = contmin = 0
    maxi = mini = scores[0]
    for i in range(1,len(scores)):
        if scores[i] < mini:
            mini = scores[i]
            contmin += 1
        if scores[i] > maxi:
            maxi = scores[i]
            contmax += 1
    print(f'{contmax} {contmin}')


scores = list(map(int, input().rstrip().split()))
breakingRecords(scores)
