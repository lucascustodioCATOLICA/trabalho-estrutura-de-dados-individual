#include <stdio.h>
#include <locale.h>

#include "filesystem.h"

int main ()
{
    setlocale(LC_ALL, "");
    Artist* artists = readFile();

    return 0;
}