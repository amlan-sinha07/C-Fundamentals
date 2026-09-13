#include <stdio.h>
void sum(int arr[], int n){
    int sum=0;
    for (int i=0;i<n;i++){
        sum+=arr[i];
    }
    printf("\n---SUM OF ARRAY---\n");
    printf("%d\n",sum);
}
void average(int arr[],int n){
    float avg=0;
    int sum=0;
    for (int i=0;i<n;i++){
        sum += arr[i];
    }
    avg=(float) sum/n ;
    printf("\n---Average of Array---\n");
    printf("%f\n",avg);
}
void maximum(int arr[],int n){
    int max=arr[0];
    for(int i=0;i<n;i++){
        if (arr[i]>max){
            max=arr[i];
        }
    }
    printf("\n---Maximum element of Array---\n");
    printf("%d\n",max);
}
int search_element(const int arr[],int n,int x){
    for(int i=0;i<n; i++){
        if (arr[i]==x){
            return i;
        }
    }
    return -1;
}
void minimum(int arr[],int n){
    int min=arr[0];
    for(int i=0;i<n;i++){
        if (arr[i]<min){
            min=arr[i];
        }
    }
    printf("\n---Minimum element of array---\n");
    printf("%d\n",min);
}
void swap_number(int *a,int *b){
    printf("\nBefore swapping: %d, %d\n",*a,*b);
    int temp =*a;
    *a=*b;
    *b=temp;
    printf("\nAfter swapping: %d, %d\n",*a,*b);
}
void odd_even_counter(int *arr,int n){
    int odd=0, even=0;
    int i=0;
    while (i<n){
        if(*(arr+i)%2==0){
            even+=1;
        } else {
            odd+=1;
        }
        i++ ;
    }
    printf("\n---Odd even counter by pointer---\n");
    printf("\nodd: %d, even: %d\n",odd,even);
}
int main(){
    int arr55[]={38,23,76,1,98,79,69,10,92,80,42,72,89,26,60};
    int size55=sizeof(arr55)/sizeof(arr55[0]);

    sum(arr55,size55);
    average(arr55,size55);

    maximum(arr55,size55);
    minimum(arr55,size55);

    int a56= 38, b56 = 23;
    swap_number(&a56,&b56);

    int arr57[]={43,82,36,76,7,75,41,39,97,5,4,57,76,59,12};
    int size57=sizeof(arr57)/sizeof(arr57[0]);

    odd_even_counter(arr57,size57);

    int arr58[]={80,52,90,89,16,47,7,73,32,69,88,21,16,19,53};
    int size58=sizeof(arr58)/sizeof(arr58[0]);

    int search_for_element;
    printf("\nWhich number is in your mind? (1-100): ");

    if (scanf("%d",&search_for_element)!=1){
        printf("\nThink about integers only!\n");

        return 1;
    }
    int position58=search_element(arr58,size58,search_for_element);
    if (position58 != -1)
    {
        printf("\nYour number present at %d\n",position58+1);
    } else {
        printf("\nBetter luck next time !\n");
    }

    return 0;
}