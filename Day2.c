//day 63 i have to live in mess
//in bardhaman . i met with my
//old friend at station. he told
//he got nit dgp ece. he is not
//general student. let see what
//is going to happen in my fate.
//i asked claude for 5 questions.
//cause i am beginner in c .
//i have to study c for college.
//let's go
#include <stdio.h>
#include <math.h>
#include <stdbool.h>

void Even_Or_Odd_Checker(int integer){
    if (integer%2==0){
        printf("%d it is even integer\n",integer);
    } else {
        printf("%d it is odd integer\n",integer);
    }
}

void Simple_Calculator(int a , int b){
    char op;
    printf("'+','-','*','/'\n");
    printf("\nchoose any operator: ");
    scanf("%c",&op);
    if (op=='+'){
        printf("sum = %d\n",a+b);
    } else if (op=='-'){
        printf("subtraction : %d\n",a-b);
    } else if (op=='*'){
        printf("multiplication: %d\n",a*b);
    } else if (op=='/' && b!=0){
        printf("divide : %d\n",a/b);
    } else if (op=='/' && b==0){
        printf("undefined\n");
    }
};
void Multiplication_Table(int target_integer){
    for (int i=1;i<=10;++i){
        printf("%d x %d = %d\n",target_integer,i,target_integer*i);
    }
};
void Check_Prime_Number(int target){
    bool isprime=true;
    if (target<=1){
        isprime=0;
    } else {
        for(int i=2;i<=(int)sqrt(target);++i){
            if (target%i==0){
                isprime=false;
                break;
            } 
        }
    }
    if (isprime){
        printf("%d this number is prime\n",target);
    } else {
        printf("%d this number is not prime\n",target);
    }
};
void Swap_Two_Number_Without_Third_Variable(int *a,int *b){
    printf("before swapping a= %d , b= %d\n",*a,*b);
    *a=*a^*b;
    *b=*a^*b;
    *a=*a^*b;
    printf("after swapping a=%d ,b=%d\n",*a,*b);
};
int main(void){
    printf("\n-----EVEN OR ODD CHECKER-----\n");
    Even_Or_Odd_Checker(5);
    printf("\n-----SIMPLE CALCULATOR-----\n");
    Simple_Calculator(5,7);
    printf("\n-----MULTIPLICATION TABLE-----\n");
    Multiplication_Table(8);
    printf("\n-----CHECK PRIME NUMBER-----\n");
    Check_Prime_Number(37);
    printf("\n-----SWAP TWO NUMBER WITHOUT THIRD VARIABLE-----\n");
    int x=99,y=111;
    Swap_Two_Number_Without_Third_Variable(&x,&y);
    printf("\nin main() after swap function:  x=%d,y=%d\n",x,y);
    return 0;
}
//commiting now , i did not study other subjects
//i have to study now other sub also, c is not
//everything. but i am too lazy . day by day i 
//want to improve