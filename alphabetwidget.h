#ifndef ALPHABETWIDGET_H
#define ALPHABETWIDGET_H

#include <QWidget>
#include <string>
#include <QWebEngineView>
#include <QMediaPlayer>
#include <QVideoWidget>
#include <QMediaPlaylist>
class AlphabetWidget : public QWidget
{

public:
    AlphabetWidget(QWidget *parent = nullptr): QWidget(parent)
    {}
    void displayItem();
    QWebEngineView *m_view;
    QMediaPlayer *player;
    QMediaPlaylist *playlist;
    QVideoWidget *videoWidget;


signals:

public slots:
};

#endif // ALPHABETWIDGET_H
