#ifndef NOT_FOUND_EXCEPTION_
#define NOT_FOUND_EXCEPTION_

#include <iostream> 
#include <stdexcept>
#include <string>

class NotFoundException: public std::logic_error
{
public:
    NotFoundException(const std::string& message = " ");
    
};

#endif

