#include <stdio.h>
#include <stdlib.h>

void sum_of_array(int arr[],int n){
    int sum=0;

    printf("\n---SUM OF ARRAY USING FUNCTION---\n");
    for (int i=0;i<n;i++){
        sum+=arr[i];
    }
    printf("\nOUTPUT: %d\n",sum);

}
void largest_element(int arr[],int n){
    int largest=arr[0];

    for (int i=0;i<n;i++){
        if (largest < arr[i]){

            largest=arr[i];
        }
    }
    printf("\n---LARGEST ELEMENT---\n");
    printf("\nLARGEST: %d\n",largest);
}
void reversing_array(int arr[],int n){
    printf("\n---REVERSE OF ARRAY---\n\n");

    for (int i=n-1;i>=0;i--){
        printf("%d\t",arr[i]);
    }
    printf("\n\n\n");
}
void linear_search(int arr[],int n){
    printf("\n---LINEAR SEARCH---\n\n");
    int search_element;

    printf("ENTER WHAT NUMBER IS IN YOUR MIND: ");
    if (scanf("%d",&search_element)!=1){
        
        printf("\nPLEASE ENTER NUMBER\n");
        return ;
    }
    int is_present=0;
    for (int i=0;i<n;i++){
        
        if (search_element==arr[i]){

            printf("\nYOUR ELEMENT FOUND: %d AT %d POSITION\n",search_element,i+1);
            is_present=1;
            break;
        }
    }
    if (!is_present){
        printf("\nNOT PRESENT IN ARRAY RIGHT NOW.\nBETTER LUCK NEXT TIME.\n");
    }
    printf("\n\n");
}
void odd_even_counter(int arr[],int n){
    printf("\nCOUNTING FOR ODD EVEN---\n");

    int odd=0, even=0; 
    for (int i=0;i<n;i++){
        if (arr[i] %2==0){
            even+=1;
        } else if (arr[i]%2 !=0){
            odd+=1;

        }
    }
    printf("\nODD: %d\nEVEN: %d\n",odd,even);
    printf("\n\n");
}
void largest_element_pointer(int *arr,int n){
    int largest=*arr;

    for (int i=0;i<n;i++){
        if (*(arr+i)>largest){

            largest=*(arr+i);
        }
    }
    printf("\n---LARGEST ELEMENT IN ARRAY---\n");
    printf("\nLARGEST: %d\n",largest);
}
int main(){
    int size54;

    printf("\n---REVERSING ARRAY USING POINTER---\n");
    printf("\nENTER SIZE OF ARRAY: ");

    if (scanf("%d",&size54)!=1 || size54<0){
        printf("\nPLEASE ENTER INTEGER\n");

        return 1;
    }
    int arr54[size54];

    for(int i=0;i<size54;i++){
        printf("\nENTER ELEMENT: ");

        if (scanf("%d",&arr54[i])!=1){
            printf("\nPLEASE ENTER INTEGER\n");

            return 1;
        }
    }
    int *ptr54=arr54;
    for(int i=size54-1;i>=0;i--){

        printf("%d\t",*(ptr54+i));
    }
    printf("\n\n");

    int arr53[]={64,5,43,20,73,35,22,19,53,47,13,88,41,40,64};
    int size53=sizeof(arr53)/sizeof(arr53[0]);

    largest_element_pointer(arr53,size53);

    int arr47[10]={8,61,12,82,60,80,49,12,47,74};
    int size47=sizeof(arr47)/sizeof(arr47[0]);

    sum_of_array(arr47,size47);

    int arr48[10]={0,78,84,71,10,48,71,50,71,5};
    int size48=sizeof(arr48)/sizeof(arr48[0]);

    largest_element(arr48,size48);

    int arr49[10]={54,27,85,3,45,42,72,68,40,2};
    int size49=sizeof(arr49)/sizeof(arr49[0]);

    reversing_array(arr49,size49);


    int arr50[50]={2533,639,8704,8214,6395,2021,8637,7473,4758,7513,1893,1989,6482,5461,5336,8034,8048,51,6815,
        6434,788,3209,6784,1605,5489,1187,2302,8993,8661,8577,9496,8100,9285,8508,7526,7429,3383,6069,3322,1866,
        8298,4242,7782,3217,5944,207,1125,2005,2799,6973};
    int size50=sizeof(arr50)/sizeof(arr50[0]);

    linear_search(arr50,size50);

    int arr51[]={2919,5361,6026,2747,4533,6484,6391,9295,5423,5871,4562,9278,7438,1172,7215,6070,1702,9647,1727,
        2845,6260,155,3462,7378,1924,2189,8832,5806,4490,323,5164,3344,7202,8081,969,3700,29,7447,7271,7711,7583,
        3867,2305,1151,1309,2959,886,1551,7598,6973};
    int size51=sizeof(arr51)/sizeof(arr51[0]);

    odd_even_counter(arr51,size51);

    return 0;
}