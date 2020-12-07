#ifndef GAME_H
#define GAME_H

#include <QWidget>
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QGraphicsTextItem>

#include "player.h"
#include "score.h"

class Game : public QGraphicsView
{
    Q_OBJECT

public:
    Game(QWidget *parent = nullptr);
    ~Game();

    QGraphicsScene *scene; // объявляем графическую сцену
    Player *player; // игрок
    Score *score; // счет

    //void MainMenu();
    void gameOver();

    // высота и ширина окна
    const int _width = 800;
    const int _height = 600;

//public slots:
//    void playGame();
};
#endif // GAME_H
