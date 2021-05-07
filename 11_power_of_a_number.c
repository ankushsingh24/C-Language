#include<stdio.h>

int main(){
    int a,b,c =1;
    printf("Enter the number :\n");
    scanf("%d", &a);

    printf("Enter the power :\n");
    scanf("%d", &b);

    for (int i = 1; i <= b; i++)
    {
        c = c * a;
    }
    
    printf("The value of %d to the power %d is : %d",a ,b ,c);

    return 0;
}