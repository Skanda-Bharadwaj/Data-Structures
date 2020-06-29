//
//  stack.hpp
//  stackLinkedList
//
//  Created by Skanda Bharadwaj on 22/06/20.
//  Copyright © 2020 Skanda Bharadwaj. All rights reserved.
//

#ifndef stack_hpp
#define stack_hpp

#include <iostream>
#include <assert.h>

template <class T>
class Stack{

    struct StackNode{
        T data;
        StackNode* next;
    };
    StackNode* top;
    
public:
    Stack()
        :top(nullptr){
    };
    
    void pop();
    T peek();
    bool isEmpty();
    void push(T x);
    void displaceStack();
};

template <class T>
void Stack<T>::pop(){
    if (top == nullptr) return;
    
    StackNode* temp = new StackNode;
    temp = top;
    top = top->next;
    
    delete temp;
}

template <class T>
T Stack<T>::peek(){
    assert(top != nullptr);
    return top->data;
}

template <class T>
bool Stack<T>::isEmpty(){
    return (top == nullptr);
}

template <class T>
void Stack<T>::push(T x){
    StackNode* temp = new StackNode;
    temp->data = x;
    temp->next = top;
    top = temp;
}


template <class T>
void Stack<T>::displaceStack(){
    if(top == nullptr)
        std::cout << "Stack is empty";
    
    StackNode* temp = new StackNode;
    temp = top;
    while(temp != nullptr){
        std::cout << temp->data << " -> ";
        temp = temp->next;
    }
    std::cout << '\n';
    
    delete temp;
}

#endif /* stack_hpp */
