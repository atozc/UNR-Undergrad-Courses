#include "BinaryNode.h"

template<class ItemType>
BinaryNode::ItemType item{
    
};

template<class ItemType>
std::shared_ptr::BinaryNode<ItemType> > leftChildPtr{
    
    
};

template<class ItemType>
std::shared_ptr::BinaryNode<ItemType> > rightChildPtr{
    
    
};
 
template<class ItemType>
BinaryNode<ItemType>::BinaryNode(){
    
    this->item = 0;
    this->leftChildPtr = NULL;
    this->rightChildPtr = NULL;
};

template<class ItemType>
BinaryNode<ItemType>::BinaryNode(const ItemType& anItem){
    
    this->item = anItem;
    this->leftChildPtr = NULL;
    this->rightChildPtr = NULL;
};

template<class ItemType>
BinaryNode<ItemType>::BinaryNode(const ItemType& anItem, std::shared_ptr<BinaryNode<ItemType> > leftPtr, std::shared_ptr<BinaryNode<ItemType> > rightPtr){
    
    this->item = anItem;
    this->leftChildPtr = leftPtr;
    this->rightChildPtr = rightPtr;
};
 
template<class ItemType>
void BinaryNode<ItemType>::setItem(const ItemType& anItem){
    
    this->item = anItem;
};

template<class ItemType>
ItemType BinaryNode<ItemType>::getItem() const{
   
    return this->item;
};
  
template<class ItemType>
bool BinaryNode<ItemType>::isLeaf() const{
    
    return (this->getLeftChildPtr() == NULL) && (this->getRightChildPtr() == NULL);
};
 
template<class ItemType>
BinaryNode* BinaryNode<ItemType>::getLeftChildPtr() const{
    
    return this->leftChildPtr;
};

template<class ItemType>
BinaryNode* BinaryNode<ItemType>::getRightChildPtr() const{
   
    return this->rightChildPtr;
};
   
template<class ItemType>
void BinaryNode<ItemType>::setLeftChildPtr(std::shared_ptr<BinaryNode<ItemType> > leftPtr){
   
    this->leftChildPtr = leftPtr;
};

template<class ItemType>
void BinaryNode<ItemType>::setRightChildPtr(std::shared_ptr<BinaryNode<ItemType> > rightPtr){
   
    this->rightChildPtr = rightPtr;
};

