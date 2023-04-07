#include <stdio.h>
#include <stdlib.h>

int diagonalDifference(int tam, int mat[][tam]);

int main()
{
    int tamanho, i, j, result;
    scanf("%d",&tamanho);
    int mat[tamanho][tamanho];
    for(i = 0; i < tamanho; i++)
    {
        for(j = 0; j < tamanho; j++)
        {
            scanf("%d",&mat[i][j]);
        }
    }
    result = diagonalDifference(tamanho, mat);
    printf("%d\n",result);
}
int diagonalDifference(int tam, int mat[][tam])
{
    int i, j, soma_p = 0, soma_s = 0;
    int total;
    for(i = 0; i < tam; i++)
    {
        for(j = 0; j < tam; j++)
        {
            if(i == j)
                soma_p += mat[i][j];
        }
    }
    for(i = 0, j = tam -1; i < tam; i++, j--)
    {
        soma_s += mat[i][j];
    }
    total = abs(soma_p - soma_s);
    return total;
}