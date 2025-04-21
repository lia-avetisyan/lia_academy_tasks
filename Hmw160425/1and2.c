#include <stdio.h>
#include <string.h>


struct Car 
{
    char brand[20];
    char model[20];
    int year;
    float price;
};

void PrintCars(struct Car cars[], int n) 
{

    for (int i = 0; i < n; ++i) {
 
        printf("Brand: ");
        scanf("%s", cars[i].brand);
        printf("Model: ");
        scanf("%s", cars[i].model);
        printf("Year: ");
        scanf("%d", &cars[i].year);
        printf("Price: ");
        scanf("%f", &cars[i].price);
    }

    
    for (int i = 0; i < n; ++i) {

        printf("%s %s %d %f\n", cars[i].brand, cars[i].model, cars[i].year, cars[i].price);
    }
}


void FindLowestLatestCar(struct Car cars[], int n) {
    int min = 0, new = 0;

    for (int i = 1; i < n; ++i) {
        if (cars[i].price < cars[min].price)
            min = i;
        if (cars[i].year > cars[new].year)
            new = i;
    }

    printf("\nCheapest Car: %s %s %d %f\n",
           cars[min].brand, cars[min].model, cars[min].year, cars[min].price);

    printf("Latest Car: %s %s %d %f\n",
           cars[new].brand, cars[new].model, cars[new].year, cars[new].price);
}

