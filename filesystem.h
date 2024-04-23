#ifndef FILE_SYSTEM
#define FILE_SYSTEM

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "types.h"

int readFile(Artist*);
void writeFile(Artist*, int);

#endif