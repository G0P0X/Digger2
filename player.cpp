#include "player.h"
#include <QGraphicsScene>
#include <QKeyEvent>
#include <QImage>


Player::Player(QGraphicsItem *parent) : QGraphicsPixmapItem(parent)
{
    // устанавливаем графику
    QPixmap pixmap("D:\\QT projects\\TheDigger2\\resources\\images\\player.png");
    setPixmap(pixmap.scaled(QSize(70,80),Qt::KeepAspectRatio));

}

void Player::keyPressEvent(QKeyEvent *event)
{
    // движение+
    if (event->key() == Qt::Key_Left){
        if (pos().x() > 0)
            setPos(x()-10,y());
    }
    else if (event->key() == Qt::Key_Right){
         if (pos().x() + 100 < 825)
            setPos(x()+10,y());
    }
    else if (event->key() == Qt::Key_Up){
         if (pos().y() > 0)
            setPos(x(),y()-10);
    }
    else if (event->key() == Qt::Key_Down){
         if (pos().y() + 100 < 620)
            setPos(x(),y()+10);
    }

    //также нужно сделать прыжок и атаку
}
