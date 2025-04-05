#include <stdio.h>

int main() 
{
	
	printf("Please enter 2 numbers : ");
	int num1 = 0;
	int num2 = 0;
        char op = 0;
	int res = 0;

	scanf("%d", &num1);
        scanf("%d", &num2);

        printf("choose | & ^ ~first num first num >> second num first num << second num: ");
        scanf(" %c", &op); 
       
        switch(op) 
	{
        case '|':

        res = num1 | num2;
        break;

        case '&':

        res = num1 & num2;
        break;

        case '^':

        res = num1 ^ num2;
        break;

	case '~':

	res = ~num1;
	break;

	case '>':
	
	res = num1 >> num2;
	break;

	case '<':

	res = num1 << num2;
	break;

        default:

        printf("Wrong operator\n");
        return 0;

        }

        printf("The result of this operator %c is: %d\n", op, res);

	return 0;
}


