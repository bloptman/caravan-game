#ifndef CARD_H
#define CARD_H
#include <QLabel>
#include <QString>

class Card: public QLabel{
public:
    Card();
    Card(const QString& suit, const QString& face);
    int determineValue(const QString& face);

private:
    int value;
    QString suit;
    QString face;
    QPixmap img;

friend class PlayArea;
};

#endif // CARD_H
