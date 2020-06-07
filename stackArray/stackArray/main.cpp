//
//  main.cpp
//  stackArray
//
//  Created by Skanda Bharadwaj on 07/06/20.
//  Copyright © 2020 Skanda Bharadwaj. All rights reserved.
//

#include "stack.hpp"

int main()
{
    Stack<int> sInt;
    
    sInt.pop();
    sInt.peek();
    
    sInt.push(10);
    sInt.push(20);
    sInt.push(30);
    
    sInt.pop();
        
    Stack<double> sDouble;
    
    sDouble.pop();
    sDouble.peek();
    
    sDouble.push(10.32);
    sDouble.push(20.11);
    sDouble.push(30.7);
    
    sDouble.pop();
    sDouble.peek();
    return 0;
}
