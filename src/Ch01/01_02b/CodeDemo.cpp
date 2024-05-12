// Learning C++ 
// Exercise 01_02
// Hello World, by Eduardo Corpeño 

#include <iostream>
#include <string>

int main()
{
    std::cout << "Enter your name: " << std::flush;

    std::string name;
    std::cin >> name; 

    
    std::cout << "Hello " << name << "!" << std::endl;

    std::cout << std::endl << std::endl;
    return (0);
}