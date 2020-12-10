#ifndef BLOCK_H
#define BLOCK_H

#include <QObject>
#include <QGraphicsItem>
#include <QPainter>

class Block : public QObject, public QGraphicsItem
{
    Q_OBJECT

public:
    explicit Block(QObject *parent = nullptr);
    ~Block();
    void hit(); // функция разрушения блока

signals:
public slots:

protected:
    QRectF boundingRect() const;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);

private:
    int health;
};

#endif // BLOCK_H
