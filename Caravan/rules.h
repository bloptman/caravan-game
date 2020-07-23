#ifndef RULES_H
#define RULES_H
#include <QPushButton>
#include <QLabel>
#include <QVBoxLayout>
#include <QPlainTextEdit>

class Rules: public QWidget{

public:
    Rules(QWidget* parent = 0);

private:
    QPushButton* backButton = new QPushButton("Back");
    QPlainTextEdit* rulesText = new QPlainTextEdit;

friend class MainWindow;
};

#endif // RULES_H
