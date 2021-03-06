//
// Created by Y50 on 2/2/2017.
//

#ifndef AP_PROJECT_HELLICOPTER_H
#define AP_PROJECT_HELLICOPTER_H

#include "NonPassingThroughGrassObject.h"

class Helicopter : public NonPassingThroughGrassObject{


    QGraphicsPixmapItem* helicopterpxmap;

public:
    static const int sizeX = 50;
    static const int sizeY = 30;
    static const int speed = 4;
    static const int points = 60;

    Helicopter(int posX, int posY, Direction direction);


    virtual ~Helicopter() {

    }

    virtual int getSizeX() override {
        return Helicopter::sizeX;
    }
    virtual int getSizeY() override {
        return Helicopter::sizeY;
    }

    virtual void hitByBullet() override;

    virtual bool hitByPlane() override;

};


#endif //AP_PROJECT_HELLICOPTER_H
