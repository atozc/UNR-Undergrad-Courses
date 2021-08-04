/**
 * @brief  CS-202 SmartPtr class Declaration
 * @author Christos Papachristos (cpapachristos@unr.edu)
 *
 * This file contains the declaration of a smart pointer SmartPtr class for the purposes of CS-202.
 */
 
#ifndef SMARTPTR_HPP_
#define SMARTPTR_HPP_

#include <iostream>
#include "DataType.hpp"

using namespace std;

class SmartPtr {

  public:
  
    SmartPtr( );
    SmartPtr( DataType * data );
    SmartPtr( const SmartPtr & other );
    
    ~SmartPtr( );
  
    SmartPtr & operator=( const SmartPtr & rhs );

    DataType & operator*( );
    DataType * operator->( );

  private:
    
    size_t * m_refcount;
    DataType * m_ptr;

};

#endif //SMARTPTR_H_
