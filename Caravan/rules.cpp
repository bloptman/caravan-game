#include "rules.h"

Rules::Rules(QWidget* parent):QWidget(parent){

    QVBoxLayout* mainLayout = new QVBoxLayout;
    mainLayout->addWidget(rulesText);
    mainLayout->addWidget(backButton);
    this->setLayout(mainLayout);

    rulesText->setPlainText("Rules\nComing\nSoon!!!\nAnother\nFew\nLines!!!!");

    rulesText->setStyleSheet("color: white;"
                             "background-color:green;"
                             "font-size: 40px;"
                             "selection-color: red;");

    rulesText->viewport()->setAutoFillBackground(false);
    rulesText->setReadOnly(true);
}
