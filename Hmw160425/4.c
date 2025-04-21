#include <stdio.h>
#include <string.h>

enum Category { ELECTRONICS, FOOD, CLOTHING };

struct Product 
{
    char name[20];
    enum Category category;
    float price;
};

void PrintFoodProducts(struct Product products[], int n) 
{
   
    for (int i = 0; i < n; ++i) 
    {
        if (products[i].category == FOOD)
            printf("%s %f\n", products[i].name, products[i].price);
    }
}
