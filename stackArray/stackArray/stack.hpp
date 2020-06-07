//
//  stack.hpp
//  stackArray
//
//  Created by Skanda Bharadwaj on 07/06/20.
//  Copyright © 2020 Skanda Bharadwaj. All rights reserved.
//

#ifndef stack_hpp
#define stack_hpp
#define MAX_CAPACITY 100

#include <iostream>

template <class T>
class Stack{
private:
    int top;
    
public:
    T a[MAX_CAPACITY];
    
    Stack()
        :top(-1){
    };
    
    T pop();
    T peek();
    bool isEmpty();
    bool push(T x);
};

template <class T>
T Stack<T>::pop(){
    if(isEmpty()){
        std::cout << "\nStack Empty\n";
        return 0;
    }
    else{
        T x = a[top--];
        std::cout << "\nPopped value = " << x << '\n';
        return x;
    }
}

template <class T>
T Stack<T>::peek(){
    if(isEmpty()){
        std::cout << "\nStack Empty\n";
        return 0;
    }
    else{
        T x = a[top];
        std::cout << "\nTop of the Stack = " << x << '\n';
        return x;
    }
        
}

template <class T>
bool Stack<T>::isEmpty(){
    return (top < 0);
}

template <class T>
bool Stack<T>::push(T x){
    if(top < MAX_CAPACITY-1){
        a[++top] = x;
        std::cout << "\nPushed value = " << x << '\n';
        return true;
    }
    else{
        std::cout << "\nStack Overflow\n";
        return false;
    }
}

#endif /* stack_hpp */
