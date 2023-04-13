//Prompt: Rewrite the exercises from § 1.4.1 (p. 13) using for loops.

//Exercise prompt: Write a program that prompts the user for two integers. 
//Print each number in the range specified by those two integers.

#include <iostream>

int main()
{
    int userVal1;
    int userVal2;

    std::cout << "Enter the first value: ";
    std::cin >> userVal1;
    
    std::cout << "Enter the second value: ";
    std::cin >> userVal2;

    for(int i = userVal1; i < userVal2 + 1; i++ )
    {
        std::cout << i << ", "; 
    }

}