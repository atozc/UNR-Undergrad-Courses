/**
 * @brief  CS-202 DataType class Declaration
 * @author Christos Papachristos (cpapachristos@unr.edu)
 *
 * This file contains a sample declaration for a Array-based List for the purposes
of CS-202.
 */

#ifndef ARRAYLIST_HPP_
#define ARRAYLIST_HPP_
#include "DataType.hpp"

class ArrayList{
  friend std::ostream & operator<<(std::ostream & os,      //(i)
       const ArrayList & arrayList);
  public:
    ArrayList();                                           //(1)
    ArrayList(size_t count, const DataType & value);       //(2)
    ArrayList(const ArrayList & other);                    //(3)
    ~ArrayList();                                          //(4)
    ArrayList & operator= (const ArrayList & rhs);         //(5)
    DataType * front();                                    //(6)
    DataType * back();                                     //(7)
    DataType * find(const DataType & target, DataType * & previous, const DataType * after = nullptr); //(8)
    DataType * insertAfter(DataType * target, const DataType & value); //(9)
    DataType * insertBefore(DataType * target, const DataType & value); //(10)
    DataType * erase(DataType * target);                   //(11)
    DataType & operator[] (size_t position);               //(12a)
    const DataType & operator[] (size_t position) const;   //(12b)
    size_t size() const;                                   //(13)
    bool empty() const;                                    //(14)
    void clear();                                          //(15)
  private:
    void resize(size_t count);                             //(16)
    DataType * m_array;
    size_t m_size;
    size_t m_maxsize;
};

#endif //ARRAYLIST_HPP_
