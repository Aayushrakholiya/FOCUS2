/*
* FILE : f2.ccp
* PROJECT : PROG1345 - Focused Assignment #2
* 
* PROGRAMMER : Ayushkumar Bhupatbhai Rakholiya
* FIRST VERSION : 2024-01-23
* DESCRIPTION :
* The functions in this file are used to calculates the sum of all integers from 1 to 500 using a while loop
*/ /
#include <stdio.h>

int main(void) {
    int add = 0;
    int j = 1;
    while (j <= 500)
    {
        add += j;
        j++;
    }
    printf("%d\n", add);
    return 0;
}