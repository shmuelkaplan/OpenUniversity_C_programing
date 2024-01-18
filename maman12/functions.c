// functions.c
#define _CRT_SECURE_NO_WARNINGS 
#include "functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void initializeNamesMatrix(char namesMatrix[30][21]) {
    for (int i = 0; i < 30; ++i) {
        printf("Enter name %d: ", i + 1);
        scanf("%20s", namesMatrix[i]);

        // Check for duplicate names
        if (isNameRepeated(namesMatrix, namesMatrix[i], i)) {
            fprintf(stderr, "Error: Duplicate name entered. Exiting.\n");
            exit(EXIT_FAILURE);
        }
    }
}

int isNameRepeated(const char namesMatrix[30][21], const char* name, int currentIndex) {
    for (int i = 0; i < currentIndex; ++i) {
        if (strcmp(namesMatrix[i], name) == 0) {
            return 1; // Name is repeated
        }
    }
    return 0; // Name is not repeated
}

char* get_name(const char namesMatrix[30][21]) {
    int randomIndex = rand() % 30;
    return (char*)namesMatrix[randomIndex];
}
