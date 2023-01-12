/**
 * @file finding_negative_and_positive_number.c
 * @author tafhimul kabir (tafhimulkabir@protonmail.com)
 * 
 * @version 0.1
 * @date 2022-12-07
 * 
 * @copyright Copyright (c) 2022
 *
 * C program to find negative and positive number
 */

// Include standard input output library
#include <stdio.h>

int main()
{
    // Declaring variables
    int Num;
    printf("Enter Number: ");
    scanf("%d", &Num);
    
    //A negative number is less than 0, 
    //So the if suggests that if the program detects any number less than 0, 
    //then it must be a negative    
    if(Num < 0)
    {
        printf("%d is a Negative number", Num);
    }
    //Otherwise, the program will consider the number as positive.
    else
    {
        printf("%d is a Positive number", Num);
    }

    return 0;
}
