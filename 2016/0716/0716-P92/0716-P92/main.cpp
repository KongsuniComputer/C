//
//  main.cpp
//  0716-P92
//
//  Created by Dorothy_Official on 2016. 7. 16..
//  Copyright © 2016년 Dorothy_Official. All rights reserved.
//

#include <iostream>
#include "tower.hpp"
using namespace std;

int main() {
    Tower myTower;
    Tower seoulTower(100);
    cout << "Height is " << myTower.getHeight() << " meter" << endl;
    cout << "Height is " << seoulTower.getHeight() << " meter" << endl;
    
}
