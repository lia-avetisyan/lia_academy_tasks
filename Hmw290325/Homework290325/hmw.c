#include <stdio.h>

int main()
{

	printf("Task1\n");
	int a = 5;
	int *ptr = &a;
	printf("%p\n",  (void*)ptr);
	printf("%p\n", (void*)&a);
	printf("%d\n", *ptr);

	printf("Task2\n");
	a = 8;
	printf("var before %d\n", a);
	int b = 7;
	int *p = &a;
        *p = 7;

	printf("var after %d\n", a);


	printf("Task3\n");
	char c = 'a';
	char *cptr = &c;
	printf("address before %p\n", (void*)cptr);
	cptr++;
	printf("address after inc %p\n", (void*)cptr);

	printf("Task4\n");
	a = 7;
	b = 5;
	printf("before %d %d\n", a, b);
	int *tmp = &a;
	int temp = *tmp;
	a = b;
	b = temp;
	printf("after %d %d\n", a, b);

	printf("Task5\n");
        int *ptr2 = NULL;
  	if(ptr2 == NULL)
        { 

        printf("NULL\n");

        }

        a = 7;
        ptr2 = &a;
        printf("The val is %d\n", *ptr2);
	return 0;


}
