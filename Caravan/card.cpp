#include "card.h"

Card::Card(){
    suit = "";
    face = "";
    value = 0;

    //QPixmap img(":/cards/back.png");
    //QPixmap img(":/cards/tarot.png");
    img = QPixmap(":/cards/tarot2.jpg");
    this->setPixmap(img.scaled(100,200,Qt::KeepAspectRatio));
}

Card::Card(const QString& suit, const QString& face){

    this->suit = suit;
    this->face = face;
    value = determineValue(face);

    QString fileName = ":/cards/";
    fileName = fileName + face[0] + suit[0] + ".jpg";

    img= QPixmap(fileName);
    this->setPixmap(img.scaled(60,120,Qt::KeepAspectRatio));
    //this->setStyleSheet("border: 1px solid black");
}

int Card::determineValue(const QString& face){
    int value;
    if(face[0] == "A") {value = 1;}
    else if(face[0] >= 50 && face[0] <= 57){value = face.toDouble();}
    else{value = 10;}
    return value;
}
