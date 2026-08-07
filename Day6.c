//Day 69
#include <stdio.h>
int main(){
    float radius;
    printf("\nenter radius of desired circle: \n");
    scanf("%f",&radius);
    printf("\nthe area of the circle is : %f\n",3.14*radius*radius);

    //temperature conversion ferenhite to celcius;;
    float F;
    printf("\nenter your temperature in ferenheit for conversion into celsius: \n");
    scanf("%f",&F);
    if (F<=212 && F>=32){

        float C=5*(F-32)/9;

        printf("\nyour temperature is : %f",C);
    } else {
        printf("\ninput temperature is invalid in ferenheit scale!!!");
    }
    return 0;
}