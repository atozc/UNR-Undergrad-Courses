#ifndef BINARY_NODE_TREE_
#define BINARY_NODE_TREE_

#include "BinaryTreeInterface.h"
#include "BinaryNode.h"
#include "PrecondViolatedExcept.h"
#include "NotFoundException.h"

#include <memory>

template<class ItemType>
class BinaryNodeTree: public BinaryTreeInterface<ItemType>
{
private:
    
    std::shared_ptr<BinaryNode<ItemType> > rootPtr;
    
protected:
    // PROTECTED UTILITY METHODS SECTION: RECURSIVE HELPER METHODS FOR THE PUBLIC METHODS
    
    int getHeightHelper(std::shared_ptr<BinaryNode<ItemType> > subTreePtr) const;
    int getNumberOfNodesHelper(std::shared_ptr<BinaryNode<ItemType> > subTreePtr) const;
    
    // Recursively adds a new node to the tree in a left/right fashion to keep tree balanced
    balancedAdd(std::shared_ptr<BinaryNode<ItemType> > subTreePtr, std::shared_ptr<BinaryNode<ItemType> > newNodePtr);
    
    // Removes the target value from the tree
    virtual removeValue(std::shared_ptr<BinaryNode<ItemType> > subTreePtr, const ItemTypetarget, bool& isSuccessful);
   
    // Copies values up the tree to overwrite value in current node until a leaf is reached.
    // the leaf is then removed, since its value is stored in the parent.
    moveValuesUpTree(std::shared_ptr<BinaryNode<ItemType> > subTreePtr);
   
    // Recursively searches for target value.
    virtual findNode(std::shared_ptr<BinaryNode<ItemType> > treePtr,constItemType& target, bool& isSuccessful) const;
   
    // Copies the tree rooted at treePtrand returns a pointer to the root of the copy
    copyTree(const std::shared_ptr<BinaryNode<ItemType> > oldTreeRootPtr) const;
   
    // Recursively deletes all nodes from the tree
    void destroyTree(std::shared_ptr<BinaryNode<ItemType> > subTreePtr);
    
    // Recursive traversal helper methods
    void preorder(void visit(ItemType&), std::shared_ptr<BinaryNode<ItemType> > treePtr) const;
    void inorder(void visit(ItemType&), std::shared_ptr<BinaryNode<ItemType> > treePtr) const;
    void postorder(void visit(ItemType&), std::shared_ptr<BinaryNode<ItemType> > treePtr) const;

public:
    // CONSTRUCTOR AND DESTRUCTOR SECTION
    
    BinaryNodeTree();
    BinaryNodeTree(const ItemType& rootItem);
    BinaryNodeTree(const ItemType& rootItem,
                   const std::shared_ptr<BinaryNodeTree<ItemType> > leftTreePtr,
                   const std::shared_ptr<BinaryNodeTree<ItemType> > rightTreePtr);
    BinaryNodeTree(const std::shared_ptr<BinaryNodeTree<ItemType> >& tree);
    virtual~BinaryNodeTree()

    // PUBLIC BINARY_TREE_INTERFACE METHODS SECTION
    bool isEmpty() const;
    int getHeight() const;
    int getNumberOfNodes() const;
    ItemType getRootData() const throw(PrecondViolatedExcept);
    bool add(const ItemType& newData); // Adds an item to the tree
    bool remove(const ItemType& data); // Removes specified item from the tree
    void clear();
    ItemType getEntry(const ItemType& anEntry)const throw(NotFoundException);
    bool contains(const ItemType& anEntry) const;

    // PUBLIC TRAVERSAL SECTION
    void preorderTraverse(void visit(ItemType&)) const;
    void inorderTraverse(void visit(ItemType&)) const;
    void postorderTraverse(void visit(ItemType&)) const;
    
    // OVERLOADED OPERATOR SECTION
    BinaryNodeTree& operator = (const BinaryNodeTree& rightHandSide);
    
};

#include "BinaryNodeTree.cpp"
#endif
