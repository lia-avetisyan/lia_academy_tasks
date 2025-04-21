Problem 1: Defining a Car
Task:
Define a struct called Car with the following fields:
brand (character array of size 20)
model (character array of size 20)
year (integer)
price (float).
Write a program to:
Input details of 3 cars from the user.
Print all car details.

Problem 2: Finding a Car by Criteria
Task:
Use the Car struct defined in Problem 1.
Write a function that takes an array of Car and:
Finds the car with the lowest price.
Finds the car with the latest year.
Print the details of these cars.
Example:
Input:
Car 1: Toyota Corolla, 2018, 15000  
Car 2: Honda Civic, 2020, 18000  
Car 3: Ford Fiesta, 2015, 12000  

Output:
Cheapest Car: Ford Fiesta (2015) - $12000  
Newest Car: Honda Civic (2020) - $18000  



Problem 3: Student Information
Task:
Define a struct called Student with fields:
name (character array of size 30)
age (integer)
marks (float).
Write a program to:
Read details of 5 students.
Find and print the student with the highest marks.

Problem 4: Using Enums for Product Categories
Task:
Define an enum for product categories: ELECTRONICS, FOOD, and CLOTHING.
Define a struct called Product with fields:
name (character array of size 20)
category (enum type)
price (float).
Write a program to:
Input details of 3 products.
Print only the details of products that belong to the FOOD category.

Problem 5: Book Management
Task:
Define a struct called Book with fields:
title (character array of size 50)
author (character array of size 30)
year (integer).
Write a program to:
Input details of 4 books.
Find and print the oldest book.

Problem 6: Comparing Two Cars
Task:
Use the Car struct defined earlier.
Write a function compareCars that:
Takes two cars as input.
Returns the car with the higher price.
Print the details of the more expensive car.
Example:
Input:
Car 1: BMW X5, $45000  
Car 2: Audi Q7, $50000 

Output:
The more expensive car is Audi Q7 - $50000  


Problem 7: Defining a Simple Union
Task:
Define a union called Value that can hold:
An integer
A float.
Write a program that:
Stores and prints an integer value.
Stores and prints a float value in the same union.
Explain how the memory size of the union is affected.
Output Example:
Integer value: 25  
Float value: 12.5  
Size of union: 4 bytes (minimum size of the largest member).  



Problem 8: Understanding Union Memory Usage
Task:
Define a union called Data that contains:
An int (integer)
A float (floating-point number)
A char (character).
Write a program to:
Assign values to each member of the union one at a time.
Print the values of all members after each assignment.
Print the size of the union.
Example Output:

Assigning int value: 10  
int: 10, float: (garbage), char: (garbage)

Assigning float value: 5.5  
int: (garbage), float: 5.500000, char: (garbage)

Assigning char value: A  
int: (garbage), float: (garbage), char: A

Size of union: 4 bytes (largest member determines size).  


