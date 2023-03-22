//prompt We wrote the output in one 
//large statement. Rewrite the program to use a separate statement to print each operand.

//Compile

#include <iostream>

int main()
{
    int v1;
    int v2;

    std::cout << "Enter 2 numbers: ";
    std::cin >> v1;
    std::cin >> v2;

    std::cout << "The sum of " << v1;
    std::cout << " and " << v2;
    std::cout << " is: " << v1+v2 << std::endl;

    

}