//Prompt: Write a program that prompts the user for two integers.
//Print each number in the range specified by those two integers.

//Compile

#include <iostream>

int main()
{
    int UserNum1;
    int UserNum2;
    

    std::cout << "Enter the first number: ";
    std::cin >> UserNum1;
    std::cout << "Enter the second number: ";
    std::cin >> UserNum2;
    
    while(UserNum1 < UserNum2 + 1)
    {
        std::cout << UserNum1 <<" ";
        UserNum1++;
    }


    /* what would happen if we used a for loop
    \
    
    for(int i = UserNum1; i < UserNum2 + 1; i++ )
    {
        std::cout << i << " "; 
    }
    */
}
