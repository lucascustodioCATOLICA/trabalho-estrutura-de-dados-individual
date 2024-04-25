#ifndef OPERATIONS
#define OPERATIONS

#include <ctype.h>

#include "types.h"
#include "sort.h"
#include "filesystem.h"
#include "utils.h"

int insertArtist(Artist*, int);
void removeArtist(Artist*, int);
void editArtist(Artist*);
void binarySearchByName(Artist*);
void SequencialSearchByAlbum(Artist*);

#endif