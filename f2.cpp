/*
* FILE : f2.ccp
* PROJECT : PROG1345 - Focused Assignment #2
* STUDENT ID :8961894
* PROGRAMMER : Ayushkumar Bhupatbhai Rakholiya
* FIRST VERSION : 2024-01-23
* DESCRIPTION :
* The functions in this file are used to calculates the sum of all integers from 1 to 500 using a while loop
*/ /
#include <stdio.h>

int main(void) {
    int add = 0;
    int i = 1;
    while (i <= 500)
    {
        add += i;
        i++;
    }
    printf("%d\n", add);
    return 0;
}