#include "BinarySearchTree.h"
#include "BinaryNodeTree.h"

#include <iostream>
#include <fstream>
#include <string>

const int NUM_VALUES = 100;
const int MIN_VALUE = 1;
const int MAX_VALUE = 200;

int randomNumbers(const int min, const int max);

int main() {
    BinarySearchTree<int> bst;
    int num;

    std::ofstream outfile;
    std::string filename = "randomlyGeneratedNumbers.txt";
    outfile.open(filename);

    srand(time(NULL));
    for (int i = 0; i < NUM_VALUES; i++) {
        num = randomNumbers(MIN_VALUE, MAX_VALUE);
        outfile << num << std::endl;
        bst.add(num);
    }

    std::cout << "HEIGHT: " << bst.getHeight() << std::endl;
    bst.preorderTraverse();
    bst.inorderTraverse();
    bst.postorderTraverse();

    return 0;
}

int randomNumbers(const int min, const int max) {
    int difference = max - min;
    return (rand() % difference) + min;
}
