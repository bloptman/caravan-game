#include "menu.h"

Menu::Menu(QWidget* parent):QWidget(parent){

    QFont* font1 = new QFont("Courier New");
    logo->setFont(*font1);

    QString morseCode = "-.-. .-.. .. -.-. -.- / .... . .-. . / ..-. --- .-. / .- / ... ..- .-. .--. .-. .. ... .";
    ee->setText(morseCode);

    QVBoxLayout* menuButtons = new QVBoxLayout;
    menuButtons->addWidget(ee);
    menuButtons->addWidget(playButton);
    menuButtons->addWidget(rulesButton);
    menuButtons->addWidget(exitButton);

    QVBoxLayout* allWidgets = new QVBoxLayout;
    logo->setAlignment(Qt::AlignCenter);
    logo->setStyleSheet("color: white;"
                        "font-size: 130px;"
                        "text-decoration: underline");

    ee->setStyleSheet("background-color: rgba(255, 255, 255, 0);"
                        "font-size: 20px;"
                        "color: green;");

    //playButton->setStyleSheet("background-color: rgba(255, 255, 255, 50);");
    //rulesButton->setStyleSheet("background-color: rgba(255, 255, 255, 50);");
    //exitButton->setStyleSheet("background-color: rgba(255, 255, 255, 50);");

    allWidgets->addWidget(logo);
    allWidgets->addLayout(menuButtons);
    //allWidgets->setAlignment(Qt::AlignCenter);
    this->setLayout(allWidgets);
}
