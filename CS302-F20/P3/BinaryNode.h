#ifndef BINARY_NODE_H_
#define BINARY_NODE_H_

#include <iostream>
#include <memory>

template<class ItemType>
class BinaryNode
{
private:
    ItemType item;                                           // Data Portion
    std::shared_ptr<BinaryNode<ItemType> > leftChildPtr;      // Pointer to the left child
    std::shared_ptr<BinaryNode<ItemType> > rightChildPtr;     // Pointer to the right child
    
public:
    BinaryNode();
    BinaryNode(const ItemType& anItem);
    BinaryNode(const ItemType& anItem,
               std::shared_ptr<BinaryNode<ItemType> > leftPtr,
               std::shared_ptr<BinaryNode<ItemType> > rightPtr);
    
    void setItem(const ItemType& anItem);
    ItemType getItem() const;
    
    bool isLeaf() const;
    
    BinaryNode* getLeftChildPtr() const;
    BinaryNode* getRightChildPtr() const;
    
    void setLeftChildPtr(std::shared_ptr<BinaryNode<ItemType> > leftPtr);
    void setRightChildPtr(std::shared_ptr<BinaryNode<ItemType> > rightPtr);

};

#include "BinaryNode.cpp"
#endif
