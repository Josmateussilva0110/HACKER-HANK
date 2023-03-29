#include <stdio.h>

int cont_pares(int *vet, int tam, int k);

int main()
{
    int qnt, valor, i;
    scanf("%d%d",&qnt,&valor);
    int vet[qnt], result;
    for(i = 0; i < qnt; i++)
    {
        scanf("%d",&vet[i]);
    }
    result = cont_pares(vet, qnt, valor);
    printf("%d\n",result);
}
int cont_pares(int *vet, int tam, int k)
{
    int i, cont = 0, flag;
    int vetor[k], complemento;
    for(i = 0; i < k; i++)
    {
        vetor[i] = 0;
    }
    for(i = 0; i < tam; i++)
    {
        flag = vet[i] % k;
        complemento = (k - flag) % k;
        cont += vetor[complemento];
        vetor[flag]++;
    }
    return cont;
}