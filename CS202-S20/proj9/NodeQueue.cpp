#include <iostream>
#include "NodeQueue.hpp"

using namespace std;

// Default constructor for NodeQueue

NodeQueue::NodeQueue() {
    m_front = NULL;
    m_back = NULL;
}

//Parameterized constructor for NodeQueue

NodeQueue::NodeQueue(size_t size, const DataType &value) {
    m_front = NULL;
    m_back = NULL;
    for (int i = 0; i < size; i++) {
        push(value);
    }
}

// Copy constructor for NodeQueue

NodeQueue::NodeQueue(const NodeQueue &other) {
    Node * curr = other.m_front;
    m_front = NULL;
    m_back = NULL;
    while (curr) {
        push(curr->getData());
        curr = curr->m_next;
    }
}

// Destructor for NodeQueue
 
NodeQueue::~NodeQueue() {
    Node *curr = m_front;
    Node *next = NULL;

    while (curr) {
        next = curr->m_next;
        delete curr;
        curr = next;
    }
}

// Assignment operator overload for NodeQueue

NodeQueue &NodeQueue::operator=(const NodeQueue &rhs) {
    if (this != &rhs) {
        clear();
        Node * curr = rhs.m_front;
        m_front = NULL;
        m_back = NULL;
        while (curr) {
            push(curr->getData());
            curr = curr->m_next;
        }
    }
    return *this;
}

DataType &NodeQueue::front() {
    return m_front->getData();
}

const DataType &NodeQueue::front() const {
    return m_front->getData();
}

DataType &NodeQueue::back() {
    return m_back->getData();
}

const DataType &NodeQueue::back() const {
    return m_back->getData();
}

void NodeQueue::push(const DataType &value) {
    Node * newNode = new Node(value);
    if (empty()) {
        m_front = newNode;
        m_back = newNode;
        return;
    }
    m_back->m_next = newNode;
    m_back = newNode;
}

void NodeQueue::pop() {
    if (size() == 1) {
        clear();
    } else if (!empty()) {
        Node * tempFront = m_front;
        m_front = m_front->m_next;
        delete tempFront;
    }
}

size_t NodeQueue::size() const {
    Node * curr = m_front;
    size_t i = 0;
    while (curr) {
        i++;
        curr = curr->m_next;
    }
    return i;
}

bool NodeQueue::empty() const {
    return m_front == NULL;
}

bool NodeQueue::full() const {
    return false;
}

void NodeQueue::clear() {
    Node * curr = m_front;
    Node * tempNode = NULL;
    while (curr) {
        tempNode = curr;
        curr = curr->m_next;
        delete tempNode;
    }
    m_front = NULL;
    m_back = NULL;
}

void NodeQueue::serialize(std::ostream &os) const {
    Node *curr = m_front;
    int i = 0;
    while (curr) {
        os << i << ": " << curr->getData();
        if (curr->m_next) {
            os << std::endl;
        }
        curr = curr->m_next;
        i++;
    }
}

std::ostream &operator<<(std::ostream &os, const NodeQueue &nodeQueue) {
    nodeQueue.serialize(os);
    return os;
}
