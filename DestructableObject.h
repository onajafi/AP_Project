//
// Created by Y50 on 2/2/2017.
//

#ifndef AP_PROJECT_DESTRUCTABLEOBJECT_H
#define AP_PROJECT_DESTRUCTABLEOBJECT_H


#include "ScrollingObject.h"

class DestructableObject : public ScrollingObject{


public:
    DestructableObject(int posX, int posY, int speed, Direction direction) : ScrollingObject(posX, posY, speed,
                                                                                             direction) { }

    void Destruct(){

    }
};


#endif //AP_PROJECT_DESTRUCTABLEOBJECT_H
