#include "operations.h"

int insertArtist(Artist* artists, int size)
{
    Artist new;
    int albums_index = 0;
    
    printf("Inserção ordenada (por nome) de novos artistas \n\n");
    printf("Digite o Nome do Artista: \n");
    printf("9 - Voltar \n");
    scanf("%s", new.name); // usar fgets
    fflush(stdin);
    new.name[0] = toupper(new.name[0]);
    if(new.name[0] == '9') return size;

    printf("Digite o Genero Musical do Artista: \n");
    printf("9 - Voltar \n");
    scanf("%s", new.gender);
    fflush(stdin);
    if(new.gender[0] == '9') return size;

    printf("Digite o Local de Surgimento do Artista: \n");
    printf("9 - Voltar \n");
    scanf("%s", new.bornAt);
    fflush(stdin);
    if(new.bornAt[0] == '9') return size;

    do {
        printf("Adicionar Album: \n");
        printf("8 - Confirmar albums e Voltar \n");
        printf("9 - Voltar \n");
        scanf("%s", new.albums[albums_index].name);
        fflush(stdin);
        if(new.albums[albums_index].name[0] == '9') return size;
        if(new.albums[albums_index].name[0] != '8') {
            albums_index++;
        }
    } while (new.albums[albums_index].name[0] != '8');

    new.albumsSize = albums_index;
    artists[size] = new;

    int newSize = size+1;

    sort(artists, newSize);
    writeFile(artists, newSize);
    return newSize;
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