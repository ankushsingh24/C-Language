#include <stdio.h>

int main()
{
    int n;
    printf("Enter the number: \n");
    scanf("%d", &n);
    int count = 0;
    if (n == 0)
    {
        printf("There is only 1 digit in your number");
    }
    else
    {
        while (n != 0)
        {
            n = n / 10;
            count++;
        }
        printf("No of digits is %d", count);
    }
    return 0;
}