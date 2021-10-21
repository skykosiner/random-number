#include <stdio.h>

#include "guessNumber.h"

int main() {
    printf("Random Number\n");
    printf("Enter in from 0-5 and take a guess\n");

    bool guess = &guessNumber;

    if (guess == true) {
        printf("you were right\n ");
    } else if (guess == false) {
        printf("you were wrong :c. The number was\n ");
    };

    return 0;
}
