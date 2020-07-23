#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMediaPlayer>
#include <QMediaPlaylist>
#include <QStackedWidget>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

signals:

private slots:
    void toRules() const;
    void fromRules() const;
    void toPlayArea() const;
    void fromPlayArea() const;
    void buttonClickedSound() const;
    void eeMusic();

private:
    Ui::MainWindow *ui;
    QStackedWidget* pages = new QStackedWidget;
    QMediaPlaylist* playlist = new QMediaPlaylist;
    QMediaPlayer* music = new QMediaPlayer;
    int secretCounter = 0;
};

#endif // MAINWINDOW_H
