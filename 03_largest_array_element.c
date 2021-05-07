#include<stdio.h>

int returnMax(int a[] , int n){
    int max = 0;

    for (int i = 0; i < n; i++)
    {
        if (a[i]> max){
            max = a[i];
        }
    }
    
    return max;
}

int main(){
    int a[] = {1,12,3,5554,5,67,654};

    int max = returnMax(a , 7);

    printf("The largest value of array is %d " ,max);

    return 0;
}