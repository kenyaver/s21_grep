#include "file.h"



int readfile(char* path, char* text[], int valid){
    FILE* file = fopen(path, "r");
    if(file){
        int i = 0;
        while(!feof(file)){
            fgets(text[i], 100, file);
            i++;
        }
        fclose(file);
    } else {
        valid = -1;
    }
    valid = 1;
    return valid;
}

char* pars(char* arg[], int argi, char* ser){
    int f = 1;
    char read[100];
    while(f < argi){
        int s = strlen(arg[f]);
        printf("wow\n");
        if(arg[f][0] == 34 || arg[f][0] == 39){
            printf("exit\n");
            while (arg[f][s - 1] != 39 && arg[f][s - 1] != 34){
                s = strlen(arg[f + 1]);
                strcat(read, arg[f]);
                f++;
            }
            break;
        }
        f++;
    }
    memcpy(ser, read, 100);
    return ser;
}


int search(char* text[], char* pars[]);
