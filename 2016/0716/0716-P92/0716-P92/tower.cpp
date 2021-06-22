//
//  tower.cpp
//  0716-P92
//
//  Created by Dorothy_Official on 2016. 7. 16..
//  Copyright © 2016년 Dorothy_Official. All rights reserved.
//

#include "tower.hpp"

Tower::Tower(){
    height = 1;
}

Tower::Tower(int _height){
    height = _height;
}

int Tower::getHeight()
{
    return height;

}

