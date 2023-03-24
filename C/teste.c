#include <stdio.h>

void fizzBuzz(int n);

int main()
{
    int n;
    scanf("%d",&n);
    fizzBuzz(n);
}

void fizzBuzz(int n)
{
    int i;
    for(i = 1; i <= n; i++)
    {
        if (i % 3 == 0 && i % 5 == 0)
        {
            printf("FizzBuzz\n");
        }
        else if (i % 3 == 0 && i % 5 != 0)
        {
            printf("Fizz\n");
        }
        else if (i % 5 == 0 && i % 3 != 0)
        {
            printf("Buzz\n");
        }
        else if (i % 3 != 0 || i % 5 != 0)
        {
            printf("%d\n",i);
        }
    }
}