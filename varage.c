#include <stdio.h>
int main()
{
    int a, b , c;
    double avg;

    printf("input number: ");
    scanf("%d",&a);
    printf("second number: ");
    scanf("%d",&b);
    printf("third number: ");
    scanf("%d",&c);

    avg = (a+b+c)/3;

    //%.2f is used for displaying output upto two decimal places
    printf("Average of %d and %d and %d is: %lf",a,b,c,avg);

    return 0;
}
