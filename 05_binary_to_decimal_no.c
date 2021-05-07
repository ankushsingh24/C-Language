#include<stdio.h>
int main(){

    int rem,i= 0,n =10;
    int a[10];

    while (n)
    {
        rem = n%2;
        a[i]= rem;
        i++;
        n=n/2;
    }
     for (int j = i-1; j >=0; j--)
     {
         printf("%d" , a[j]);
     }
     
    return 0;
}