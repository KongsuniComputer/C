//
//  main.cpp
//  0716-P140
//
//  Created by Dorothy_Official on 2016. 7. 16..
//  Copyright © 2016년 Dorothy_Official. All rights reserved.
//

#include <iostream>
#include "Box.hpp"

int main() {
    Box b(10, 2);
    b.draw();
    std::cout << std::endl;
    b.setSize(7, 4);
    b.setFill('^');
    b.draw();
    
}