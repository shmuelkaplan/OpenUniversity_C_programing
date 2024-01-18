// functions.h

#ifndef FUNCTIONS_H
#define FUNCTIONS_H

void initializeNamesMatrix(char namesMatrix[30][21]);
int isNameRepeated(const char namesMatrix[30][21], const char* name, int currentIndex);
char* get_name(const char namesMatrix[30][21]);

#endif
