#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int rollDice() {
    return (rand() % 6) + 1;
}

int main() {
    int die1, die2, total;
    char name[100];

    printf("What is your name? ");
    scanf("%s", name);
    printf("Hello, %s!\n", name);

    printf("Rolling the dice...\n");
    die1 = rollDice();
    die2 = rollDice();
    total = die1 + die2;

    printf("Die 1: %d\n", die1);
    printf("Die 2: %d\n", die2);
    printf("Total value: %d\n", total);

    if (total > 7) {
        printf("%s won!\n", name);
    } else {
        printf("%s lost!\n", name);
    }

    return 0;
}