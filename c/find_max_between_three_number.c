/**
 * @file find_max_between_three_number.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-12-07
 * 
 * @copyright Copyright (c) 2022
 *
 * C program to find maximum between three numbers
 */

// Include standard input output library
#include <stdio.h>

int main()
{
    // Declaring variables
    int num1, num2, num3, max;

    // Take input two numbers from user 
    printf("Enter three numbers: ");
    scanf("%d%d%d", &num1, &num2, &num3);

    // If num1 is maximum between num1 and num2
    if(num1 > num2)
    {
        // If num1 is maximum between num1 and num3
        if(num1 > num3)
        {
            // Sets num1 as max number
            max = num1;
        }
        // Else num3 is max number
        else
        {
            // Sets num3 as max number
            max = num3;
        }
    }
    // Else check num 2 and num3 for max number
    else
    {
        // If num2 is maximum between num2 and num3
        if(num2 > num3)
        {
            // Sets num2 as max number
            max = num2;
        }
        // Else num3 is max number
        else
        {
            // Sets num3 as max number
            max = num3;
        }
    }

    // Pring the maximum number
    printf("Maximum among all three numbers = %d", max);

    return 0;
}