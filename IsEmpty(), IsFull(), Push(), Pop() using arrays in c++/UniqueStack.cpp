#include "UniqueStack.h"
#include "iostream"
using namespace std;

UniqueStack::UniqueStack(int size, std::string name) {
    capacity = size;
    arr = new int[capacity];
    top = -1;
    ownerName = name;
}

UniqueStack::~UniqueStack() {
    delete[] arr;
}

bool UniqueStack::IsEmpty() const {
    return top == -1;
}

bool UniqueStack::IsFull() const {
    return top == capacity - 1;
}

void UniqueStack::Push(int element) {
    if (IsFull()) {
        std::cout << "Stack Overflow. Cannot push element.\n";
        return;
    }
    arr[++top] = element;
}

int UniqueStack::Pop() {
    if (IsEmpty()) {
        std::cout << "Stack Underflow. Cannot pop element.\n";
        return -1;
    }
    return arr[top--];
}

void UniqueStack::DisplayOwner() const {
    std::cout << "This stack is owned by: " << ownerName << std::endl;
}
