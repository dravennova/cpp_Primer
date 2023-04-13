//Prompt: Write a program that uses a while to sum the numbers from
//50 to 100.

//Compile

#include <iostream>

int main()
{
    int sum = 0; 
    int val = 50;

    while (sum <= 100)
    {
        sum+= val;
        ++val;
    }
    std::cout << "Sum of 50 to 100 inclusive is: " << sum << std::endl;
    return 0;

} 
