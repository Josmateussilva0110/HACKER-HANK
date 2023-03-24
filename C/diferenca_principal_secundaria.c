#include <stdio.h>
#include <math.h>

int diagonalDifference(int arr_rows, int arr[][arr_rows]);

int main()
{
    int tam, i, j, result;
    scanf("%d",&tam);
    int mat[tam][tam];
    for(i = 0; i < tam; i++)
    {
        for(j = 0; j < tam; j++)
        {
            scanf("%d",&mat[i][j]);
        }
    }
    result = diagonalDifference(tam, mat);
    printf("%d\n",result);
}
int diagonalDifference(int arr_rows, int arr[][arr_rows]) 
{
    int i, j, soma_p = 0, soma_s = 0, diferenca;
    for(i = 0; i < arr_rows; i++)
    {
        for(j = 0; j < arr_rows; j++)
        {
            if(i == j)
                soma_p += arr[i][j];
        }
    }
    for(i = 0, j = arr_rows -1; i < arr_rows; i++, j--)
    {
        soma_s += arr[i][j];
    }

    diferenca = abs(soma_p - soma_s);

    return diferenca;
}