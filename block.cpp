#include "block.h"

Block::Block(QObject *parent) : QObject(parent), QGraphicsItem()
{
    health = 1; // здоровье блока 1
}

Block::~Block()
{

}

QRectF Block::boundingRect() const
{
    return QRectF(-20, -20, 40, 40); // ограничиваем область в котором лежит блок
}

void Block::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    // отрисовываем квадрат
    painter->setPen(Qt::black);
    painter->setBrush(Qt::green);
    painter->drawRect(-20, - 30, 70, 60);

    Q_UNUSED(option);
    Q_UNUSED(widget);
}

void Block::hit()
{
    health--;
    if (health <= 0) this->deleteLater();
}
