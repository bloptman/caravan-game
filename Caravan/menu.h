#ifndef MENU_H
#define MENU_H

#include <QPushButton>
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QLabel>
#include <QFont>

//class MainWindow;

class Menu: public QWidget{
 Q_OBJECT

public:
    Menu(QWidget* parent = 0);

public slots:

private slots:

private:
    QPushButton* playButton = new QPushButton("Play");
    QPushButton* rulesButton = new QPushButton("How to Play");
    QPushButton* exitButton = new QPushButton("Quit");
    QPushButton* ee = new QPushButton();
    QLabel* logo = new QLabel("Caravan");

friend class MainWindow;
};

#endif // MENU_H
