#include <stdio.h>

int main()
{
    float celcious;
    float fahrenheit;

    printf("temperature in cecious: ");
    scanf("%f",&celcious);
    fahrenheit = ( celcious * 9/5) +32;

    //%.2f is used for displaying output upto two decimal places
    printf("Celcious of %f in fahrenheit is %f : %f",celcious,fahrenheit);

    return 0;
}
