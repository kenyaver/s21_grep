#ifndef FIL
#define FIL
#include "stdio.h"
#include "string.h"
#include "stdlib.h"

int readfile(char* path, char* text[], int valid);
char* pars(char* arg[], int argi, char* ser);
int search(char* text[], char* pars[]);
#endif