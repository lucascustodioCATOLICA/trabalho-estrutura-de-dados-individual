#include "sort.h"

void sort(Artist* artists)
{
    const int SIZE = sizeof(artists) / sizeof(Artist);
    printf("%d \n", SIZE);
    Artist tmp;
    for (int i = 0; i < SIZE-1; i++) {
        printf("%s \n", artists[i].name);
    }

    for (int j = 0; j < SIZE-1; j++) {
        for (int i = 0; i < SIZE-1; i++) {
            if(artists[i].name[0] > artists[i + 1].name[0]) {
                tmp = artists[i];
                artists[i] = artists[i + 1];
                artists[i + 1] = tmp;
            }
        }
    }

    for (int i = 0; i < SIZE-1; i++) {
        printf("%s \n", artists[i].name);
    }

    return;
}