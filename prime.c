#include <stdio.h>
int main(void)
{
    int num, count, i, prime;

    for (num = 2; num <= 10000; num++)
    {
        prime = 1;
        for (i = 2; i < num; i++)
        {
            if (num % i == 0)
            {
                prime = 0;
                break;
            }
        }
        if(prime)
        {
            printf("%d\t", num);
        }
    }      
}