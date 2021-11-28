#include <stdio.h>

#include "guessNumber.h"

int main() {
    printf("Random Number\n");
    printf("Enter in from 0-5 and take a guess\n");

    bool guess = guessNumber();

    if (guess) {
        printf("you were right\n");
    } else {
        printf("you were wrong :c\n");
    };

    return 0;
}
