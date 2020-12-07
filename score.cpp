#include "score.h"
#include <QFont>

Score::Score(QGraphicsItem *parent) : QGraphicsTextItem(parent)
{
    // изначально устанавливаем счет 0
    score = 0;

    // рисуем текст
    setPlainText(QString("Score: ") + QString::number(score)); // Score: 0
    setDefaultTextColor(Qt::white);
    setFont(QFont("times", 18));
}

void Score::increase()
{
    score++;
    setPlainText(QString("Score: ") + QString::number(score));
}

int Score::getScore()
{
    return score;
}
