/**
 * @file find_max_between_two_number.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-12-07
 * 
 * @copyright Copyright (c) 2022
 *
 * C program to find maximum between two numbers
 */

// Include standard input output library
#include <stdio.h>

int main()
{
    // Declaring variables
    int num1, num2;

    // Take input two numbers from user 
    printf("Enter two numbers: ");
    scanf("%d%d", &num1, &num2);

    // If num1 is maximum 
    if(num1 > num2)
    {
        printf("%d is maximum", num1);        
    }

    // If num2 is maximum
    if(num2 > num1)
    {
        printf("%d is maximum", num2);
    }

    // Additional condition check for equality
    if(num1 == num2)
    {
        printf("Both are equal");
    }

    return 0;
}