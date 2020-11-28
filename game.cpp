#include "game.h"
#include <QPushButton>
#include <QKeyEvent>
#include <QBrush>
#include <QImage>
#include <QVBoxLayout>

Game::Game(QWidget *parent) : QGraphicsView(parent)
{
    setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff); // отключаем скроллбары
    setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setFixedSize(_width,_height);

    scene = new QGraphicsScene();
    scene->setSceneRect(0,0,_width,_height);
    setBackgroundBrush(QBrush(QImage("D:\\QT projects\\TheDigger2\\resources\\images\\bg.png")));
    setScene(scene);
}

Game::~Game()
{
}

void Game::MainMenu()
{
    QPushButton *playButton = new QPushButton();
    playButton->setText("Play");
    playButton->setGeometry(400,300,100,50); // устанавливаем кнопку по центру с размерами (100,50)

    connect(playButton, SIGNAL(clicked()), this, SLOT(playgame())); // соединяем кнопку с функцией playGame
//    QGraphicsProxyWidget *proxy = this->scene->addWidget(playButton);
//    Q_UNUSED(proxy);

//    QWidget *wdg = new QWidget(this);
//    QVBoxLayout *vlay = new QVBoxLayout(wdg);
//    vlay->addWidget(playButton);
}

void Game::gameOver()
{
    QGraphicsTextItem *textGameOver = new QGraphicsTextItem(QString("GameOver"));
    textGameOver->setPos(150,150);
    scene->addItem(textGameOver);
}

void Game::playGame()
{
    scene->clear();
}
