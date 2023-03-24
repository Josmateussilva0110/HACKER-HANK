#include <stdio.h>

int main()
{
    int qnt, i, cont, flag, copy;
    scanf("%d",&qnt);
    copy = qnt;
    for(i = 0; i < qnt; i++)
    {
        flag = 0;
        cont = 0;
        while(cont <= i)
        {
            while(flag < copy)
            {
                printf(" ");
                flag++;
            }
            printf("#");
            cont++;
        }
        printf("\n");
        copy--;
    }
}