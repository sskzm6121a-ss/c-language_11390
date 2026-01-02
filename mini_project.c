#include <stdio.h>

int main() {
    int secret = 7;
    int guess;
    int maxAttempts = 3;
    int i;

    for (i = 1; i <= maxAttempts; i++) {
        printf("Attempt %d: Enter your guess: ", i);
        scanf("%d", &guess);

        if (guess == secret) {
            printf("Congratulations! You guessed the correct number.\n");
            return 0;
        } else if (guess > secret) {
            printf("Try smaller number.\n");
        } else {
            printf("Try larger number.\n");
        }
    }

    printf("Sorry! You have used all attempts. The correct number was %d.\n", secret);
    return 0;
}
