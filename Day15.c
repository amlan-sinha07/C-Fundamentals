#include <stdio.h>
#include <stdlib.h>

int maxValueinArray(int *ptr1,int size){
    if (size==1){
        return *ptr1;
    }
    int maxforrest=maxValueinArray(ptr1+1,size-1);
    return (*ptr1>maxforrest) ? *ptr1:maxforrest; 
}

int SumOfArray(int *ptr27,int size27){
    if (size27<=0){
        return 0 ;
    }
    return *ptr27+SumOfArray(ptr27+1,size27-1);
}

void Reverse_Of_A_Array(int *ptr28,int size28){
    if (size28<=0){
        return ;
    }
    for (int i=size28-1;i>=0;i--){
        printf("%d\t",ptr28[i]);
    }
}
//
//
void createArray(int **p,int n){
    if (p==NULL){
        return;
    }
    *p=(int*)malloc(n*sizeof(int));
    if (*p==NULL){
        perror("Memory allocation failed.");
    }
}
//In C "call by reference " is simulated using pointers because
//the C language natively only supports call by value
void change(int *x){
    *x=50;
}
void swap(int *c9,int *d9){
    int temp;
    temp=*c9;
    *c9=*d9;
    *d9=temp;
}
void increment(int *num10);
void sum11(int *c11,int *d11);
// change(a) pass by value
// change(&a) pass by reference
// In pointer based function call  * and & are used to pass
// variables by refernce , allowing a function to modify
// the original variable value outside its own scope
//limits.h
//stdbool.h
int main(){
    int array_no_23[5];
    for (int i=0;i<5;i++){
        printf("enter %dth element: ",i+1);
        if(scanf("%d",&array_no_23[i])!=1){
            printf("integers accepted only.");
            return 1;
        }
    }
    int size=sizeof(array_no_23)/sizeof(array_no_23[0]);
    int duplicate_array_no_23[size];
    for(int i=0;i<size;i++){
        duplicate_array_no_23[i]=array_no_23[i];
    }
    printf("Duplicate array is\n");
    for (int i=0;i<=size;i++){
        printf("%d\t",duplicate_array_no_23[i]);
    }
    printf("\n");

    int array_no_21[5];
    for(int i=0;i<5;i++){
        printf("enter %dth element: ",i+1);
        if(scanf("%d",&array_no_21[i])!=1){
            printf("integers accepted only.");
            return 1;
        }
    }
    int count_positive_no=0,    count_negative_no=0,    count_zero=0;
    for (int i=0;   i<5;    i++){
        if (array_no_21[i]==0){
            count_zero++ ;
        } else if (array_no_21[i] >0){
            count_positive_no++;
        } else {
            count_negative_no++;
        }
    }
    printf("\n\n");
    printf("No of \nPositive no: %d\nNegative no: %d\nZero : %d\n",count_positive_no,
    count_negative_no,count_zero);
    printf("\n\n");

    int array_no_22[5];
    for(int i=0;i<5;i++){
        printf("enter %dth element : ",i+1);
        if (scanf("%d",&array_no_22[i])!=1){
            printf("integers accepted only.");
            return 1;
        }
    }
    for (int i=sizeof(array_no_22)/sizeof(array_no_22[0])-1;i>=0;i--){
        printf("%d\t",array_no_22[i]);
    }
    printf("\n");

    int array_no_20[10];
    for (int i=0;i<10;i++){
        printf("enter %dth element : ",i+1);
        if (scanf("%d",&array_no_20[i])!=1){
            printf("Please enter integer.");
            return 1;
        }
    }
    int count_for_even=0 , count_for_odd=0;
    for (int i=0;i<10;i++){
        if(array_no_20[i]%2==0){
            count_for_even++ ;
        } else {
            count_for_odd++ ;
        }
    }
    printf("\n");
    printf("Odd no: %d & Even no: %d\n",count_for_odd,count_for_even);
    printf("\n");

    int a18[10];
    for (int i=0;i<10;i++){
        printf("enter %dth element : ",i+1);
        if (scanf("%d",&a18[i])!=1){
            printf("Please enter integer.");
            return 1;
        }
    }
    int largest_element18=a18[0];
    for (int i=0;i<10;i++){
        if (a18[i]>largest_element18){
            largest_element18=a18[i];
        }
    }
    printf("\n\n");
    printf("Largest element is : %d\n",largest_element18);
    printf("\n\n");
    int array_number_19[19];
    for (int i=0;i<19;i++){
        printf("enter %dth element: ",i+1);
        if(scanf("%d",&array_number_19[i])!=1){
            printf("please enter integer");
            return 1;
        }
    }
    int smallest_no_of_array19 =array_number_19[0];
    for (int i=0;i<19;i++){
        if(array_number_19[i]<smallest_no_of_array19){
            smallest_no_of_array19=array_number_19[i];
        }
    }
    printf("\n\n");
    printf("Smallest no of array no 19 is : %d\n",smallest_no_of_array19);
    printf("\n\n");

    int a17[5]={10,20,30,40,50};
    int sum17=0 ,avg17=0;
    for (int i=0;i<5;i++){
        sum17+=a17[i];
    }
    avg17=sum17/5;
    printf("Sum17 is : %d and Avg17 is: %d\n",sum17,avg17);
    
    int a16[10]={1,2,3,4,5,6,7,8,9,10};
    for (int i=0;i<10;i++){
        printf("%d\t",a16[i]);
    }
    printf("\n");
    int a11,b11;
    printf("enter a11: ");
    if (scanf("%d",&a11)!=1){
        printf("please enter integer");
        return 1;
    }
    printf("enter b11: ");
    if (scanf("%d",&b11)!=1){
        printf("please enter integer.");
        return 1;
    }
    sum11(&a11,&b11);

    int a10;
    printf("enter a10: ");
    if (scanf("%d",&a10)!=1){
        printf("Integers only.");
        return 1;
    }
    printf("Before increment: %d\n",a10);
    increment(&a10);
    printf("After increment: %d\n",a10);

    int a9, b9;
    printf("enter number a9: ");
    if (scanf("%d",&a9)!=1){
        printf("Please use integer");
        return 1;
    }
    printf("enter number b9: ");
    if (scanf("%d",&b9)!=1){
        printf("Please use integer");
        return 1;
    }
    printf("===Before Swapping Value===\n");
    printf("a9: %d, b9: %d\n",a9,b9);
    swap(&a9,&b9);
    printf("===After Swapping Value===\n");
    printf("a9: %d, b9: %d\n",a9,b9);

    int a8=10;
    change(&a8);
    printf("Call by refernce value changes: %d\n",a8);

    int arr1[]={1,2,3,4,5,6,7,8,9,10,11};
    int size1=sizeof(arr1)/sizeof(arr1[0]);
    int max1=maxValueinArray(arr1,size1);
    printf("The maximum element in array is :%d\n",max1);

    int arr27[]={1,2,3,4,5,6,7,8,9,10};
    int size27=sizeof(arr27)/sizeof(arr27[0]);
    int sum27=SumOfArray(arr27,size27);
    printf("The Sum Of Array Is : %d\n",sum27);
    
    int arr28[]={1,2,3,4,5,6,7,8,9,10};
    int size28=sizeof(arr28)/sizeof(arr28[0]);
    Reverse_Of_A_Array(arr28,size28);

    return 0;
}
void increment(int *num10){
    (*num10)++ ;
}
void sum11(int *c11,int *d11){
    int sum11;
    sum11=*c11+*d11;
    printf("Sum11 value: %d\n",sum11);
}