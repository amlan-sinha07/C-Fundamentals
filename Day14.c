/*
call by value is a parameter passing method in c
where the actual value of the argument
is copied into formal parameter in a function
*/
/*
sepearate memory location are allocated for original variable and
the function parameter
*/
// the original parametter inside main remains completely unchanged 
/*
after swapValue call is over then memory stack is destroyed and
compiler turn into main where value were unchanged so value does 
not change in main
*/
#include <stdio.h>
int maxVal(int a, int b){
    if (a>b) printf("%d\n",a);
    else printf("%d\n",b);
}
void square(int a){
    printf("===Squaring Of A Integer===\n");
    printf("%d\n",a*a);
}
void swapValue(int a,int b){
    int temp=a;
    a=b;
    b=temp;
    printf("after swapping value in main : a1 = %d b1 = %d\n",a,b);
}
void change(int x){
    x=50;
}
void modifyValue(int num){
    num=num+50;
    int *ptr=&num;
    printf("Inside the modifyValue function: %d\n & memory location is : %d\n",num,ptr);
}
int main(){
    int d1=6,e1=7;
    printf("===Maximum Value Is===\n");
    maxVal(d1,e1);
    int c1=5;
    printf("===enter a value for squaring===\n");
    if (scanf("%d",&c1)!=1){
        printf("===only integers are valid===\n");
        return 1;
    }
    square(c1);
    int a1=11;
    int b1=12;
    swapValue(a1,b1);
    printf("after swapping value in main : a1 = %d b1 = %d\n",a1,b1);
    int a=10;
    change(a);
    printf("value of a : %d\n",a);
    int original=10;
    int *p1=&original;
    modifyValue(original);
    printf("Inside the main function: %d\n and memory location is : %d\n",original,p1);
    return 0;
}