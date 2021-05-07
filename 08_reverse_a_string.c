#include<stdio.h>

int main(){
    char a[] = "Ankush Kumar Singh";
    int len =0;
    char temp;

    while (a[len]!=0)   
    {
        len++;
    }
    printf("Length of the string is %d\n", len);

    for (int i = 0; i <= (len/2)-1; i++)
    {   
        char temp = a[i];
        a[i] = a[len-1-i];
        a[len-1-i] = temp;
    }

    printf("Reversed string is %s\n", a);
    
    
    return 0 ;
}