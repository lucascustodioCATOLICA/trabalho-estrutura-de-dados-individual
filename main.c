#include <stdio.h>
#include <locale.h>

#include "filesystem.h"
#include "operations.h"

int main ()
{
    setlocale(LC_ALL, "");
    Artist* artists = readFile();
    unsigned long long SIZE = (unsigned long long) sizeof (artists) ;
    printf("%lld \n", SIZE);
    for (int i = 0; i < SIZE-1; i++) { // tem q ter alguma forma de pegasr o tamanho do arraty
        printf("%s \n", artists[i].name);
    }

    int input = 0;
    do {
        printf("TRABALHO DE ESTRUTURA DE DADOS!!! \n\n");
        printf("1 - Inserção ordenada (por nome) de novos artistas \n");
        printf("2 - Remoção de um artista \n");
        printf("3 - Edição de um artista \n");
        printf("4 - Busca binária por um artista \n");
        printf("5 - Busca sequencial por um álbum \n");
        printf("9 - Sair \n");
        scanf("%d", &input);

        switch (input)
        {
        case 1:
            insertArtist(artists);
            break;
        case 2:
            removeArtist(artists);
            break;
        case 3:
            editArtist(artists);
            break;
        case 4:
            binarySearchByName(artists);
            break;
        case 5:
            SequencialSearchByAlbum(artists);
            break;
        default:
            break;
        }
       
    } while(input != 9);

    return 0;
}