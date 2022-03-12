#include <iostream>
#include "stack.h"

int main()
{
    Stack<int> intStack;
    intStack.Push(10);
    intStack.Push(20);
    intStack.Push(30);
    intStack.Dump();
    int retData = -1;
    bool ret = intStack.Pop(retData);
    if(true == ret)
    {
        std::cout << "Data popped from stack : " << retData << std::endl;
    }
    intStack.Dump();
}

    
