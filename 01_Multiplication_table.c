#include <stdio.h>

int main()
{
    int num;
    printf("Enter the value of numer whose multiplication is to be printed\n");

    scanf("%d", &num);

    printf("The multiplication table of %d is\n ", num);

    for (int i = 0; i < 10; i++)
    {
        printf("%d X %d = %d\n", num, i + 1, (i + 1) * num);
    }

    return 0;
}