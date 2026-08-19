#include <stdio.h>
int first_n_natural_numbers(int n){
    if (n<=0){
        return 0;
    }
    return n+first_n_natural_numbers(n-1);
}
int factorial(int n){
    if (n<=0 || n==1){
        return 1;
    }
    return n*factorial(n-1);
}
int power(int a,int b){
    if (b==0){return 1;}
    return a*power(a,b-1);
}
void fun(int n){
    if (n==0){
        return;
    }
    fun(n-1);
    printf("%d\n",n);
}
int reverse_number(int num,int rev){
    if (num==0){
        return rev;
    }
    return reverse_number(num/10,rev*10+(num%10));
}
int sum_of_digits(int num,int sum){
    if (num==0){
        return sum;
    }
    return sum_of_digits(num/10,sum+(num%10));
}
int fibonacci(int n){
    if (n<=0){
        return 0;
    }
    if (n==1){
        return 1;
    }
    int fib=fibonacci(n-1)+fibonacci(n-2);
    return fib;
}
int main(){
int a[] = {5, 10, 15};
int *p = a;

printf("%d\n", *(p + 2));
printf("%d\n", *p + 2);

int sum=first_n_natural_numbers(9);
printf("sum of first n natural numbers: %d\n",sum);

int fact=factorial(7);
printf("factorial: %d\n",fact);

int power1=power(5,5);
printf("power is: %d\n",power1);

fun(5);

int n=12345;
printf("reversed: %d\n",reverse_number(n,0) );

int n1=123456;
printf("sum of digits: %d\n",sum_of_digits(n1,0));

printf("fibonacci: %d\n",fibonacci(10));

int x = 10; //x=10
int *p = &x; //p=10
int **q = &p;// q=10



return 0;
}