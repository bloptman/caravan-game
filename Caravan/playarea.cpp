#include "playarea.h"

PlayArea::PlayArea(QWidget* parent, int highScore):QWidget(parent){

    QHBoxLayout* cardPiles = new QHBoxLayout;
    QHBoxLayout* topBar = new QHBoxLayout;
    QVBoxLayout* sideBar = new QVBoxLayout;
    QHBoxLayout* subLayout = new QHBoxLayout;
    QVBoxLayout* mainLayout = new QVBoxLayout;

    Card* nextCard = new Card("Hearts","Jack");
    QListWidget* remainingCards = new QListWidget();

    cardPiles->addWidget(leftPile);
    cardPiles->addWidget(midPile);
    cardPiles->addWidget(rightPile);

    sideBar->addWidget(nextCard);
    sideBar->addWidget(remainingCards);
    nextCard->setAlignment(Qt::AlignCenter);
    nextCard->setPixmap(nextCard->img.scaled(60,120,Qt::KeepAspectRatio));

    topBar->addWidget(startButton);
    topBar->addWidget(hitButton);
    topBar->addWidget(standButton);
    topBar->addWidget(backButton);

    subLayout->addLayout(cardPiles);
    subLayout->addLayout(sideBar);

    mainLayout->addLayout(topBar);
    mainLayout->addStretch();
    mainLayout->addLayout(subLayout);

    this->setLayout(mainLayout);

    }

