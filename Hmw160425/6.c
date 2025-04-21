#include <stdio.h>
#include <string.h>

struct Car 
{
    char brand[20];
    char model[20];
    int year;
    float price;
};

struct Car compareCars(struct Car c1, struct Car c2) 
{
    return (c1.price > c2.price) ? c1 : c2;
}
