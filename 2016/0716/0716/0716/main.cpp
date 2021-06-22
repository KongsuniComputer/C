//
//  main.cpp
//  0716
//
//  Created by Dorothy_Official on 2016. 7. 16..
//  Copyright © 2016년 Dorothy_Official. All rights reserved.
//


/**P89
#include <iostream>
using namespace std;

class Circle {
public:
    int radius;
    
    Circle();
    Circle(int r);
    ~Circle(); //소멸자
    double getArea();
};

Circle::Circle(){
    radius = 1;
    cout << "반지름" << radius << " 원 생성" << endl;
}

Circle::Circle(int r){
    radius = r;
    cout << "반지름" << radius << " 원 생성" << endl;
}

Circle::~Circle(){
    cout << "반지름" << radius << " 원 소멸" << endl;
}

double Circle::getArea()
{
    return 3.14*radius*radius;
}

int main(){
    Circle donut;
    Circle pizza(30);
    
    return 0;
}
**/

/** P89 유사
#include <iostream>
using namespace std;

class PrivateAccessError {
private:
    int a;
    void f();
    PrivateAccessError();
public:
    int b;
    PrivateAccessError(int x);
    void g();
};

PrivateAccessError::PrivateAccessError(){
    a = 1;
    b = 1;
}

PrivateAccessError::PrivateAccessError(int x){
    a = x;
    b = x;
}

void PrivateAccessError::f() {
    a = 5;
    b = 5;
}

void PrivateAccessError::g() {
    a = 6;
    b = 6;
}

int main() {
    PrivateAccessError objA;
    PrivateAccessError objB(100);
    objB.a = 10;
    objB.b = 20;
    objB.f();
    objB.g();
}

 **/


