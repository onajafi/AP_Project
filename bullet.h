//
// Created by dot_blue on 02/02/17.
//

#ifndef AP_PROJECT_BULLET_H
#define AP_PROJECT_BULLET_H
#include "Object.h"


class bullet: public Object {

public:
    static const int sizeX = 10;
    static const int sizeY = 30;

    bullet(int posX, int posY, int speed, Direction direction);

};


#endif //AP_PROJECT_BULLET_H
