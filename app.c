#include <stdio.h>
#include <stdlib.h>




int main()
{


    float number1 , number2 , sum;
    printf("Enter the first number: ");
    scanf("%f",&number1);
    printf("Enter the second number: ");
    scanf("%f",&number2);
    sum = (number1 + number2);
    printf("The sum of %.2f and %.2f is: %.2f\n",number1,number2,sum);






    return 0;
}