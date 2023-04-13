//Prompt: What does the following for loop do? What is the final value
//of sum?
#include <iostream>

int main()
{
   int sum = 0;
    for (int i = -100; i <= 100; ++i)
    {
        sum+= i;
        std::cout << sum << std::endl;
    }
}


//Answer: the for loop takes variable i which has the value of -100 and while i is less than or 
//equal to 100 then the sum will stop the loop once i reaches 100. the sum will then be calculated
//how many times i was passed. The sum would be 0 as it would add from itself and then as the sum gets 
//higher the positive i will then be added to the negative sum, making it equal