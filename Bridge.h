//
// Created by Y50 on 2/2/2017.
//

#ifndef AP_PROJECT_BRIDGE_H
#define AP_PROJECT_BRIDGE_H


#include "DestructableObject.h"

class Bridge : public DestructableObject{
    int sizeX;
    int sizeY;
    QGraphicsPixmapItem* bridgepxmap;

    static const int points = 100;

public:

    Bridge(int posX, int posY, int sizeX, int sizeY);

    virtual ~Bridge() {
    }

    virtual int getSizeX() override {
        return this->sizeX;
    }
    virtual int getSizeY() override {
        return this->sizeY;
    }

    virtual bool canPassThroughMapObjects() override {
        return false;
    }

    virtual void hitByBullet() override;

    virtual bool hitByPlane() override;
};


#endif //AP_PROJECT_BRIDGE_H
