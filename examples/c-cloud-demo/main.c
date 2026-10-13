#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

int main(int argc, char *argv[]) {
    long count = 5;
    if (argc > 2) {
        fprintf(stderr, "Usage: %s [count: 1-20]\n", argv[0]);
        return 1;
    }
    if (argc == 2) {
        char *end = NULL;
        errno = 0;
        count = strtol(argv[1], &end, 10);
        if (errno != 0 || *end != '\0' || count < 1 || count > 20) {
            fprintf(stderr, "count must be an integer from 1 to 20\n");
            return 1;
        }
    }

    long sum = 0;
    for (long i = 1; i <= count; i++) {
        sum += i;
        printf("%ld", i);
        if (i < count) printf(" + ");
    }
    printf(" = %ld\n", sum);
    return 0;
}
