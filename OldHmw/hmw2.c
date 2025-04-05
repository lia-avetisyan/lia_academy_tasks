#include <stdio.h>

int main() 
{

int a, b = 0;

printf("Enter two numbers: ");
scanf("%d%d", &a, &b);

int temp = a;
a = b;
b = temp;

printf("Swapped a = %d\nb = %d\n", a, b);

int days, years, months, weeks = 0;

printf("Enter num of days: ");
scanf("%d", &days);

years = days / 365;
months = days / 30; 
weeks = days / 7;  

printf("years = %d months = %d weeks = %d \n", years, months, weeks);


int seconds, hours, minutes = 0;

printf("Enter seconds: ");
scanf("%d", &seconds);

hours = seconds / 3600;         
minutes = seconds / 60;     

printf("hours = %d minutes = %d seconds = %d\n", hours, minutes, seconds);

    return 0;
}



