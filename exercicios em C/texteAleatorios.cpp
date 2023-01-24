#include <time.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
    int i;
    int num[5];

    srand(time(NULL));

    for (i = 0; i < 5; i++) {
        num[i] = (rand() % 99);
    }

    for (i = 0; i < 5; i++) {
        printf("[%d]: %d\n", i, num[i]);
    }

    return 0;
}
