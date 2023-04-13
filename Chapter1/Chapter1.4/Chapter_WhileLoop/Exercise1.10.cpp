//Prompt: In addition to the ++ operator that adds 1 to its operand, there is a decrement operator (--) 
//that subtracts 1. Use the decrement operator to write a while that prints the 
//numbers from ten down to zero.

//Compile



#include <iostream>

int main()
{
   int value = 10; 

   while (value >= 0)
   {
    std::cout << value << " ";
    --value;
   }
}