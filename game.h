#ifndef GAME_H
#define GAME_H

#include <QWidget>
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QGraphicsTextItem>

class Game : public QGraphicsView
{
    Q_OBJECT

public:
    Game(QWidget *parent = nullptr);
    ~Game();

    QGraphicsScene *scene; // объявляем графическую сцену


    void MainMenu();
    void gameOver();

    // высота и ширина окна
    const int _width = 800;
    const int _height = 600;

public slots:
    void playGame();
};
#endif // GAME_H
