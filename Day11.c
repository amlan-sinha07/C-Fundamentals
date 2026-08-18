#include <stdio.h>
void swap(int *x, int *y) ;
void increment(int *x);
int main(){
    int arr[]={10,20,30,40,50};
    int *p=arr;
    int *max=arr;
    for (int i=0;i<sizeof(arr)/sizeof(arr[0]);i++){
        printf("%d\n",*(p+i));
        if (*(p+i)>*max){
            max=p+i;
        }
    }
    printf("max element is : %d\n",*max);
    int a1 = 10, a2 = 20;
    
    swap(&a1, &a2); // Pass addresses
    
    printf("a1: %d, a2: %d\n", a1, a2); // Prints 20, 10
    int x;
    printf("Enter a number to increment: ");
    
    // Robust input check
    if (scanf("%d", &x) != 1) {
        printf("Error: Please enter a valid integer.\n");
        return 1;
    } 

    // 2. Pass address of x so the function can modify x directly in memory
    increment(&x);

    // 3. Output the updated value
    printf("Incremented value: %d\n", x);
    return 0;
}


// 1. Function prototype




// 4. Corrected definition (returns void)
void increment(int *x) {
    (*x)++; // Precedence note: Parentheses around *x are REQUIRED (*x++ would increment the pointer address, not the value)
}


void swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}