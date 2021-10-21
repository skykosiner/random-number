#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int randomNumber(int maxNumber) {
    int i, n;
    time_t t;

    n = 5;

    //Intializes random number generator
    srand((unsigned) time(&t));

    return rand() % maxNumber;

    return n;
};
