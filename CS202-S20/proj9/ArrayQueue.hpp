#ifndef SCHOOL_ARRAYQUEUE_HPP
#define SCHOOL_ARRAYQUEUE_HPP

#include <iostream>
#include "DataType.hpp"

using namespace std;

const size_t ARRAY_CAPACITY = 1000;

class ArrayQueue {
    friend std::ostream &operator<<(std::ostream &os, const ArrayQueue &arrayQueue); //(i)

public:
    ArrayQueue();   //(1)
    ArrayQueue(size_t count, const DataType &value);    //(2)
    ArrayQueue(const ArrayQueue &other);    //(3)
    ~ArrayQueue();  //(4)

    ArrayQueue &operator=(const ArrayQueue &rhs);//(5)

    DataType &front();  //(6a)
    const DataType &front() const;  //(6b)
    DataType &back();   //(7a)
    const DataType &back() const;   //(7b)

    void push(const DataType &value);   //(8)
    void pop(); //(9)

    size_t size() const;    //(10)

    bool empty() const; //(11)
    bool full() const;//(12)

    void clear();//(13)

    void serialize(std::ostream &os) const; //(14)
private:
    DataType m_array[ARRAY_CAPACITY];
    size_t m_front;
    size_t m_back;
    size_t m_size;
};




#endif //SCHOOL_ARRAYQUEUE_HPP
