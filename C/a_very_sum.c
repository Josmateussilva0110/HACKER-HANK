#include <stdio.h>

int main()
{
    long int soma = 0;
    int qnt, i;
    scanf("%d",&qnt);
    long int vet[10000];
    for(i = 0; i < qnt; i++)
    {
        scanf("%ld",&vet[i]);
    }

    for(i = 0; i < qnt; i++)
    {
        soma += vet[i];
    }
    printf("%ld\n",soma);
}