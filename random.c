#include "random.h"

#define MAX_CHAR 25
#define MIN_CHAR 0


char rand_char() {
    return 'a' + (rand() % (MAX_CHAR - MIN_CHAR));
}

void rand_str(char *s, size_t size) {
    for (int i = 0; i < size - 1; ++i)
        s[i] = rand_char();

    s[size - 1] = '\0';
}