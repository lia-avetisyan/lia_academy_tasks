#include <stdio.h>

union Value 
{
    int i;
    float f;
};

void unionValueDemo() 
{
    union Value val;
    val.i = 21;
    printf("Integer value: %d\n", val.i);

    val.f = 10.5;
    printf("Float value: %f\n", val.f);

    printf("Size of union: %lu\n", sizeof(union Value));
}
