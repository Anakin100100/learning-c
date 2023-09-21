#include <stdio.h>
#include <stdlib.h>

#define macro 5
#define add(a, b) a + b
#define long_variable_name(type, name, value) type very_long_name_##name = value;
#define str(str) #str
// If a macro can be written as a C function, then you should write
// a C function instead!
// start on page 49

int main(int argv, char **argc)
{
    long_variable_name(int, num, macro);
    int y = macro;
    int z = add(very_long_name_num, y);
    int length = snprintf(NULL, 0, "%d", z);
    char *str = malloc(length + 1);
    snprintf(str, length + 1, "%d", z);
    printf(str);
    free(str);
    printf(str(test));

    return (0);
}