//-----------------------------------------
//
//    delimiters.cpp
//
//-----------------------------------------

#include <iostream>
#include "config.h"

#if LAB6_TEST1
#   include "StackLinked.cpp"
#else
#   include "StackArray.cpp"
#endif

//------------------------------------------

bool delimitersOK ( const string &expression );

//------------------------------------------

int main()
{
    string inputLine;            // Input line
    char ch;                     // Holding pen for input chars
    
    cout << "This program checks for properly matched delimiters." << endl;
    
    while( cin )
    {
        cout << "Enter delimited espression ( <EOF> to quit) : " << endl;
        
        // Read in one line
        inputLine = "";
        cin.get(ch);
        while( cin && ch != '\n' )
        {
            inputLine = inputLine + ch;
            cin.get(ch);
        }
        
        if( ! cin )
        {            // Reached EOF: stop processing
            break;
        }
        if ( delimitersOK (inputLine) )
        {
            cout << "Valid" << endl;

        } else
        {
            cout << "Invalid" << endl;
        }
        return 0;
    }
    
    std::cout << "1. [(<>)]{} " << (delimitersOK("[(<>)]{}") ? "Valid" : "Invalid") << std::endl;
       std::cout << "2. () " << (delimitersOK("()") ? "Valid" : "Invalid") << std::endl;
       std::cout << "3. { " << (delimitersOK("{") ? "Valid" : "Invalid") << std::endl;
       std::cout << "4. (<)> " << (delimitersOK("(<)>") ? "Valid" : "Invalid") << std::endl;
       std::cout << "5. ({})) " << (delimitersOK("({}))") ? "Valid" : "Invalid") << std::endl;

       return 0;
}

bool delimitersOK ( const string &expression ) {
StackLinked<char> stack;
try {
    for (int i = 0, len = expression.length(); i < len; i++) {
        switch (expression[i]) {
            case '(':
            case '{':
            case '<':
            case '[': stack.push(expression[i]); break;
            case ')': if (stack.pop() != '(') {return false;}; break;
            case '}': if (stack.pop() != '{') {return false;}; break;
            case '>': if (stack.pop() != '<') {return false;}; break;
            case ']': if (stack.pop() != '[') {return false;}; break;
        }
    }
    return stack.isEmpty();
} catch (logic_error) {
    return false;
}
}

