#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>

// default alphabet list 
// updated to nanoid 2.0
static char alphs[] = {
    '-', '_',
    '0', '1', '2', '3', '4', '5', '6', '7', '8', '9',
    'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z',
    'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z',
    '\0'
};
// custom alphabet pool and length
char* custom(char alphs[], int size);

// custom length
char* generate(int size);

// default character pool and 21 in length
char* simple();

char* custom(char alphs[], int size) {
    srand(unsigned(time(0)));
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
