#include "alphabetwidget.h"
#include "QTextEdit"


void AlphabetWidget::displayItem(std::string iText)
{
    QTextEdit *txt = new QTextEdit();
    QString str = QString::fromUtf8(iText.c_str());
    txt->clear();
    txt->setText(str);
    txt->show();
}
