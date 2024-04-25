#include "operations.h"

int insertArtist(Artist* artists, int size)
{
    Artist new;
    int albums_index = 0;
    
    printf("Inserção ordenada (por nome) de novos artistas \n\n");
    printf("Digite o Nome do Artista: \n");
    printf("9 - Voltar \n");
    fflush(stdin);
    fgets(new.name, sizeof(new.name), stdin);
    removeNewlineCh(new.name);
    new.name[0] = toupper(new.name[0]);
    if(new.name[0] == '9') return size;

    printf("Digite o Genero Musical do Artista: \n");
    printf("9 - Voltar \n");
    fgets(new.gender, sizeof(new.gender), stdin);
    removeNewlineCh(new.gender);
    if(new.gender[0] == '9') return size;

    printf("Digite o Local de Surgimento do Artista: \n");
    printf("9 - Voltar \n");
    fgets(new.bornAt, sizeof(new.bornAt), stdin);
    removeNewlineCh(new.bornAt);
    if(new.bornAt[0] == '9') return size;

    do {
        printf("Adicionar Album: \n");
        printf("8 - Confirmar albums e Voltar \n");
        printf("9 - Voltar \n");
        fgets(new.albums[albums_index].name, sizeof(new.albums[albums_index].name), stdin);
        removeNewlineCh(new.albums[albums_index].name);
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

int removeArtist(Artist* artists, int size)
{
    char nameToRemove[64];
    Artist* newArtists = (Artist*) malloc(sizeof(Artist) * MAX_LENGTH);

    printf("Remoção de um artista \n\n");
    printf("Digite o Nome do Artista: \n");
    fflush(stdin);
    fgets(nameToRemove, sizeof(nameToRemove), stdin);
    removeNewlineCh(nameToRemove);

    int newArtistsIndex = 0;
    for(int i=0; i<size; i++) {
        if(strcmp(nameToRemove, artists[i].name) != 0) {
            newArtists[newArtistsIndex] = artists[i];
            newArtistsIndex++;
        }
    }

    int newSize = size-1;
    artists = newArtists;
    writeFile(artists, newSize);
    return newSize; 
}

void editArtist(Artist* artists, int size)
{
    char nameToEdit[64];
    Artist new;
    int albums_index = 0;

    printf("Edição de um artista \n\n");
    printf("Digite o Nome do Artista: \n");
    fflush(stdin);
    fgets(nameToEdit, sizeof(nameToEdit), stdin);
    removeNewlineCh(nameToEdit);

    for(int i=0; i<size; i++) {
        if(strcmp(nameToEdit, artists[i].name) == 0) {
            printf("\nEdicao dos atributos do artista: %s \n\n", artists[i].name);

            printf("Digite o Nome do Artista: \n");
            printf("9 - Voltar \n");
            fflush(stdin);
            fgets(new.name, sizeof(new.name), stdin);
            removeNewlineCh(new.name);
            new.name[0] = toupper(new.name[0]);
            if(new.name[0] == '9') return;

            printf("Digite o Genero Musical do Artista: \n");
            printf("9 - Voltar \n");
            fgets(new.gender, sizeof(new.gender), stdin);
            removeNewlineCh(new.gender);
            if(new.gender[0] == '9') return;

            printf("Digite o Local de Surgimento do Artista: \n");
            printf("9 - Voltar \n");
            fgets(new.bornAt, sizeof(new.bornAt), stdin);
            removeNewlineCh(new.bornAt);
            if(new.bornAt[0] == '9') return;

            do {
                printf("Adicionar Album: \n");
                printf("8 - Confirmar albums e Voltar \n");
                printf("9 - Voltar \n");
                fgets(new.albums[albums_index].name, sizeof(new.albums[albums_index].name), stdin);
                removeNewlineCh(new.albums[albums_index].name);
                if(new.albums[albums_index].name[0] == '9') return;
                if(new.albums[albums_index].name[0] != '8') {
                    albums_index++;
                }
            } while (new.albums[albums_index].name[0] != '8');

            new.albumsSize = albums_index;
            artists[i] = new;

            sort(artists, size);
            writeFile(artists, size);
            return;
        }
    }

    printf("Usuario nao encontrado!! \n\n");
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