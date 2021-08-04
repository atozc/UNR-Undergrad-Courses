/**
 * @ Name: CS 202 - Project 10
 * @ Desciption: ArrayStack.h
 * @ Author: Crystal Atoz
 * @ Date Last Modified: 4/29/20
 */

#ifndef SCHOOL_ARRAYSTACK_H
#define SCHOOL_ARRAYSTACK_H

#include <iostream>

using namespace std;

template <class T, size_t ARRAY_CAPACITY = 1000>
class ArrayStack;

template <class T, size_t ARRAY_CAPACITY>
std::ostream & operator<<(std::ostream & os, const ArrayStack<T, ARRAY_CAPACITY> & stack);

template <class T, size_t ARRAY_CAPACITY>
class ArrayStack {
    friend std::ostream & operator<< <> (std::ostream & os, const ArrayStack<T, ARRAY_CAPACITY> & stack);

public:
    ArrayStack() {
        m_top = 0;
    }

    ArrayStack(size_t count, const T & value) {
        m_top = 0;
        for (int i = 0; i < count; i++) {
            push(value);
        }
    }

    ArrayStack(const ArrayStack & other) {
        size_t size = other.size();
        m_top = 0;
        for (int i = 0; i < size; i++) {
            push(other.m_container[i]);
        }
    }
    ~ArrayStack() {

    }

    ArrayStack &operator=(const ArrayStack & rhs) {
        if (this != &rhs) {
            clear();
            size_t size = rhs.size();
            for (int i = 0; i < size; i++) {
                push(rhs.m_container[i]);
            }
        }
        return *this;
    }

    T & top() {
        return m_container[m_top-1];
    }
    const T & top() const {
        return m_container[m_top-1];
    }

    void push(const T & value) {
        if (!full()) {
            m_container[m_top++] = value;
        }
    }
    void pop() {
        if (!empty()) {
            m_top--;
        }
    }

    size_t size() const {
        return m_top;
    }
    bool empty() const {
        return m_top == 0;
    }
    bool full() const {
        return size() >= ARRAY_CAPACITY;
    }
    void clear() {
        m_top = 0;
    }
    void serialize(std::ostream & os) const {
        size_t containerSize = size();
        for (int i = containerSize - 1; i >= 0; i--) {
            os << i << ": " << m_container[i];
            if (i > 0) {
                os << std::endl;
            }
        }
    }

private:
    T m_container[ARRAY_CAPACITY];
    size_t m_top;
};

template <class T, size_t ARRAY_CAPACITY>
std::ostream & operator<<(std::ostream & os, const ArrayStack<T, ARRAY_CAPACITY> & stack) {
    stack.serialize(os);
    return os;
}


#endif
