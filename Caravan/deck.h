#ifndef DECK_H
#define DECK_H
#include "card.h"
#include <QVector>

class Deck{

public:
    Deck();

void createDeck() const;

private:
QVector<Card> cards;
int cardsRemaining;

};

#endif // DECK_H
