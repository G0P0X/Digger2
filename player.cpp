#include "player.h"
#include <QGraphicsScene>
#include <QKeyEvent>

Player::Player(QGraphicsItem *parent) : QGraphicsPixmapItem(parent)
{
    // устанавливаем графику
    setPixmap(QPixmap("D:\\QT projects\\TheDigger2\\resources\\images\\player.png"));

}

void Player::keyPressEvent(QKeyEvent *event)
{
    // движение
    if (event->key() == Qt::Key_Left){
        if (pos().x() > 0) setPos(x()-10,y());
    }
    //else if...
}
