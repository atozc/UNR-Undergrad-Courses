/**
 * @brief  CS-202 DataType class Declaration
 * @author Christos Papachristos (cpapachristos@unr.edu)
 *
 * This file contains a sample declaration for a Node-based Forward List for the
purposes of CS-202.
 */

#ifndef NODELIST_HPP_
#define NODELIST_HPP_
#include "DataType.hpp"

class Node{
  friend class NodeList;  //allows direct accessing of link and data from class NodeList
  public:
    Node() :
  m_next( nullptr )
{
}
Node(const DataType & data, Node * next = nullptr) :
  m_next( next ),
  m_data( data )
{
}
Node(const Node & other) :
  m_next( other.m_next ),
  m_data( other.m_data )
{
}
    DataType & data(){  //gets non-const reference, can be used to modify value of underlying data
      //return const_cast<DataType &>(static_cast<const Node &>(*this).getData());
//an alternative implementation, just for studying reference
  return m_data;
    }
    const DataType & data() const{  //gets const reference, can be used to access value of underlying data
      return m_data;
    }
  private:
    Node * m_next;
    DataType m_data;
};
class NodeList{
  friend std::ostream & operator<<(std::ostream & os, const NodeList & nodeList); //(i)
  public:
    NodeList();                                              //(1)
    NodeList(size_t count, const DataType & value);          //(2)
    NodeList(const NodeList & other);                        //(3)
    ~NodeList();                                             //(4)
    NodeList & operator= (const NodeList & rhs);             //(5)
    Node * front();                                          //(6)
    Node * back();                                           //(7)
    Node * find(const DataType & target, Node * & previous, const Node * after = nullptr); //(8)
    Node * insertAfter(Node * target, const DataType & value); //(9)
    Node * insertBefore(Node * target, const DataType & value); //(10)
    Node * erase(Node * target);                             //(11)
    DataType & operator[] (size_t position);                 //(12a)
    const DataType & operator[] (size_t position) const;     //(12b)
    size_t size() const;                                    //(13)
    bool empty() const;                                     //(14)
    void clear();                                           //(15)
  private:
    Node * m_head;
};

#endif //NODELIST_HPP_


