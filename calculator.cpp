#include <stdio.h>
#include<iostream>
#include<stdlib.h>
int main() 
{
	int operator ;
    char operator;
    double firstNumber, secondNumber;

    printf("Enter an operator (+, -, *, /): ");
    scanf ("%c", & operator);

    printf("Enter two operands: ");
    scanf("%lf %lf", &firstNumber, &secondNumber);

    switch(operator) {
        case '+':
            printf("%.1lf + %.1lf = %.1lf", firstNumber, secondNumber, firstNumber + secondNumber);
            break;
        case '-':
            printf("%.1lf - %.1lf = %.1lf", firstNumber, secondNumber, firstNumber - secondNumber);
            break;
        case '*':
            printf("%.1lf * %.1lf = %.1lf", firstNumber, secondNumber, firstNumber * secondNumber);
            break;
        case '/':
            printf("%.1lf / %.1lf = %.1lf", firstNumber, secondNumber, firstNumber / secondNumber);
            break;
        default:
            printf("Error! operator is not correct");
    }

    return 0;
}

