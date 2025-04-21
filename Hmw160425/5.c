#include <stdio.h>
#include <string.h>

struct Book 
{
    char title[50];
    char author[30];
    int year;
};

void FindOldestBook(struct Book books[], int n) {
    int old = 0;
    for (int i = 1; i < n; ++i) {
        if (books[i].year < books[old].year)
            old = i;
    }
      printf("Oldest Book: \"%s\" by %s %d\n", books[old].title, books[old].author, books[old].year);
}
