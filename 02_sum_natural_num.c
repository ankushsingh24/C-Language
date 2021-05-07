#include <stdio.h>
int main()
{
    int n;
    int sum = 0;

    printf("Enter the last natural number you want the sum of\n");

    scanf("%d", &n);

    // for (int i = 0; i <= n; i++)
    // {
    //     sum = sum + i;
    // }

    sum = (n*n + n)/2 ;

    printf("The sum of %d is =  %d", n, sum);

    return 0;
}