// Q5: Write a program to convert temperature from Celsius to Fahrenheit.//


#include <stdio.h>
int main () {
    float celsius , fahrenheit ; 
    printf(" enter temperature in celsius\n") ;
    scanf("%f", &celsius ) ;
    fahrenheit = (celsius * 9/5) + 32 ;
    printf(" temperature in fahrenheit is %f\n", fahrenheit) ;
    return 0 ;
    
}