#include "filesystem.h"

enum LINE_STATUS {NAME, GENDER, BORN_AT, ALBUMS} typedef LINE_STATUS;

int readFile (Artist* artists)
{   
    FILE* file = fopen("dados.txt", "r");
    if (file == NULL) {
        printf("Arquivo nao pode ser aberto\n");
        return -1;
    }

    char line[256];
    LINE_STATUS lineStatus = NAME;
    int index = 0;
    int albuns_index = 0;
    while(fgets(line, sizeof(line), file) != NULL) { 
        switch (lineStatus)
        {
            case NAME:
                strcpy((artists + index)->name, line);
                lineStatus = GENDER;
                break;
            case GENDER:
                strcpy((artists + index)->gender, line);
                lineStatus = BORN_AT;
                break;
            case BORN_AT:
                strcpy((artists + index)->bornAt, line);
                lineStatus = ALBUMS;
                break;
            case ALBUMS:
                if(line[0] != '=') {
                    strcpy((artists + index)->albums[albuns_index].name, line);
                    albuns_index++;
                    break;
                }
                albuns_index = 0;
                lineStatus = NAME;
                index++;
                break;
        }
    }

    fclose(file);

    return index;
}

void writeFile (Artist* artists)
{
    return;
}