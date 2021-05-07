 #include <stdio.h>
// Recurssion
int fac(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    else
    {
        return n * fac(n - 1);
    }
}
// Iterative approach
// int fac(int n)
// {
//     int val = 1;
//     for (int i = n; i >= 1; i--)
//     {
//         val = val * i;
//     }
//     printf("The factorial of the number is %d", val);
    
// }

int main()
{
    int n;
    printf("Enter the number:");
    scanf("%d", &n);
    int factorial = fac(n);

    printf("The factorial of the number is %d", factorial);

    return 0;
}