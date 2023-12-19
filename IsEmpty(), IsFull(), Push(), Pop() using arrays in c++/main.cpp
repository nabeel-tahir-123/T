#include <iostream>
#include "UniqueStack.h"

int main() {
    UniqueStack myStack(5, "ME");  

    myStack.Push(10);
    myStack.Push(20);
    myStack.Push(30);

    std::cout << "Is stack empty? " << (myStack.IsEmpty() ? "Yes" : "No") << std::endl;
    std::cout << "Is stack full? " << (myStack.IsFull() ? "Yes" : "No") << std::endl;

    std::cout << "Popped element: " << myStack.Pop() << std::endl;
    std::cout << "Popped element: " << myStack.Pop() << std::endl;
    std::cout << "Popped element: " << myStack.Pop() << std::endl;

    std::cout << "Is stack empty? " << (myStack.IsEmpty() ? "Yes" : "No") << std::endl;
    std::cout << "Is stack full? " << (myStack.IsFull() ? "Yes" : "No") << std::endl;

    myStack.DisplayOwner(); 

    return 0;
}
