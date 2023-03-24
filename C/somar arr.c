#include <stdio.h>

long int aVeryBigSum(int ar_count, long* ar);

int main()
{
    int tam, i;
    scanf("%d",&tam);
    long int arr[tam], result;
    for(i = 0; i < tam; i++)
    {
        scanf("%ld",&arr[i]);
    }
    result = aVeryBigSum(tam, arr);
    printf("%ld\n",result);
}
long int aVeryBigSum(int ar_count, long* ar) 
{
    int i;
    long int soma = 0.0;
    for(i = 0; i < ar_count; i++)
    {
        soma += ar[i];
    }
    return soma;
}