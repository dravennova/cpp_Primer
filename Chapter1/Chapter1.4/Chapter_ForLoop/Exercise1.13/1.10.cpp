//Prompt: Rewrite the exercises from § 1.4.1 (p. 13) using for loops.

//Exercise Prompt: In addition to the ++ operator that adds 1 to its operand, there is a decrement operator (--) 
//that subtracts 1. Use the decrement operator to write a while that prints the 
//numbers from ten down to zero.

#include <iostream>

int main()
{
    int value;
    int sum = 0;

    for (int value = 10; value >= 0; value--)
    {
        std::cout << value << ", ";
    }
}