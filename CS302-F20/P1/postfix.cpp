/**
 * @ Name: CS 302 - Assignment 2
 * @ Desciption: postfix.cpp
 * @ Author: Crystal Atoz
 * @ Date Last Modified: 9/14/20
 */


#include <iostream>
#include <string>
#include <cctype>
#include "StackLinked.cpp"

float evaluate_postfix(const std::string postfix, StackLinked<float> & stack);
float apply_operator(const float operand1, const float operand2, const char operator_to_apply) throw(logic_error);

int main() {
    StackLinked<float> stack;

    std::cout << "Excercise 1. Assignment 1." << std::endl;
    std::cout << "(5+6)*(4/3) = 56+43/* = " << evaluate_postfix("56+43/*", stack) << std::endl;

    std::cout << std::endl;
    std::cout << "Excercise 1. Assignment 2." << std::endl;
    std::cout << "1. 5-2/(5*7)+10 = 52*/-3+ = " << evaluate_postfix("52*/-3+", stack) << std::endl;
    std::cout << "2. 8-4*9*19 = 4-2*9*+ = " << evaluate_postfix("4-2*9*+", stack) << std::endl;
    std::cout << "3. (3*2)/(5*6) = 9*26*/ = " << evaluate_postfix("9*26*/", stack) << std::endl;
    std::cout << "4. 8/2/3*(5-4) = 2/3/5-* = " << evaluate_postfix("2/3/5-*", stack) << std::endl;
    std::cout << "5. 3+9/7*(1*4)/(2*8) = 37/13**7*/+ = " << evaluate_postfix("37/13**7*/+", stack) << std::endl;

    return 0;
}

float evaluate_postfix(const std::string postfix, StackLinked<float> & stack) {
    stack.clear();
    for (int i = 0, len = postfix.length(); i < len; i++) {
        if (isdigit(postfix[i])) {
            stack.push(postfix[i] - '0');
        } else {
            float operand1 = stack.pop();
            float operand2 = stack.pop();
            float result = apply_operator(operand1, operand2, postfix[i]);
            stack.push(result);
        }
    }
    return stack.pop();
}

float apply_operator(const float operand1, const float operand2, const char operator_to_apply) throw(logic_error) {
    switch (operator_to_apply) {
        case '+': return operand2 + operand1;
        case '-': return operand2 - operand1;
        case '*': return operand2 * operand1;
        case '/': return operand2 / operand1;
        //case '^': return operand1^operand2;
        default : throw logic_error("Error: Invalid operator. Please try again. ");
    }
}
