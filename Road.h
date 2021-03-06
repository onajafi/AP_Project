//
// Created by Y50 on 2/2/2017.
//

#ifndef AP_PROJECT_ROAD_H
#define AP_PROJECT_ROAD_H


#include "ScrollingObject.h"

class Road : public ScrollingObject{
    int sizeX;
    int sizeY;
    QGraphicsPixmapItem* roadpxmap;
public:
    Road(int posX, int posY, int sizeX, int sizeY);

    virtual ~Road() {
    }

    virtual int getSizeX() override {
        return sizeX;
    }
    virtual int getSizeY() override {
        return sizeY;
    }

    virtual void hitByBullet() override;

    virtual bool hitByPlane() override;

};


#endif //AP_PROJECT_ROAD_H
