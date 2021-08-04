#include <iostream>
#include "ArrayQueue.hpp"

using namespace std;

// Default constructor for NodeQueue

ArrayQueue::ArrayQueue() {
    m_front = 0;
    m_back = 0;
    m_size = 0;
}

// Parameterized constructor for NodeQueue

ArrayQueue::ArrayQueue(size_t count, const DataType &value) {
    m_front = 0;
    m_back = 0;
    m_size = 0;

    for (int i = 0; i < count; i++) {
        push(value);
    }
}

// Copy constructor for NodeQueue
 
ArrayQueue::ArrayQueue(const ArrayQueue &other) {
    m_front = other.m_front;
    m_back = other.m_front;
    m_size = 0;
    for (int i = 0; i < other.m_size; i++) {
        push(other.m_array[i + other.m_front]);
    }
}

// Destructor for NodeQueue
ArrayQueue::~ArrayQueue() {
    
}

// Assignment operator overload for NodeQueue

ArrayQueue &ArrayQueue::operator=(const ArrayQueue &rhs) {
    if (this != &rhs) {
        clear();
        m_front = rhs.m_front;
        m_back = rhs.m_front;
        m_size = 0;
        for (int i = 0; i < rhs.m_size; i++) {
            push(rhs.m_array[i + rhs.m_front]);
        }
    }
    return *this;
}

DataType &ArrayQueue::front() {
    return m_array[m_front];
}

const DataType &ArrayQueue::front() const {
    return m_array[m_front];
}

DataType &ArrayQueue::back() {
    return m_array[m_back];
}

const DataType &ArrayQueue::back() const {
    return m_array[m_back];
}

void ArrayQueue::push(const DataType &value) {
    if (m_size != ARRAY_CAPACITY) {
        if (!empty()) {
            m_back = (m_back + 1) % ARRAY_CAPACITY;
        }
        m_array[m_back] = value;
        m_size++;
    }
}

void ArrayQueue::pop() {
    if (!empty()) {
        m_front = (m_front + 1) % ARRAY_CAPACITY;
        m_size--;
    }
}

size_t ArrayQueue::size() const {
    return 0;
}

bool ArrayQueue::empty() const {
    return m_size == 0;
}

bool ArrayQueue::full() const {
    return m_size == ARRAY_CAPACITY;
}

void ArrayQueue::clear() {
    m_front = 0;
    m_back = 0;
    m_size = 0;
}

void ArrayQueue::serialize(std::ostream &os) const {
    for (int i = 0; i < m_size; i++) {
        os << i << ": " << m_array[i + m_front];
        if (i != m_size - 1) {
            os << std::endl;
        }
    }
}

std::ostream &operator<<(std::ostream &os, const ArrayQueue &arrayQueue) {
    arrayQueue.serialize(os);
    return os;
}
