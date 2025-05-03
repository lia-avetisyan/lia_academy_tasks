#include <stdio.h>
#include "mymath.h"

int main() {

    int num1, num2 = 0;

    printf("Enter an integer for factorial and fibonacci: ");
    scanf("%d", &num1);

    printf("Factorial of %d = %ld\n", num1, factorial(num1));
    printf("Fibonacci number at position %d = %ld\n", num1, fibonacci(num1));
    printf("%d is %s\n", num1, prime_check(num1) ? "a prime number" : "not a prime number");

    printf("\nEnter two integers for GCD: ");
    scanf("%d %d", &num1, &num2);

    printf("GCD of %d and %d = %d\n", num1, num2, gcd(num1, num2));

    return 0;
}
