#include <stdio.h>

union Data 
{
    int i;
    float f;
    char c;
};

void unionDataDemo() 
{
    union Data v;

    v.i = 5;
    printf("Int val: %d\n", v.i);
    printf("int: %d float: garbage char: garbage\n", v.i);

    v.f = 5.5;
    printf("Assigning float value: %f\n", v.f);
    printf("int: garbage float: %f, char: garbage\n", v.f);

    v.c = 'L';
    printf("Char val: %c\n", v.c);
    printf("int: garbage float: garbage char: %c\n", v.c);

    printf("Size of union: %lu\n", sizeof(union Data));
}
