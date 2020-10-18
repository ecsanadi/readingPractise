#include "alphabetwidget.h"
#include "QTextEdit"



void AlphabetWidget::displayItem()
{

    player = new QMediaPlayer;

    playlist = new QMediaPlaylist(player);
    playlist->addMedia(QUrl("https://www.youtube.com/watch?v=ksBjyegtBKE"));
    playlist->addMedia(QUrl("http://example.com/myclip2.mp4"));

    videoWidget = new QVideoWidget;
    player->setVideoOutput(videoWidget);

    videoWidget->show();
    playlist->setCurrentIndex(1);
    player->play();



//    m_view = new QWebEngineView(this);

//    m_view->load(QUrl(QStringLiteral("qrc:/index.html")));


//    QMediaPlayer *player = new QMediaPlayer;
////<iframe width="400" height="225" src="https://www.youtube.com/embed/ksBjyegtBKE" frameborder="0" allow="accelerometer; autoplay; clipboard-write; encrypted-media; gyroscope; picture-in-picture" allowfullscreen></iframe>
//    QMediaContent *mc=new QMediaContent(QUrl("https://www.youtube.com/embed/ksBjyegtBKE"));

//    player->setMedia(*mc);


//    player->setVolume(50);

//    QVideoWidget *videoWidget = new QVideoWidget;

//    videoWidget->resize(700,700);

//    videoWidget->show();

//    player->setVideoOutput(videoWidget);

//    player->play();
}
