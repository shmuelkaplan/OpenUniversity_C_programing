// main.c

#include "functions.h"
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main() {
    srand((unsigned int)time(NULL));

    char namesMatrix[30][21];

    initializeNamesMatrix(namesMatrix);

    printf("\nCalling get_name() 10 times:\n");
    for (int i = 0; i < 10; ++i) {
        printf("%d: %s\n", i + 1, get_name(namesMatrix));
    }

    return 0;
}
