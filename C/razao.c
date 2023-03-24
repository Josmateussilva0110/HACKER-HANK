#include <stdio.h>

void plusMinus(int *arr, int t);

int main()
{
    int tam, i;
    scanf("%d",&tam);
    int vet[tam];
    for(i = 0; i < tam; i++)
    {
        scanf("%d",&vet[i]);
    }
    plusMinus(vet, tam);
}

void plusMinus(int *arr, int t)
{
    int i, positivos = 0, negativos = 0, zero = 0;
    double div_posi, div_nega, div_zero;
    for(i = 0; i < t; i++)
    {
        if(arr[i] < 0)
            negativos++;
        if(arr[i] > 0)
            positivos++;
        if(arr[i] == 0)
            zero++;
    }
    div_posi = (double) positivos / t;
    div_nega = (double) negativos / t;
    div_zero = (double) zero / t;
    printf("%.6f\n",div_posi);
    printf("%.6f\n",div_nega);
    printf("%.6f\n",div_zero);
}