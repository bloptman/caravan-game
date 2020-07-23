#ifndef CARDPILE_H
#define CARDPILE_H

#include <QListWidget>
#include <QStackedWidget>
#include <QLabel>
#include <QPushButton>
#include <QVBoxLayout>
#include "card.h"

class CardPile: public QWidget{

public:
    CardPile(QWidget* parent = 0);

private:
    int lastPlayed;
    int total = 0;
    QListWidget* cardList = new QListWidget;
    QPushButton* addButton = new QPushButton("Add to Pile");
    QLabel* totalDisplay = new QLabel;
    Card* topCard = new Card();

};

#endif // CARDPILE_H
