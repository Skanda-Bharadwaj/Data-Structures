//
//  main.cpp
//  stackLinkedList
//
//  Created by Skanda Bharadwaj on 22/06/20.
//  Copyright © 2020 Skanda Bharadwaj. All rights reserved.
//

#include "stack.hpp"

int main() {
    
    Stack<int> s;
    
    std::cout << s.isEmpty() << '\n';
    
    s.push(5);
    s.push(10);
    s.push(11);
    s.push(13);
    
    std::cout << s.peek() << '\n';
    std::cout << s.isEmpty() << '\n';
    
    s.displaceStack();
    
    s.pop();
    s.pop();
    
    s.displaceStack();
    
//***********************************************
    
    Stack<float> t;
    
    std::cout << t.isEmpty() << '\n';
    
    t.push(5.11232);
    t.push(10.2);
    t.push(11.5);
    t.push(13.6);
    
    std::cout << t.peek() << '\n';
    std::cout << t.isEmpty() << '\n';
    
    t.displaceStack();
    
    t.pop();
    t.pop();
    
    t.displaceStack();
    return 0;
}
