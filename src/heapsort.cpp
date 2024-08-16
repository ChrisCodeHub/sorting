#include <iostream>
#include <cstdint>
#include <vector>
#include "heapsort.hpp"



void HeapSort::shout (void)
{
    std::cout << " Hello from the HeapSort.... I sort heaps " << std::endl;
}

void HeapSort::heapSort (uint32_t start,uint32_t end, std::vector<uint32_t> testData)
{

}

void HeapSort::heapify (std::vector<uint32_t> testData)
{

}

void createNextNode(std::vector<uint32_t> testData)
{
    std::unique_ptr<aNode> node = std::make_unique<aNode>();
    node->item = testData[0];
    node->leftChild = std::make_unique<aNode>();
    node->leftChild->item = testData[1];
    node->rightChild = std::make_unique<aNode>();
    node->rightChild->item = testData[2];
    

}
// this puts the data in testData into a BinaryTree, starting at root
// then heapifies the data
void HeapSort::putDataIntoTree (std::vector<uint32_t> testData)
{
    root = std::make_unique<node>();
    root->item = testData[0];
    for (auto data = (testData.begin() + 1); data < testData.end();   data++)
    {
        

    }
}
