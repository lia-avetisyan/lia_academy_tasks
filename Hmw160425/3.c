#include <stdio.h>
#include <string.h>

struct Student 
{
    char name[30];
    int age;
    float marks;
};


void FindTop(struct Student students[], int n) 
{
    int top = 0;
    for (int i = 1; i < n; ++i) {
        if (students[i].marks > students[top].marks)
            top = i;
    }

    printf("Top Student: %s\n Age: %d\n Marks: %f\n",
           students[top].name, students[top].age, students[top].marks);
}
