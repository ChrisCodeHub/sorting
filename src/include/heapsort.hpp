#pragma once
#include <iostream>
#include <cstdint>
#include <vector>
#include <string>
#include <memory>

typedef struct aNode
{
    uint32_t item;          // value held in node
    std::unique_ptr<aNode> leftChild;        // pointer to left child node
    std::unique_ptr<aNode> rightChild;       //pointer to right child node
    std::unique_ptr<aNode> parent;           // pointer to parent
    aNode (): leftChild{nullptr}, 
            rightChild{nullptr},
            parent{nullptr}
            {};
}node;



class HeapSort {

    public:
        void shout (void);
        void heapSort (uint32_t start,uint32_t end, std::vector<uint32_t> testData);
        void heapify (std::vector<uint32_t> testData);
        void putDataIntoTree (std::vector<uint32_t> testData);

    private:
        std::unique_ptr<node> root;  // root node of the heap 

};