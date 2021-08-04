/**
 * @ Name: CS 202 - Project X
 * @ Desciption: SmartPtr.cpp
 * @ Author: Crystal Atoz
 * @ Date Last Modified: 4/6/20
 */

#include <iostream>
#include "DataType.hpp"
#include "SmartPtr.hpp"

using namespace std;


SmartPtr::SmartPtr() {
    try {
        m_ptr = new DataType;
        m_refcount = new size_t;
        *m_refcount = 1;
    } catch (std::bad_alloc &e) {
        e.what();
    }
    std::cout << "SmartPtr Default Constructor for new allocation, RefCount = " << *m_refcount << std::endl;
}

SmartPtr::SmartPtr(DataType *data) {
    try {
        m_refcount = new size_t;
    } catch (std::bad_alloc &e) {
        e.what();
    }
    m_ptr = data;
    if (data) {
        *m_refcount = 1;
    } else {
        *m_refcount = 0;
    }
    std::cout << "SmartPtr  Parametrized  Constructor  from data pointer, RefCount = " << *m_refcount << std::endl;
}

SmartPtr::SmartPtr(const SmartPtr &other) {
    if (other.m_ptr) {
        m_refcount = other.m_refcount;
        (*m_refcount)++;
    } else {
        try {
            m_refcount = new size_t;
            *m_refcount = 0;
        } catch (std::bad_alloc &e) {
            e.what();
        }
    }
    m_ptr = other.m_ptr;
    std::cout << "SmartPtr  Copy  Constructor,  RefCount = " << *m_refcount << std::endl;
}

SmartPtr::~SmartPtr() {
    (*m_refcount)--;
    std::cout << "SmartPtr  Destructor,  RefCount = " << *m_refcount << std::endl;
    if (*m_refcount <= 0) {
        delete m_ptr;
        delete m_refcount;
    }
}

SmartPtr &SmartPtr::operator=(const SmartPtr &rhs) {
    if (this != &rhs) {
        if (--(*m_refcount) <= 0) {
            delete m_ptr;
            delete m_refcount;
        }
        if (rhs.m_ptr) {
            m_refcount = rhs.m_refcount;
            (*m_refcount)++;
        } else {
            try {
                m_refcount = new size_t;
                *m_refcount = 0;
            } catch (std::bad_alloc &e) {
                e.what();
            }
        }
        m_ptr = rhs.m_ptr;
    }
    std::cout << "SmartPtr  Copy  Assignment,  RefCount = " << *m_refcount << std::endl;
    return *this;
}

DataType &SmartPtr::operator*() {
    return *m_ptr;
}

DataType *SmartPtr::operator->() {
    return m_ptr;
}
