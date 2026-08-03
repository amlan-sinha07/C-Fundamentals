#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <math.h>
void reverse_a_number(int* a){
    if (a==NULL) return ; 
    int  reverse = 0 , remainder;
    while(*a!=0){
        remainder= *a%10;
        reverse=reverse*10+remainder;
        *a/=10;
    } 
    *a=reverse;
}
int factorial_using_recursion(int b){
    if (b==0||b==1){
        return 1;
    }
    return b*factorial_using_recursion(b-1);
}
int main(){
    int i,sum=0,n;
    float avg;

    printf("enter number of elements: ");
    scanf("%d",&n);

    int *arr=(int*)malloc(n*sizeof(int));

    if(arr == NULL){
        printf("memory allocation failed\n");
        return 1;
    }

    printf("enter %d numbers:\n",n);

    for(int i=0;i<n;++i){
        scanf("%d",&arr[i]);
        sum+=arr[i];
    }

    avg=(float)sum/5;
    printf("average=%.2f",avg);

    return 0;
}