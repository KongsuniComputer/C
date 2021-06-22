//
//  main.cpp
//  0716-1
//
//  Created by Dorothy_Official on 2016. 7. 16..
//  Copyright © 2016년 Dorothy_Official. All rights reserved.
//

#include <iostream>
using namespace std;

#include "Circle.hpp"

int main() {
    Circle donut;
    double area = donut.getArea();
    cout << "donut 면적은 ";
    cout << area << endl;
    
    Circle pizza(30);
    area = pizza.getArea();
    cout << "pizza 면적은 ";
    cout << area << endl;
}
