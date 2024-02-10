#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>

int main (){

// format specifier % = defines and formats a type of data to be displayed

// % = character
// %s = string (array of characters)
// %f = float
// %1f = double
// %d = integer

// %.1 = decimal precision
// %1 = minimum field width
// %- = left align


    float itemOne = 5.32;
    float itemTwo = 10.00;
    float itemThree = 100.99; 

    printf("Item 1:  $%.2f\n", itemOne); //Displays 2 decimal places with .2
    printf("Item 1:  $%8.2f\n", itemTwo);
    printf("Item 1:  $%10.2f\n", itemThree);
    return 0;
}


