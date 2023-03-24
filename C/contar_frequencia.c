#include <stdio.h>

void unico_elemento(int *v, int tam);

int main()
{
    int qnd, i;
    scanf("%d",&qnd);
    int vet[qnd];
    for(i = 0; i < qnd; i++)
    {
        scanf("%d",&vet[i]);
    }
    unico_elemento(vet, qnd);
}

void unico_elemento(int *v, int tam)
{
    int i, j;
    int vet[tam];
    for(i = 0; i < tam; i++)
    {
        vet[i] = 0;
    }
    for(i = 0; i < tam; i++)
    {
        for(j = 0; j < tam; j++)
        {
            if(v[i] == v[j])
                vet[i] += 1;
        }
    }
    for(i = 0; i < tam; i++)
    {
        printf("%d ",vet[i]);
    }
}