/*
Program: Fever Detector
Author: Aasher
Description: This program checks if the user has a fever by comparing their temperature to 99°F.
Date: 31/10/2025
*/

#include <stdio.h>

int main() 
{
    int temperature;
    printf("Enter your temperature:");
    scanf("%d", &temperature);
    if(temperature>99)
    printf("You have fever\n");
    else
    printf("You dont have fever\n");


    return 0;
}
