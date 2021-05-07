#include<stdio.h>

int main(){
    int n;
    int rev =0;

    printf("Enter the number:");
    scanf("%d", &n);

    while (n!=0)
    {
        int rem = n%10 ;
        rev = rev*10 + rem;
        n=n/10;
    }

    printf("Reverse of the number is %d", rev);
    

    return 0;
} 

// With the help of a function
// #include<stdio.h>
// int reverse(int n){
//     int rev = 0;

//     while (n!=0)
//     {
//         int rem = n%10;
//         rev = rev*10 + rem;
//         n=n/10;
//     }
//     return rev;
// }

// int main(){
//     int n ;
//     printf("Enter the number\n");
//     scanf("%d", &n);
//     int rev = reverse(n);
//     printf("rev is %d", rev);
//     return 0;
// }