//Day 73
#include <stdio.h>
int main(){
    int Two_Digit_Number=100;
    printf("%d\n",(Two_Digit_Number>9)&&(Two_Digit_Number<100));
    
    int a1, a2 , a3;
    printf("\nEnter 3 number for average: ");
    scanf("%d %d %d",&a1,&a2,&a3);
    printf("\nAverage: %d\n",(a1+a2+a3)/3);

    int a4;
    printf("\nEnter digit : ");
    if (scanf("%d",&a4)!=1){
        printf("\nInvalid it is not integer!!");
        return 1;
    } else {
        printf("\nYes it is integer.");
    }

    int a5,a6;
    printf("\nEnter 2 number for checking for smallest: ");
    scanf("%d %d",&a5,&a6);
    int smallest=(a5<a6)?a5:a6;
    printf("\nSmallest number %d\n",smallest);
    //
    //conditional statement

    int age=18;

    //ternary operator

    //switch

    int day;
    printf("\nenter day:(1-7)");
    scanf("%d",&day);
    switch(day){
            case 1: printf("monday\n");
            break;
            case 2: printf("tuesday\n");
            break;
            case 3: printf("wednesday\n");
            break;
            case 4: printf("thursday\n");
            break;
            case 5: printf("friday\n");
            break;
            case 6: printf("saturday\n");
            break;
            case 7: printf("sunday\n");
            break;
            default :printf("not a valid day");
    }

    //nested loop 

    //switch properties

    /*
    int x = 5, y = 10, z = 15;
    int result = x + y > z && y < z || x == 5;
    printf("%d\n", result);
    */
    // Answer: 0 Because x+y > z is false so false && true = false , false =0 
    /*
    Q2. Real-World Bug Fix (Integer Division & Data Types)
    A sensor reads three voltage values: a1 = 4, a2 = 4, a3 = 3.

    What will (a1 + a2 + a3) / 3 evaluate to in C?

    Rewrite the expression using explicit type casting so the output is accurate to two decimal places using printf.
    */
    // Output will be (4+4+3)/3=3
    int a1=4,a2=4,a3=3;
    printf("\nAverage is :%.2f\n",(float)(a1+a2+a3)/3.00);
    //this will return 3.67

    /*
    Q3. Conceptual / Interview Question (scanf Mechanism)
    In your code, you wrote if (scanf("%d", &a4) != 1).

    What does the return value of scanf() actually represent?
    return 1 means code is about to crash or stored garbage data will give some
    unexpected output . so return 0 means code is successful and ready to compile 
    properly
    If a user enters abc when scanf("%d %d", &x, &y) is called, what value will scanf return?
    */
    int a7;
    printf("enter a7");
    scanf("%d",&a7);
    printf("%d",a7);
    //after enter abc
    //it returns 32759

    int Months;
    printf("\nenter months: (1-12) :");
    if (scanf("%d",&Months)!=1){
        printf("\nplease enter digit");
        return 1;
    } 
    switch(Months){
        case 1:
        case 2:
        case 3:
            printf("First Quater\n");
            break;
        case 4:
        case 5:
        case 6:
            printf("Second Quater\n");
            break;
        case 7:
        case 8:
        case 9:
            printf("Third Quater\n");
            break;    
        case 10:
        case 11:
        case 12:
            printf("Fourth Quater\n");
            break;
        default:
            printf("Invalid month number\n"); 
    }

    int a = 0, b = 5;
    if (a != 0 && (b++ > 5)) {
        printf("Condition Met\n");
    }
    printf("b = %d\n", b);
    //it returns b=5 but i did not understand properly why ?
    //i am guessing that b is set 5 and if condition does not satisfy 
    //so it prints 5 simply else case
    return 0;
}