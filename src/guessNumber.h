#include <stdio.h>
#include <stdbool.h>

#include "randomNumber.h"

#define MAX_LEN 5

bool guessNumber() {
    int numberGuess[MAX_LEN];

    printf("Enter a number: ");
    scanf("%d", numberGuess);

    int number = randomNumber(MAX_LEN);

    if (number == * numberGuess) {
        return true;
    } else if (number != * numberGuess){
        printf("The number was %d\n", number);
        return false;
    };

    return false;
}
