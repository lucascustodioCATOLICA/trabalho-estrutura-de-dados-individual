#include "operations.h"

void insertArtist(Artist* artists)
{
    const int SIZE = sizeof(artists) / sizeof(Artist);
    printf("%d \n", SIZE);
    for (int i = 0; i < SIZE-1; i++) {
        printf("%s \n", artists[i].name);
    }
    // sort(artists);
    return;
}

void removeArtist(Artist* artists)
{
    return; 
}

void editArtist(Artist* artists)
{
    return; 
}

void binarySearchByName(Artist* artists)
{
    return; 
}

void SequencialSearchByAlbum(Artist* artists)
{
    return; 
}