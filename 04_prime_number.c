#include <stdio.h>

int main()
{

    int i, n;

    printf("Enter the number\n");

    scanf("%d", &n);

    for (i = 2; i < n; i++)
    {
        if (n % i == 0 || n==0)
        {
            printf("%d is not a prime number\n", n);
            break;
        }
    }
        if (i == n)
        {
             printf("%d is a prime number\n", n);
        }

        return 0;
    }