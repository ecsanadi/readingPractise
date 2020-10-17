#ifndef ALPHABETWIDGET_H
#define ALPHABETWIDGET_H

#include <QWidget>
#include <string>

class AlphabetWidget : public QWidget
{

public:
    AlphabetWidget(QWidget *parent = nullptr): QWidget(parent)
    {}
    void displayItem(std::string iText);

signals:

public slots:
};

#endif // ALPHABETWIDGET_H
