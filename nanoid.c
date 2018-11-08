#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>

#include "alphabet.h"

char* custom(char alphs[], int size);
char* generate(int size);
char* simple();

int main() {
    srand(time(0));

    char custom_alphs[] = {
        'a', 'b', 'c', 'd',
        '\0'
    };
    char *id0 = custom(custom_alphs, 21);
    printf("%s\n", id0);

    char *id1 = generate(10);
    printf("%s\n", id1);

    char *id2 = simple();
    printf("%s\n", id2);
}

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
