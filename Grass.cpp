//
// Created by dot_blue on 02/02/17.
//

#include "Grass.h"
#include "GraphicScene.h"

Grass::Grass(int posX, int posY, int sizeX, int sizeY)
        :ScrollingObject(posX, posY, 0, Direction::Right), sizeX(sizeX), sizeY(sizeY) {

    GreenRec=new QGraphicsRectItem(posX,posY,sizeX,sizeY);
    GreenRec->setBrush(QBrush(QColor(0,255,0,255)));
    GreenRec->setPen(QPen(QColor(0,255,0,255)));
    GraphicScene::getInstance()->addItem(GreenRec);
}


void Grass::hitByBullet() {
    std::cout<<"Grass is hitted by bullet"<<std::endl;
//    GreenRec->setBrush(QBrush(QColor(0,0,0,255)));
//    GreenRec->setPen(QPen(QColor(0,0,0,255)));
}

bool Grass::hitByPlane() {
    std::cout<<"Grass is collided by a plane"<<std::endl;
//    GreenRec->setBrush(QBrush(QColor(0,0,0,255)));
//    GreenRec->setPen(QPen(QColor(0,0,0,255)));
    return true;
}

void Grass::scrollDown() {
    this->GreenRec->moveBy(0, Model::ScrollAmount);
    this->setPosY(this->getPosY() + Model::ScrollAmount);
    //posY+=Model::ScrollAmount;
    //std::cout << getId() << std::endl;
}

Grass::~Grass() {
    if(GreenRec != NULL)
    {
        GraphicScene::getInstance()->removeItem(GreenRec);
        delete GreenRec;
    }
}
