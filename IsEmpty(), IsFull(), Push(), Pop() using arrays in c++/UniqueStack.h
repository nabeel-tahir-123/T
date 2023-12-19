#ifndef UNIQUE_STACK_H
#define UNIQUE_STACK_H
#include "iostream"
using namespace std;

class UniqueStack {
private:
    int* arr;
    int top;
    int capacity;
    std::string ownerName;  

public:
    UniqueStack(int size, std::string name);  
    ~UniqueStack();                          

    bool IsEmpty() const;
    bool IsFull() const;
    void Push(int element);
    int Pop();
    void DisplayOwner() const; 
};

#endif
