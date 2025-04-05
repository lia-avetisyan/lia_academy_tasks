#include <stdio.h>

int main()
{

char letter = '/0';
char upper_case = '/0';
char lower_case = '/0';

printf("pls input lower case of the letter : ");
scanf(" %c", &letter);
upper_case = letter + ('a' - 'A');
printf("%c", upper_case);

printf("pls input upper case of the letter : ");
scanf(" %c", &letter);
lower_case = letter - ('a' - 'A');
printf("%c", lower_case);

return 0;

}
