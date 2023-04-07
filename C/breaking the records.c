#include <stdio.h>

void breakingRecords(int scores_count, int *scores);

int main()
{
    int qnt, i;
    scanf("%d",&qnt);
    int scores[qnt];
    for(i = 0; i < qnt; i++)
    {
        scanf("%d",&scores[i]);
    }
    breakingRecords(qnt, scores);
}

void breakingRecords(int scores_count, int *scores)
{
    int i, contmax = 0, contmin = 0;
    int max = scores[0], min = scores[0];
    for(i = 1; i < scores_count; i++)
    {
        if(scores[i] < min)
        {
            min = scores[i];
            contmin++;
        }
        if(scores[i] > max)
        {
            max = scores[i];
            contmax++;
        }
    }
    printf("%d %d\n",contmax, contmin);
}
