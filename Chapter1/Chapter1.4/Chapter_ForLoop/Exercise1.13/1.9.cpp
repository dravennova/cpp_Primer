//Prompt: Rewrite the exercises from § 1.4.1 (p. 13) using for loops.

//Exercise Prompt: Write a program that uses a while to sum the numbers from
//50 to 100

#include <iostream>

int main()
{
    int value;
    int sum = 0;

    for(int value = 50; value <= 100; ++value)
    {
        sum+=value;
    }
    std::cout << "Sum of 50 to 100 inclusive is: " << sum << std::endl;
}