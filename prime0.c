#include <stdio.h>

int main (void)
{
    int i, j, prime;

    for (i = 2; i <= 200; i++)
    {
        prime = 1;
        for (j = 2; j < i; j++)
        {
            if (i % j == 0)
                prime = 0;
                break;
        }
        if(prime)
        {
            printf("%d\t", i);
        }
    }
}