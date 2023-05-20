#include "unistd.h"
#include "getopt.h"
#include "file.h"

int main(int argc, char* argv[]){
    if(argc >= 1){
        int f = 1;
        while(argv[f][0] == '-' || argv[f][0] == '\'' || argv[f][0] == '\"'){
            f++;
        }
        char** text = (char**)malloc(100 * sizeof(char*));
        for(int i = 0; i < 100; i++){
            text[i] = (char*)malloc(100 * sizeof(char));
        }
        char* serc = (char*)malloc(100 * sizeof(char));

        while(f < argc){
            if(readfile(argv[f], text, 0) == 1){
                
                for(int i = 0; i < 100; i++){
                    printf("%s", text[i]);
                }
            }
            f++;
        }
        pars(argv, argc, serc);
            printf("%s\n", serc);
        for(int i = 0; i < 100; i++){
            free(text[i]);
        }
        free(text);
    }
    return 0;
}
