#include "deck.h"

Deck::Deck()
{
    //cards = createDeck();
}

void Deck::createDeck() const{

    QVector<QString> faces = {"Ace", "2", "3", "4", "5","6","7","8","9","10","Jack","Queen","King"};
    QVector<QString> suits = {"Clubs","Diamonds","Hearts","Spades"};
    //QVector<Card> cards;

    for(int i = 0; i < suits.size(); ++i){
        for(int j = 0; j < faces.size(); ++j){
            Card newCard(suits[i],faces[j]);
            //cards.push_back(newCard);
        }
    }
    //return cards;
}
