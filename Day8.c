//Day 71
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main(void) {
    //control instruction 
    //1) sequence control
    //2) decision control
    //3) loop control
    //4) case control

    //operator
    // arithmatic ,relational,logical,bitwise,assingment,ternary

    //relational : == > >= < <= !=
    //
    //logical: && AND  , || OR, ! NOT
    // true only when all true otherwise false &&
    // false only when all false ||
    //priority order
    // ! *  / % + - < <= > >= == !=  && || = 
    
    //assingment
    // = += -= *= /=  %= 

    //check a number divisible by 2 or not
    int number;
    printf("\nenter a number for checking divisibility by 2 :: ");
    if(scanf("%d",&number) != 1){
        printf("\nError ! Invalid input. Please enter another input\n");
    }
    else {
        printf("\nNumber %d is %s \n",number,(number % 2 == 0) ? "Divisible by 2." : "Not divisible by 2.");
    }
    // if (even_checker%2 == 0){
    //     printf("\nyour number %d is divisible by 2\n",even_checker);
    // } else {
    //     printf("\nyour number %d is not divisible by 2 \n",even_checker);
    // }
    
    // printf("%s",even_checker%2 == 0 ? "your number is divisible by 2" : "your number is not divisible by 2");

    // printf("%d",even_checker % 2 == 0 ? 1: 0);

    // print true or false operation
    // int sunday =1 ;
    // int snowing =  1; 
    // printf("%d\n",sunday && snowing);
    // checking leap year

    int year;
    printf("\nPlease input a year for checking of leap year or not :: ");
    if (scanf("%d",&year) != 1){
        printf("\nPlease enter valid integer. Try again !! \n");
    }else {
        printf("\n%d Year is %s\n",year,((year % 4 ==0 && year % 100 != 0) || (year % 400 == 0)) ? 
        " Leap year.":" Not leap year.");

    }

    //bit wise parity checker

    int integer;

    printf("\nplease input a integer for even odd checker without modulo operator:: ");
    if (scanf("%d",&integer)!=1){
        printf("\nplease input a valid integer.plaese try again\n");
        return 1;
    } else {
        printf("\n%d is %s\n",integer,(integer & 1)? " Odd":" Even");
    }


//Valid Triangle Validator: Take three angles (or three side lengths) as input and determine whether they can form
// a valid triangle using logical operators (&&).

double a , b , c ;
printf("\nplease enter triangles three sides :: ");
if (scanf("%lf %lf %lf",&a,&b,&c)!=3){
    printf("\nplease input only valid integers!!\n");
    return 1;
} 
if (a<=0 ||b<=0||c<0){
    printf("\nplease input +ve integers !!");
    return 1;
}
if ((a+b>c)&&(b+c>a)&&(c+a>b)){
    printf("\nyour trinangle sides %.2f %.2f %.2f can make a triangle\n",a,b,c);
} else {
    printf("\nyour triangle side %.2f %.2f %.2f can't make a triangle\n",a,b,c);
}

//Largest of Three Numbers (Ternary Only): Find the maximum of three integers using only a single nested ternary 
//operator (? :), without using any if-else blocks.

int a1,a2,a3;
printf("\ninput 3 numbers:: ");
if(scanf("%d %d %d",&a1,&a2,&a3)!=3){
    printf("\nplease input integers only!!\n");
    return 1;
} 
int largest= (a1>a2)?((a1>a3)?a1:a3):((a2>a3)?a2:a3);
printf("%d %d %d largest among these 3 is %d",a1,a2,a3,largest);

//Character Type Identifier: Read a single character input and check whether it is an uppercase letter, lowercase 
//letter, digit, or special symbol using relational and logical operators with ASCII values.
    return 0;
}