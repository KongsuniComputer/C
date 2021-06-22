//
//  Circle.cpp
//  0716-1
//
//  Created by Dorothy_Official on 2016. 7. 16..
//  Copyright © 2016년 Dorothy_Official. All rights reserved.
//

#include "Circle.hpp"
#include <iostream>
using namespace std;

Circle::Circle(){
    radius = 1;
    cout << "반지름 " << radius;
    cout << "원 생성 " << endl;
}

Circle::Circle(int r){
    radius = r;
    cout << "반지름 " << radius;
    cout << "원 생성 " << endl;
}

double Circle::getArea() {
    return 3.14*radius*radius;
}