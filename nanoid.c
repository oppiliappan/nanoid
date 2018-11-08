#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>
#include "alphabet.h"

// custom alphabet pool and length
char* custom(char alphs[], int size);

// custom length
char* generate(int size);

// default character pool and 21 in length
char* simple();

char* custom(char alphs[], int size) {
    int alph_size = strlen(alphs) - 1;
    char *id = (char *) malloc(sizeof(char) * 3);

    for( int i = 0; i < size; i++ ) {
        int random_num = rand() % (alph_size);
        id[i] = alphs[random_num];
    }

    return id;
}

char* generate(int size) {
    return custom(alphs, size);
}

char* simple() {
    return custom(alphs, 21);
}
