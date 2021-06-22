//
//  Box.cpp
//  0716-P140
//
//  Created by Dorothy_Official on 2016. 7. 16..
//  Copyright © 2016년 Dorothy_Official. All rights reserved.
//

#include "Box.hpp" //}
using namespace std;

void Box::draw(){
    for(int n=0; n<height; n++) {
        for(int m=0; m<width; m++)  cout << fill;
        cout << endl;
    }
};
