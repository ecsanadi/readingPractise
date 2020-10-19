#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPushButton>
#include <QLabel>
#include "alphabetwidget.h"
#include <QGridLayout>
#include <QCheckBox>
#include <QGroupBox>
#include <vector>

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    QLabel *m_alphabet;
    QLabel *m_score_label;
    QLabel *m_score_text;
    int m_score;
    int m_score_limit;
    QPushButton *m_button_next;
    AlphabetWidget *m_alphabet_widget;
    QGridLayout *mainLayout;
    QVBoxLayout *vbox;
    int m_amount;
    QCheckBox *a    ;
    QCheckBox *aa   ;
    QCheckBox *b    ;
    QCheckBox *c    ;
    QCheckBox *cs   ;
    QCheckBox *d    ;
    QCheckBox *dz   ;
    QCheckBox *dzs  ;
    QCheckBox *e    ;
    QCheckBox *ee   ;
    QCheckBox *f    ;
    QCheckBox *g    ;
    QCheckBox *gy   ;
    QCheckBox *h    ;
    QCheckBox *i    ;
    QCheckBox *ii   ;
    QCheckBox *j    ;
    QCheckBox *k    ;
    QCheckBox *l    ;
    QCheckBox *ly   ;
    QCheckBox *m    ;
    QCheckBox *n    ;
    QCheckBox *ny   ;
    QCheckBox *o    ;
    QCheckBox *oo   ;
    QCheckBox *ooo  ;
    QCheckBox *oooo ;
    QCheckBox *p    ;
    QCheckBox *r    ;
    QCheckBox *s    ;
    QCheckBox *sz   ;
    QCheckBox *t    ;
    QCheckBox *ty   ;
    QCheckBox *u    ;
    QCheckBox *uu   ;
    QCheckBox *uuu  ;
    QCheckBox *uuuu ;
    QCheckBox *v    ;
    QCheckBox *z    ;
    QCheckBox *zs   ;
    QGroupBox *alphabetGroupBox;
    QGroupBox *controlGroupBox;
    std::vector<QCheckBox*> m_alphabet_cb_list;
    std::vector<QCheckBox*> m_alphabet_cb_list_b;
    std::vector<std::string> m_alphabet_list;
    std::vector<std::string> m_alphabet_list_b;
    std::vector<std::string> m_checked;
    std::vector<std::string> m_checked_b;
    std::vector<int> m_prev_idx;
    std::vector<int> m_prev_idx_b;
    void generateString(std::string &oString);
    void createAlphabetGroubBox();
    void fillContainers();
    void setQstringLink(QString &link);
    QCheckBox* createCheckBox(const QString &text);
private slots:
    void getNextExcercise();
};

#endif // MAINWINDOW_H
