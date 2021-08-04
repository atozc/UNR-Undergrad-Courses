#include "BinarySearchTree.h"

template<class ItemType>
std::shared_ptr::BinarySearchTree<ItemType>> rootPtr{
    
};

template<class ItemType>
BinaryNode* BinarySearchTree<ItemType>::placeNode(std::shared_ptr<BinaryNode<ItemType>> subTreePtr, std::shared_ptr<BinaryNode<ItemType>> newNode){
    
    BinaryNode* tempPtr;

    if(subTreePtr == NULL) {
        return newNode;
        } else if(subTreePtr->getItem() > newNode->getItem()) {
        tempPtr = placeNode(subTreePtr->getLeftChildPtr(), newNode);
        subTreePtr->setLeftChildPtr(tempPtr);
        } else {
        tempPtr = placeNode(subTreePtr->getRightChildPtr(), newNode);
        subTreePtr->setRightChildPtr(tempPtr);
    }
    return subTreePtr;
};

template<class ItemType>
BinaryNode* BinarySearchTree<ItemType>::removeValue(std::shared_ptr<BinaryNode<ItemType>> subTreePtr, const ItemType target, bool& isSuccessful) override{
    
    BinaryNode* tempPtr;

    if(subTreePtr == NULL) {
        isSuccessful = false;
        } else if(subTreePtr->getItem() == target) {
        subTreePtr = removeNode(subTreePtr);
        isSuccessful = true;
        } else if(subTreePtr->getItem () > target) {
        tempPtr = removeValue(subTreePtr->getLeftChildPtr(), target, isSuccessful);
        subTreePtr->setLeftChildPtr(tempPtr);
        } else {
        tempPtr = removeValue(subTreePtr->getRightChildPtr(), target, isSuccessful);
        subTreePtr->setRightChildPtr(tempPtr);
    }
    return subTreePtr;
};

template<class ItemType>
BinaryNode* BinarySearchTree<ItemType>::removeNode(std::shared_ptr<BinaryNode<ItemType>> nodePtr){
    
    BinaryNode* tempPtr;
    int newNodeValue = 0;

    if(rootPtr->isLeaf()) {
        rootPtr = NULL;
        return rootPtr;
        } else if(rootPtr->getLeftChildPtr() != NULL && rootPtr->getRightChildPtr() == NULL) {
        return rootPtr->getLeftChildPtr();
        } else if(rootPtr->getRightChildPtr() != NULL && rootPtr->getLeftChildPtr() == NULL) {
        return rootPtr->getRightChildPtr();
        } else {
        tempPtr = removeLeftmostNode(rootPtr->getRightChildPtr(), newNodeValue);
        rootPtr->setRightChildPtr(tempPtr);
        rootPtr->setItem(newNodeValue);
        return rootPtr;
    }
};

template<class ItemType>
BinaryNode* BinarySearchTree<ItemType>::removeLeftmostNode(std::shared_ptr<BinaryNode<ItemType>>subTreePtr, ItemType& inorderSuccessor){
    
    BinaryNode* tempPtr;

    if(treePtr->getLeftChildPtr() == NULL) {
        inorderSuccessor = treePtr->getItem();
        return removeNode(treePtr);
        } else {
        tempPtr = removeLeftmostNode(treePtr->getLeftChildPtr(), inorderSuccessor);
        treePtr->setLeftChildPtr(tempPtr);
        return treePtr;
    }
};

template<class ItemType>
BinaryNode* BinarySearchTree<ItemType>::findNode(std::shared_ptr<BinaryNode<ItemType>> treePtr, const ItemType& target) const{
    
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
BinarySearchTree<ItemType>::BinarySearchTree(){
    
    this->rootPtr = NULL;
};

template<class ItemType>
BinarySearchTree<ItemType>::BinarySearchTree(const ItemType& rootItem){
    
    this->rootPtr = new BinaryNode(rootItem);
};

template<class ItemType>
BinarySearchTree<ItemType>::BinarySearchTree(const BinarySearchTree<ItemType>& tree){
    
    this->rootPtr = copyTree(tree.rootPtr);
};

template<class ItemType>
BinarySearchTree<ItemType>::~BinarySearchTree(){
    
    this->rootPtr = NULL;
};

template<class ItemType>
bool BinarySearchTree<ItemType>::isEmpty() const{
    
    return this->rootPtr == NULL;
};

template<class ItemType>
int BinarySearchTree<ItemType>::getHeight() const{
    
    return getHeightHelper(this->rootPtr);
};
    
template<class ItemType>
int BinarySearchTree<ItemType>::getNumberOfNodes() const{
    
    return getNumberofNodesHelper(this->rootPtr);
};
    
template<class ItemType>
ItemType BinarySearchTree<ItemType>::getRootData() const throw(PrecondViolatedExcept){
    
    return rootPtr->getItem();
};

template<class ItemType>
void BinarySearchTree<ItemType>::setRootData(const ItemType& newData){
    
    rootPtr->setItem(newData);
};
    
template<class ItemType>
bool BinarySearchTree<ItemType>::add(const ItemType& newEntry){
    
    BinaryNode* newNodePtr = new BinaryNode(newEntry);
    this->rootPtr = placeNode(rootPtr, newNodePtr);

    return true;
};
   
template<class ItemType>
bool BinarySearchTree<ItemType>::remove(const ItemType& target){
    
    bool isSuccessful = false;
    this->rootPtr = removeValue(this->rootPtr, target, isSuccessful);
    return isSuccessful;
};

template<class ItemType>
void BinarySearchTree<ItemType>::clear(){
    
    this->rootPtr = NULL;
};
    
template<class ItemType>
ItemType BinarySearchTree<ItemType>::getEntry(const ItemType& anEntry) const throw(NotFoundException){
    
    
};

template<class ItemType>
bool BinarySearchTree<ItemType>::contains(const ItemType& anEntry) const{
    
    bool doesContain = false;
    containsHelper(anEntry, this->rootPtr, doesContain);
    return doesContain;
};

template<class ItemType>
void BinarySearchTree<ItemType>::preorderTraverse(void visit(ItemType&)) const{
    
    std::cout << "----------";
    std::cout << "PREORDER: ";
    std::cout << "----------";
    preorderTraverse(rootPtr);
    std::cout << std::endl;
};

template<class ItemType>
void BinarySearchTree<ItemType>::inorderTraverse(void visit(ItemType&)) const{
    
   std::cout << "----------";
   std::cout << "INORDER: ";
   std::cout << "----------";
   inorderTraverse(rootPtr);
   std::cout << std::endl;
};

template<class ItemType>
void BinarySearchTree<ItemType>::postorderTraverse(void visit(ItemType&)) const{
    
    std::cout << "----------";
    std::cout << "POSTORDER: ";
    std::cout << "----------";
    postorderTraverse(rootPtr);
    std::cout << std::endl;
    
};

template<class ItemType>
BinarySearchTree<ItemType>::BinarySearchTree<ItemType>& operator=(const BinarySearchTree<ItemType>& rightHandSide) {
    
    
};
