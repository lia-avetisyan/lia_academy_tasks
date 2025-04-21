#include <stdio.h>

struct Book 
{
    char title[50];
    char author[30];
    int year;
};

struct Student
{
    char name[30];
    int age;
    float marks;
};

struct Car 
{
    char brand[20];
    char model[20];
    int year;
    float price;
};

enum Category { ELECTRONICS, FOOD, CLOTHING };

struct Product 
{
    char name[20];
    enum Category category;
    float price;
};

void PrintCars(struct Car cars[], int n);
void FindLowestLatestCar(struct Car cars[], int n);
void FindTop(struct Student students[], int n);
void PrintFoodProducts(struct Product products[], int n);
void FindOldestBook(struct Book books[], int n);
struct Car compareCars(struct Car c1, struct Car c2);
void unionValueDemo();
void unionDataDemo();

int main() 
{

    struct Car cars[3];
    PrintCars(cars, 3);
    FindLowestLatestCar(cars, 3);
    
    
    struct Student students[3] = {
        {"John", 20, 85.5},
        {"Alice", 22, 92.0},
        {"Bob", 21, 78.0}
    };
    FindTop(students, 3);

    struct Product products[3] = 
    {
        {"Apple", FOOD, 2.5},
        {"T-Shirt", CLOTHING, 15.0},
        {"Laptop", ELECTRONICS, 899.99}
    };
    PrintFoodProducts(products, 3);
    struct Book books[4] = {
        {"Book One", "Author A", 1990},
        {"Book Two", "Author B", 1985},
        {"Book Three", "Author C", 2000},
        {"Book Four", "Author D", 1970}
    };
    FindOldestBook(books, 4);

    struct Car c1 = {"BMW", "X5", 2019, 45000};
    struct Car c2 = {"Audi", "Q7", 2021, 50000};
    struct Car expensive = compareCars(c1, c2);
    printf("More expensive car: %s %s - $%.2f\n", expensive.brand, expensive.model, expensive.price);
    

    unionValueDemo();
    unionDataDemo();

    return 0;
}

