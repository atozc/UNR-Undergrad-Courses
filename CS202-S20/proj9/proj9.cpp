#include <iostream>
#include "ArrayQueue.hpp"
#include "NodeQueue.hpp"
#include "DataType.hpp"

using namespace std;

int main() {
    DataType dt(1, 2.2);

    std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n"
              << "      NODE QUEUE TESTS      \n"
              << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << std::endl << std::endl;

    std::cout << "-DEFAULT CONSTRUCTOR\n"
              << "Should have no output\n"
              << std::endl;
    NodeQueue nq_default;
    std::cout << nq_default << std::endl;


    std::cout << "-PARAMETERIZED CONSTRUCTOR\n"
              << std::endl;
    NodeQueue nq_param(3, dt);
    std::cout << nq_param << std::endl << std::endl;

    std::cout << "-COPY CONSTRUCTOR\n"
              << std::endl;
    NodeQueue nq_copy(nq_param);
    std::cout << nq_copy << std::endl << std::endl;

    std::cout << "-ASSIGNMENT OPERATOR\n"
              << std::endl;
    NodeQueue nq_assign;
    nq_assign = nq_param;
    std::cout << nq_assign << std::endl << std::endl;

    std::cout << "-PUSH AND POP\n"
              << std::endl;
    DataType dt2(2, 3.3);
    nq_copy.push(dt2);
    std::cout << nq_copy << std::endl << std::endl;
    nq_assign.pop();
    std::cout << nq_assign << std::endl << std::endl;

    std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n"
              << "     ARRAY QUEUE TESTS      \n"
              << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << std::endl << std::endl;

    std::cout << "-DEFAULT CONSTRUCTOR\n"
              << "Should have no output\n"
              << std::endl;
    ArrayQueue aq_default;
    std::cout << nq_default << std::endl;

    std::cout << "-PARAMETERIZED CONSTRUCTOR\n"
              << std::endl;
    ArrayQueue aq_param(3, dt);
    std::cout << aq_param << std::endl << std::endl;

    std::cout << "-COPY CONSTRUCTOR\n"
              << std::endl;
    ArrayQueue aq_copy(aq_param);
    std::cout << aq_copy << std::endl << std::endl;

    std::cout << "-ASSIGNMENT OPERATOR\n"
              << std::endl;
    ArrayQueue aq_assign;
    aq_assign = aq_param;
    std::cout << aq_assign << std::endl << std::endl;

    std::cout << "-PUSH AND POP\n"
              << std::endl;
    
    aq_copy.push(dt2);
    std::cout << aq_copy << std::endl << std::endl;
    aq_assign.pop();
    std::cout << aq_assign << std::endl << std::endl;
}
