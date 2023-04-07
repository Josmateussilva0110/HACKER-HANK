#include <stdio.h>

void bonAppetit(int bill_count, int *bill, int k, int b);

int main()
{
    int qnt, k, i, b;
    scanf("%d %d",&qnt, &k);
    int vet[qnt];
    for(i = 0; i < qnt; i++)
    {
        scanf("%d",&vet[i]);
    }
    scanf("%d",&b);
    bonAppetit(qnt, vet, k, b);
}
void bonAppetit(int bill_count, int *bill, int k, int b)
{
    int i, soma = 0, divisao, desconto;
    for(i = 0; i < bill_count; i++)
    {
        if(i == k)
            bill[i] = 0;
    }
    for(i = 0; i < bill_count; i++)
    {
        soma += bill[i];
    }
    divisao = soma / 2;
    if(b > divisao)
    {
        desconto = b - divisao;
        printf("%d\n",desconto);
    }
    if(b == divisao)
        printf("Bon Appetit\n");
}