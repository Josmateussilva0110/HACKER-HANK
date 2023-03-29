#include <stdio.h>
#include <math.h>
#include <stdlib.h>

void catAndMouse(int x, int y, int z);

int main()
{
    int qnt, x, y, z, i;
    scanf("%d",&qnt);
    for(i = 0; i < qnt; i++)
    {
        scanf("%d%d%d",&x,&y,&z);
        catAndMouse(x, y, z);
    }
}
void catAndMouse(int x, int y, int z)
{
    int a, b;
    a = abs(x - z);
    b = abs(y - z);
    if(a < b)
        printf("Cat A\n");
    else if(b < a)
        printf("Cat B\n");
    else
        printf("Mouse C\n");
} 