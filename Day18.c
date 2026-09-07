#include <stdio.h>
#include <stdlib.h>
void display(int arr[],int n);

int main(){
    
    int arr42[10]={90,5,72,88,16,61,19,3,18,24};
    int size42=sizeof(arr42)/sizeof(arr42[0]);
    int sum42=0;
    
    for (int i=0;i<size42;i++){
        sum42+=arr42[i];
    }
    printf("\n---SUM OF ARRAY USING TRAVERSING---\n");
    printf("%d\n",sum42);

    int arr43[10]={96,69,57,40,99,27,34,7,3,10};
    int size43=sizeof(arr43)/sizeof(arr43[0]);
    int count43=0;

    int given_number43;
    printf("\n---PROGRAM FOR COUNTING NUMBER GREATER THAN A SPECIFIC NUMBER---\n");
    printf("\nEnter a specific number for checking: ");

    scanf("%d",&given_number43);
    for (int i=0;i<size43;i++){
        if (arr43[i]>given_number43){
            printf("%d\t",arr43[i]);
        }
    }
    int arr46[]={88,49,28,16,54,31,14,1,59,95};
    int size46=sizeof(arr46)/sizeof(arr46[0]);
    display(arr46,size46);

    return 0;
}
void display(int arr[],int n){
    printf("\n---DISPLAY ALL THE NUMBER OF ARRAY---\n");
    for (int i=0;i<n;i++){
        
        printf("%d ",arr[i]);
    }
}