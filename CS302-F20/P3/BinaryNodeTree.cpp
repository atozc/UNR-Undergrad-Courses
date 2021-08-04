#include "BinaryNodeTree.h"

template<class ItemType>
BinaryNodeTree<ItemType>::std::shared_ptr > rootPtr{
    
};

template<class ItemType>
int BinaryNodeTree<ItemType>::getHeightHelper(std::shared_ptr<BinaryNode<ItemType> > subTreePtr) const{
    
    if (subtTreePtr == nullptr) {
        return 0;
    }else{
        return 1 + max(getHeightHelper(subTreePtr->getLeftChildPtr()),
                       getHeightHelper(subTreePtr->getRightChildPtr()));
    }
};

template<class ItemType>
int BinaryNodeTree<ItemType>::getNumberOfNodesHelper(std::shared_ptr<BinaryNode<ItemType> > subTreePtr) const{
    
    if(subTreePtr == nullptr) {
        return 0;
    }else{
        return 1 + getNumberOfNodesHelper(subTreePtr->getLeftChildPtr()) + getNumberOfNodesHelper(subTreePtr->getRightChildPtr());
    }
};
 
template<class ItemType>
BinaryNodeTree<ItemType>::balancedAdd(std::shared_ptr<BinaryNode<ItemType> > subTreePtr, std::shared_ptr<BinaryNode<ItemType> > newNodePtr){
    
    if (subTreePtr ==nullptr) {
        return newNodePtr;
    }else{
        Binary* leftPtr = subTreePtr->getLeftChildPtr();
        Binary* rightPtr = subTreePtr->getRightChildPtr();
        
        if (getHeightHelper(leftPtr) > getHeightHelper(rightPtr)) {
            rightPtr = balancedAdd(rightPtr, newNodePtr);
            subTreePtr-> setRightChildPtr(rightPtr);
        } else {
            leftPtr= balancedAdd(leftPtr, newNodePtr);
            subTreePtr->setLeftChild(leftPtr);
        }
    }
};

template<class ItemType>
BinaryNodeTree<ItemType>::removeValue(std::shared_ptr<BinaryNode<ItemType> > subTreePtr, const ItemTypetarget, bool& isSuccessful){
    
    if(subTreePtr == nullptr){ // Value not in tree
        success = false;
        return nullptr;
    }
    else if(subTreePtr->getItem() == target){ // Value found
        subTreePtr = removeNode(subTreePtr);
        success = true;
        return subTreePtr;
    }
    else if(subTreePtr->getItem() > target){ // Value is greater than current node
        BinaryNode* tempPtr = removeValue(subTreePtr->getLeftChildPtr(), target, success);
        subTreePtr->setLeftChildPtr(tempPtr);
        return subTreePtr;
    }
    else{ // Value is less than current node
        BinaryNode* tempPtr = removeValue(subTreePtr->getRightChildPtr(), target, success);
        subTreePtr->setRightChildPtr(tempPtr);
        return subTreePtr;
    }
};
  
template<class ItemType>
BinaryNodeTree<ItemType>::moveValuesUpTree(std::shared_ptr<BinaryNode<ItemType> > subTreePtr){
    
    if(subTreePtr == nullptr){ // Value not in tree
           success = false;
           return nullptr;
       }
       else if(subTreePtr->getItem() == target){ // Value found
           subTreePtr = removeNode(subTreePtr);
           success = true;
           return subTreePtr;
       }
       else if(subTreePtr->getItem() > target){ // Value is greater than current node
           BinaryNode* tempPtr = removeValue(subTreePtr->getLeftChildPtr(), target, success);
           subTreePtr->setLeftChildPtr(tempPtr);
           return subTreePtr;
       }
       else{ // Value is less than current node
           BinaryNode* tempPtr = removeValue(subTreePtr->getRightChildPtr(), target, success);
           subTreePtr->setRightChildPtr(tempPtr);
           return subTreePtr;
       }
};
   
template<class ItemType>
BinaryNodeTree<ItemType>::findNode(std::shared_ptr<BinaryNode<ItemType> > treePtr,constItemType& target, bool& isSuccessful) const{
    
    if(treePtr == NULL) {
           return NULL;
           } else if(treePtr->getItem() == target) {
           return treePtr;
           } else if(treePtr->getItem() > target) {
           return findNode(treePtr->getLeftChildPtr(), target);
           } else {
           return findNode(treePtr->getRightChildPtr(), target);
       }
};
   
template<class ItemType>
BinaryNodeTree<ItemType>::copyTree(const std::shared_ptr<BinaryNode<ItemType> > oldTreeRootPtr) const{
    
    
};
 
template<class ItemType>
void BinaryNodeTree<ItemType>::destroyTree(std::shared_ptr<BinaryNode<ItemType> > subTreePtr){
    
    if (subTreePtr != nullptr) {
        destroyTree(subTreePtr->getLeftChildPtr());
        destroyTree(subTreePtr->getRighttChildPtr());
        subTreePtr.reset();
    }
};
  
template<class ItemType>
void BinaryNodeTree<ItemType>::preorder(void visit(ItemType&), std::shared_ptr<BinaryNode<ItemType>> treePtr) const{
    
    if(treePtr != nullptr){
    int theItem = treePtr->getItem();
    visit(theItem);
    preorder(visit, treePtr->getLeftChildPtr());
    preorder(visit, treePtr->getRightChildPtr());
};

template<class ItemType>
void BinaryNodeTree<ItemType>::inorder(void visit(ItemType&), std::shared_ptr<BinaryNode<ItemType>> treePtr) const{
        
        if(treePtr != nullptr){
            inorder(visit, treePtr->getLeftChildPtr());
            int theItem = treePtr->getItem();
            visit(theItem);
            inorder(visit, treePtr->getRightChildPtr());
        }
};

template<class ItemType>
void BinaryNodeTree<ItemType>::postorder(void visit(ItemType&), std::shared_ptr<BinaryNode<ItemType>> treePtr) const{
        
        if(treePtr != nullptr){
            postorder(visit, treePtr->getLeftChildPtr());
            postorder(visit, treePtr->getRightChildPtr());
            int theItem = treePtr->getItem();
            visit(theItem);
        }
};

template<class ItemType>
BinaryNodeTree<ItemType>::BinaryNodeTree() : rootPtr(nullptr){
    
    
};

template<class ItemType>
BinaryNodeTree<ItemType>::BinaryNodeTree(const ItemType& rootItem) : rootPtr(std::make_shared<BinaryNode<ItemType>>(rootItem, nullptr, nullptr)){
    
    
};

template<class ItemType>
BinaryNodeTree<ItemType>::BinaryNodeTree<ItemType>::BinaryNodeTree(const ItemType& rootItem,
            const std::shared_ptr<BinaryNodeTree<ItemType> > leftTreePtr, const std::shared_ptr<BinaryNodeTree<ItemType> > rightTreePtr) : rootPtr(std::make_shared<BinaryNode<ItemType> >(rootItem, copyTree(leftTreePtr->rootPtr),
                                                                                                                copyTree(rightTreePtr->rootPtr))){
    
};

template<class ItemType>
    BinaryNodeTree<ItemType>::BinaryNodeTree(const std::shared_ptr<BinaryNodeTree<ItemType> >& tree){
        
    };

template<class ItemType>
virtual ~BinaryNodeTree() {
    
    destroyTree(rootPtr);
};

template<class ItemType>
bool BinaryNodeTree<ItemType>::isEmpty() const{
        
    return rootPtr == nullptr;
};

template<class ItemType>
int BinaryNodeTree<ItemType>::getHeight() const{
    
    return getHeightHelper(rootPtr);
};

template<class ItemType>
int BinaryNodeTree<ItemType>::getNumberOfNodes() const{
    
    return getNumberOfNodesHelper(rootPtr);
};

template<class ItemType>
ItemType BinaryNodeTree<ItemType>::getRootData() const throw(PrecondViolatedExcept){
        
        return rootPtr->getItem();
};

template<class ItemType>
bool BinaryNodeTree<ItemType>::add(const ItemType& newData){
    
    auto newNodePtr= std::make_shared<BinaryNode<ItemType> >(newData);
    rootPtr = balancedAdd(rootPtr, newNodePtr);
    return true;
};

template<class ItemType>
bool BinaryNodeTree<ItemType>::remove(const ItemType& data){
        
    bool success = false;
    rootPtr = removeValue(rootPtr, data, success);
    return success;
};

template<class ItemType>
void BinaryNodeTree<ItemType>::clear(){
        
    destroyTree(rootPtr);
};

template<class ItemType>
ItemType getEntry(const ItemType& anEntry)const throw(NotFoundException){
        
        
};

template<class ItemType>
bool BinaryNodeTree<ItemType>::contains(const ItemType& anEntry) const{
        
    bool doesContain = false;
    containsHelper(anEntry, this->rootPtr, doesContain);
    return doesContain;
};

template<class ItemType>
void BinaryNodeTree<ItemType>::preorderTraverse(void visit(ItemType&)) const{
    
    preorder(visit, rootPtr);
};

template<class ItemType>
void BinaryNodeTree<ItemType>::inorderTraverse(void visit(ItemType&)) const{
        
    inorder(visit, rootPtr);
};

template<class ItemType>
void BinaryNodeTree<ItemType>::postorderTraverse(void visit(ItemType&)) const{
        
    postorder(visit, rootPtr);
};
    
template<class ItemType>
    BinaryNodeTree& operator = (const BinaryNodeTree& rightHandSide){
        
        
};
