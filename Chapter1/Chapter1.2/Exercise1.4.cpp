//Prompt: Our program used the addition operator, +, to add two numbers. 
//Write a program that uses the multiplication operator,
//*, to print the product instead.

//Compile: 

#include <iostream>

int main()
{
    int v1 = 0;
    int v2 = 0;

    std::cout << "Enter two numbers: ";

    std::cin >> v1;
    std::cin >> v2;

    std::cout << "The sum of " << v1 << " and " << v2 << " is: " << v1*v2 << std::endl;
}