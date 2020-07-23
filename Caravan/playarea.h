#ifndef PLAYAREA_H
#define PLAYAREA_H

#include <QWidget>
#include <QPushButton>
#include <QVBoxLayout>
#include <QFrame>
#include <QHBoxLayout>
#include <QLabel>
#include "deck.h"
#include "cardpile.h"

class PlayArea: public QWidget{
public:
    PlayArea(QWidget* parent = 0, int highScore = 0);

signals:

public slots:

private slots:

private:

    QPushButton* startButton = new QPushButton("Start");
    QPushButton* hitButton = new QPushButton("Hit");
    QPushButton* standButton = new QPushButton("Stand");
    QPushButton* backButton = new QPushButton("Back");
    QLabel* highScoreDisplay = new QLabel;
    int highScore;
    int currentRound;
    int currentTurn;
    int targetValue;
    int range;
    Deck deck;
    CardPile* leftPile = new CardPile();
    CardPile* midPile = new CardPile();
    CardPile* rightPile = new CardPile();

friend class MainWindow;
};

#endif // PLAYAREA_H
