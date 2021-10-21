#include <stdio.h>
#include <stdbool.h>

#include "randomNumber.h"

#define MAX_LEN 100

bool guessNumber() {
    int numberGuess[MAX_LEN];

    printf("Enter a number: ");
    scanf("%d", numberGuess);

    int number = randomNumber(100);

    if (number == * numberGuess) {
        return true;
    } else if (number != * numberGuess){
        printf("The number was %d\n", number);
        return false;
    };

    return 0;
}
