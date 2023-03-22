//Prompt: In addition to the ++ operator that adds 1 to its operand,
//there is a decrement operator (--) that subtracts 1. Use the decrement 
//operator to write a while that prints the numbers from ten down to zero.

//Compile

#include <iostream>

int main()
{
    int sum = 0, val = 50;

    while(sum <= 100)
    {
        sum += val;
        --val;
    }
    
    std::cout << "The Sum of teh inclusive 50 to 100 is: " << sum << std::endl;
    
}