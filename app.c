#include <stdio.h>
#include <stdlib.h>




int main()
{


    float number1 , number2 , sum , multiply , divide , subtract ;
    printf("Enter the first number: ");
    scanf("%f",&number1);
    printf("Enter the second number: ");
    scanf("%f",&number2);
    sum = (number1 + number2);
    multiply = (number1 * number2);
    divide = (number1 / number2);
    subtract = (number1 - number2);                         

    printf("The sum of %.2f and %.2f is: %.2f\n",number1,number2,sum);
    printf("The multiply of %.2f and %.2f is: %.2f\n",number1,number2,multiply);
    printf("The divide of %.2f and %.2f is: %.2f\n",number1,number2,divide);
    printf("The subtract of %.2f and %.2f is: %.2f\n",number1,number2,subtract);        
    

    return 0;
}