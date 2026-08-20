#include <stdio.h>
#include <stdlib.h>
void allocateArray(int **pp,int size){
    *pp=malloc(size*sizeof(int)); //changes caller's pointer 
}
void changepointer(int **pp){
    static int  newVal=50;
    *pp=&newVal;
}
void swapPointers(int **p,int **q){
    if (p==NULL|| q==NULL) return; //guard clause
    int *temp=*p;
    *p=*q;
    *q=temp;
}
int main(){
    int a=10;
    int b=20;
    int *p1=&a;
    int *p2=&b;
    swapPointers(&p1,&p2);
    printf("a= %d and b= %d\n",*p1,*p2);
    int *arr=NULL;
    allocateArray(&arr,50); //pass pointer to pointer
    for (int i=0;i<5;i++) arr[i]=i+1;

    for (int i=0;i<5;i++) printf("%d ",arr[i]);
    printf("\n");
    free(arr);

    int x1=5;
    int *p3=&x1;
    int **q3=&p3;

    printf("%d\n",x1);
    printf("%d\n",*p3);
    printf("%d\n",**q3);
    printf("%d\n",(void*)p3);
    printf("%d\n",(void*)q3);

int x = 10;
int *p = &x;
printf("Before : *p= %d\n",*p); //10
changepointer(&p);
printf("After: *p = %d\n",*p); //50
int **q = &p;

**q = 50;

printf("%d\n", x); //10
return 0;
}