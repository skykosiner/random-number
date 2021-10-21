#include <stdio.h>

#include "guessNumber.h"

int main() {
    if (guessNumber() == true) {
        printf("you were right\n ");
    } else if (guessNumber() == false) {
        printf("you were wrong :c. The number was\n ");
    };

    return 0;
}
