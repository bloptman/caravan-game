#include "cardpile.h"

CardPile::CardPile(QWidget* parent):QWidget(parent){

    QVBoxLayout* mainLayout = new QVBoxLayout;
    mainLayout->addWidget(topCard);
    mainLayout->addWidget(addButton);
    //mainLayout->addWidget(cardList);
    mainLayout->addWidget(totalDisplay);
    this->setLayout(mainLayout);

    totalDisplay->setAlignment(Qt::AlignCenter);
    totalDisplay->setText("Total: " + QString::number(total));

    topCard->setAlignment(Qt::AlignCenter);

    cardList->viewport()->setAutoFillBackground(false);
}
