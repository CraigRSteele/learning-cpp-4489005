// Learning C++ 
// Exercise 03_04
// Pointers, by Eduardo Corpeño 

#include <iostream>
#include <string>
#include "cow.h"

int main(){
    cow my_cow("Hildy",7,pet);
    cout << my_cow.get_name() << " is a type-" << (int)my_cow.get_purpose() << " cow." << std::endl;
    cout << my_cow.get_name() << " is " << my_cow.get_age() << " years old." << std::endl;
    return (0);
}
