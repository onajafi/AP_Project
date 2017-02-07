//
// Created by dot_blue on 02/02/17.
//

#include "Bullet.h"
#include "GraphicScene.h"

Bullet::Bullet(int posX, int posY, int speed, Direction direction) : Object(posX, posY, speed, direction) {

    bulletpxmap=new QGraphicsPixmapItem();
    QString tmpstr(RES_PATH);
    tmpstr.append("/bullet.png");

    QImage image(tmpstr);
    image=image.scaled(sizeX,sizeY);

    bulletpxmap->setPixmap(QPixmap::fromImage(image));
    setGraphicObject(bulletpxmap);

    pos_X=posX;
    pos_Y=posY;
    bulletpxmap->setPos(posX,posY);

    GraphicScene::getInstance()->addItem(bulletpxmap);

    QTimer* timer=new QTimer();
    connect(timer,SIGNAL(timeout()),this,SLOT(moveFront()));

    timer->start(10);

}

void Bullet::moveFront() {
    if(bulletpxmap==NULL)
        return;
    pos_Y-=20;
    bulletpxmap->setPos(pos_X,pos_Y);
    if(pos_Y+30<0)
    {
        //delete bulletpxmap;
        // delete timer;
        timer->stop();
    }
}

Bullet::~Bullet() {
    
}


