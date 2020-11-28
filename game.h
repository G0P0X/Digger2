#ifndef GAME_H
#define GAME_H

#include <QWidget>

class Game : public QWidget
{
    Q_OBJECT

public:
    Game(QWidget *parent = nullptr);
    ~Game();
};
#endif // GAME_H
