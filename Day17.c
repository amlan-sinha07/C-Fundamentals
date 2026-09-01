#include <stdio.h>
#include <limits.h>
//

void find_second_largest_element(int arr[],int size){
    printf("===Finding for 2nd largest element===\n");
    int first_largest_element=INT_MIN;
    int second_largest_element=INT_MIN;
    if (size<2){
        
        printf("Not possible for array size less than 2.");
    }
    for(int i=0;i<size;i++){
        if(arr[i]>first_largest_element){
            second_largest_element=first_largest_element;

            first_largest_element=arr[i];
        }else if (arr[i]>second_largest_element && arr[i]!= first_largest_element){
            second_largest_element=arr[i];
        }
    }
    if (second_largest_element==INT_MIN){
        printf("all elements are same.");
    }
    else {
        printf("largest element %d\n",first_largest_element);
        printf("second largest element %d\n",second_largest_element);
    }
    printf("\n");

}
void search_element(int *arr,int size,int element){
    printf("===Search for element===\n");
    int found=0;
    for(int i=0;i<size;i++){

        if(arr[i]==element){
            printf("element found\nat %d \n",i+1);
            found=1;
        }
    }
    if(!found){
        printf("integer not found.");
    }
    printf("\n");
}
void sum_of_array(int *ptr,int size){
    printf("===Finding sum of array===\n");
    int sum=0;
    int count=0;
    while (count<size){
        sum+=*ptr;
        count++ ;
        ptr++ ;
    }
    printf("sum is: %d\n",sum);
}
void largest_element_finder(int *ptr,int size){
    printf("===Finding largest element===\n");
    int largest=*ptr;
    int i=0;
    while(i<size){
        if(*ptr>largest){
            largest=*ptr;
        }
        ptr++ ;
        i++ ;
    }
    printf("largest: %d\n",largest);
    // largest= 88
}
int main(){
    int arr41[10]={2,67,77,86,29,25,42,31,64,80};
    printf("===Printing even element===\n");
    for(int i=0;i<10;i++){
        if (arr41[i]%2==0){
            printf("%d\t",arr41[i]);
        }
    }
    printf("\n");
    int arr39[10]={96,14,44,67,95,101,25,55,99,49};
    int size39=10;
    int *ptr39=arr39;
    printf("===Array traversing using pointer===\n");
    for(int i=0;i<size39;i++){
        printf("%d\t",*(ptr39+i));
    }
    printf("\n");
    int arr38[10]={101,54,45,50,7,80,42,11,42,45};
    int i38=0;
    printf("===Array traversing using while loop===\n");
    while(i38<10){
        printf("%d\t",arr38[i38]);
// 101     54      45      50      7       80      42      11      42      45
        i38++ ;
    }
    printf("\n");
    int arr37[10]={33,47,74,12,88,97,86,78,60,39};
    printf("===Array traversing using for loop===\n");
    for (int i=0;i<10;i++){
        printf("%d\t",arr37[i]);
// 33      47      74      12      88      97      86      78      60      39
    }
    printf("\n");
    int arr35[10]={1,88,74,80,87,34,18,12,40,76};
    int size35=sizeof(arr35)/sizeof(arr35[0]);
    largest_element_finder(arr35,size35);
    //largest element =88
    int arr34[10]={46,44,71,46,56,5,50,38,78,76};
    //sum is 510
    int size34=sizeof(arr34)/sizeof(arr34[0]);
    sum_of_array(arr34,size34);
    int arr25[10]={24,50,79,39,8,93,40,57,0,94};
    int size25=sizeof(arr25)/sizeof(arr25[0]);

    int search_element_25;
    printf("===enter which number do you want to search===> ");
    if (scanf("%d",&search_element_25)!=1){

        printf("enter an integer.");
        return 1;
    }
    search_element(arr25,size25,search_element_25);

    int arr24[5]={1,2,3,4,5};
    int size24=sizeof(arr24)/sizeof(arr24[0]);
    printf("array elements\n");

    for(int i=0;i<size24;i++){
        printf("%d\t",arr24[i]);
    }
    printf("\n");
    find_second_largest_element(arr24,size24);
    return 0;
}