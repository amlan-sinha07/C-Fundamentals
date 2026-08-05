// Day66 i am enjoing this journey 
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
int main(){
    // string length without strlen()

    char arr[100];
    int length=0;

    printf("enter a string: ");
    fgets(arr,sizeof(arr),stdin);

    while (arr[length] != '\0' && arr[length] != '\n'){
        length++;
    }
    printf("length of string = %d\n",length);

    // fibonacci with array

    int n;

    printf("enter no of terms: ");
    scanf("%d",&n);

    if (n<=0){
        printf("invalid input\n");
        return 0;
    }

    int *fib=(int*)malloc(n*sizeof(int));

    if (fib==NULL){
        printf("memory allocation failed\n");
        return 0;
    }

    fib[0]=0;
    if (n>1){
        fib[1]=1;
    }

    for (int i=2;i<n;i++){
        fib[i]=fib[i-1]+fib[i-2];
    }

    printf("fibonacci series: ");
    for(int i=0;i<n;++i){
        printf("%d",fib[i]);
    }

    printf("\n");

    free(fib);


    return 0;
}