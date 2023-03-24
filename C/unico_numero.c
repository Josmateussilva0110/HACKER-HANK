#include <stdio.h>

int unico_elemento(int *v, int tam);

int main()
{
    int qnd, i, result;
    scanf("%d",&qnd);
    int vet[qnd];
    for(i = 0; i < qnd; i++)
    {
        scanf("%d",&vet[i]);
    }
    result = unico_elemento(vet, qnd);
    printf("%d\n",result);
}

int unico_elemento(int *v, int tam)
{
    int i, j;
    int vet[tam], menor, valor;
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
    menor = vet[0];
    valor = v[0];
    for(i = 0; i < tam; i++)
    {
        if(vet[i] < menor)
        {
            valor = v[i];
        }
    }
    return valor;
}