#ifndef TYPES
#define TYPES

#define ARTISTS_LENGTH 15

struct Album {
    char name[64];
} typedef Album;

struct Artist {
    char name[64];
    char gender[64];
    char bornAt[64];
    Album albums[64];
} typedef Artist;

#endif