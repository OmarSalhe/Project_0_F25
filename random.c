#include "random.h"

#define NUM_CHAR 26

char rand_char() {
    return 'a' + (rand() % NUM_CHAR);
}

void rand_string(char *s, size_t size) {
    for (int i = 0; i < size; ++i)
        s[i] = rand_char();

    s[size] = '\0';
}