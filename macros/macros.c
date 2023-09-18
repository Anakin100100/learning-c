#include <stdio.h>
#include <stdlib.h>

#define macro 5
#define add(a, b) a + b
// start on page 36

int main(int argv, char **argc)
{
    int x = macro;
    int y = macro;
    int z = add(x, y);
    int length = snprintf(NULL, 0, "%d", z);
    char *str = malloc(length + 1);
    snprintf(str, length + 1, "%d", z);
    printf(str);
    free(str);

    return (0);
}