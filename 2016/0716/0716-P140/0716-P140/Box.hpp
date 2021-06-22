//
//  Box.hpp
//  0716-P140
//
//  Created by Dorothy_Official on 2016. 7. 16..
//  Copyright © 2016년 Dorothy_Official. All rights reserved.
//

#ifndef Box_hpp
#define Box_hpp

class Box {
    int width, height;
    char fill;
public:
    Box(int w, int h) { setSize(w, h); fill= '*' ; }
    void setFill(char f) { fill = f; }
    void setSize(int w, int h) { width = w, height = h; }
    void draw();

#endif /* Box_hpp */
