/**
 * @ Name: CS 202 - Project 7
 * @ Desciption: proj7.cpp
 * @ Author: Crystal Atoz
 * @ Date Last Modified: 3/30/20
 */


#include <iostream>
#include <cstring>
#include "MyString.hpp"

using namespace std;

int main() {
    
//(1)
std::cout << "Testing Default ctor" << std::endl;
MyString ms_default;
    
//(2)
std::cout << "Testing Parametrized ctor" << std::endl;
MyString ms_parametrized("MyString parametrized constructor!");
    
//(3)
std::cout << "Testing Copy ctor" << std::endl;
MyString ms_copy(ms_parametrized);
    
//(4)
std::cout << "Testing dtor" << std::endl;
{
MyString ms_destroy("MyString to be destroyed...");
}
    
//(5),(6)
MyString ms_size_length("Size and length test");
std::cout << "Testing size()" << std::endl;
std::cout << ms_size_length.size() << endl;
std::cout << "Testing length()" << std::endl;
std::cout << ms_size_length.length() << endl;
    
//(7)
std::cout << "Testing c_str()" << std::endl;
MyString ms_toCstring("C-String equivalent successfully obtained!");
std::cout << ms_toCstring.c_str() << endl;
    
//(8)
std::cout << "Testing operator==()" << std::endl;
MyString ms_same1("The same"), ms_same2("The same");
if (ms_same1==ms_same2) {
    std::cout << "Same success" << endl;
}
MyString ms_different("The same (NOT)");
if (!(ms_same1==ms_different)) {
    std::cout << "Different success" << endl;
}
    
//(9)
std::cout << "Testing operator=()" << std::endl;
MyString ms_assign("Before assignment");
ms_assign = MyString("After performing assignment");
    
//(10)
std::cout << "Testing operator+" << std::endl;
MyString ms_append1("The first part");
MyString ms_append2(" and the second");
MyString ms_concat = ms_append1+ ms_append2;
    
//(11)
std::cout << "Testing operator[]()" << std::endl;
MyString ms_access("Access successful (NOT)");
ms_access[17] = 0;
    
//(12)
std::cout << "Testing operator<<()" << std::endl;
std::cout << ms_access << endl;
}
