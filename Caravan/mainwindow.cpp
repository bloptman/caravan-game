#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "menu.h"
#include "rules.h"
#include "playarea.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    //setting up the main window
    ui->setupUi(this);
    delete ui->mainToolBar;
    delete ui->statusBar;
    this->setWindowTitle("Caravan:The Post Apocalyptic Card Game");
    this->setFixedSize(650,350);

    //setting up background
    QPixmap bkgnd(":/images/t9LM0aa.png");
    bkgnd = bkgnd.scaled(this->size(), Qt::IgnoreAspectRatio);
    QPalette palette;
    palette.setBrush(QPalette::Background, bkgnd);
    this->setPalette(palette);

    //setting up widgets
    Menu* mainMenu = new Menu;
    Rules* rulesPage = new Rules;
    PlayArea* playPage = new PlayArea;
    pages->addWidget(mainMenu);
    pages->addWidget(rulesPage);
    pages->addWidget(playPage);
    this->setCentralWidget(pages);

    //making connections to change pages
    connect(mainMenu->exitButton,SIGNAL(clicked(bool)),this,SLOT(close()));
    connect(mainMenu->rulesButton,SIGNAL(clicked(bool)),this,SLOT(toRules()));
    connect(rulesPage->backButton,SIGNAL(clicked(bool)),this,SLOT(fromRules()));
    connect(mainMenu->playButton,SIGNAL(clicked(bool)),this,SLOT(toPlayArea()));
    connect(playPage->backButton,SIGNAL(clicked(bool)),this,SLOT(fromPlayArea()));

    //making connections to play sound effects when you change pages;
    connect(mainMenu->playButton,SIGNAL(clicked(bool)),this,SLOT(buttonClickedSound()));
    connect(mainMenu->rulesButton,SIGNAL(clicked(bool)),this,SLOT(buttonClickedSound()));
    connect(mainMenu->exitButton,SIGNAL(clicked(bool)),this,SLOT(buttonClickedSound()));
    connect(rulesPage->backButton,SIGNAL(clicked(bool)),this,SLOT(buttonClickedSound()));
    connect(playPage->backButton,SIGNAL(clicked(bool)),this,SLOT(buttonClickedSound()));

    //a little easter egg :)
    connect(mainMenu->ee,SIGNAL(clicked(bool)),this,SLOT(eeMusic()));

    //setting up the music
    playlist->addMedia(QUrl("qrc:/music/2-23 The Days When My Mother Was There.mp3"));
    playlist->addMedia(QUrl("qrc:/music/3-10 The Whims of Fate.mp3"));
    playlist->setPlaybackMode(QMediaPlaylist::CurrentItemInLoop);

    music->setPlaylist(playlist);
    music->setVolume(25);
    music->play();

}

void MainWindow::toRules() const{
    pages->setCurrentIndex(1);
}

void MainWindow::fromRules() const{
    pages->setCurrentIndex(0);
}

void MainWindow::toPlayArea() const{
    pages->setCurrentIndex(2);
}

void MainWindow::fromPlayArea() const{
    pages->setCurrentIndex(0);
}

void MainWindow::buttonClickedSound() const{
    QMediaPlayer* sound = new QMediaPlayer;
    sound->setMedia(QUrl("qrc:/sounds/cardSlide4.wav"));
    sound->setVolume(100);
    sound->play();
}

void MainWindow::eeMusic(){
    ++secretCounter;
    if(secretCounter == 3){
        playlist->setCurrentIndex(1);
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}
