#include "mainwindow.h"
#include <iostream>
#include <time.h>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    m_alphabet_widget = new AlphabetWidget(this);

    m_amount = 2;

    m_button_next = new QPushButton("Next", this);
    connect(m_button_next, SIGNAL (clicked()), this, SLOT (getNextExcercise()));

    m_select_mode = new QLabel("Select amount: ", this);
    // TODO: create selectable amount

    m_alphabet = new QLabel("", this);

    createAlphabetGroubBox();

    fillContainers();
    QHBoxLayout *widgetLayout = new QHBoxLayout;
    widgetLayout->addWidget(m_alphabet_widget);

    QHBoxLayout *controlLayout = new QHBoxLayout;
    controlLayout->addStretch();
    controlLayout->addWidget(m_button_next);
    controlLayout->addWidget(m_select_mode);

    QHBoxLayout *alphabetLayout = new QHBoxLayout;
    alphabetLayout->addWidget(alphabetGroupBox,Qt::AlignRight);

    QGridLayout *mainLayout = new QGridLayout;
    mainLayout->addLayout(widgetLayout,0,0);
    mainLayout->addLayout(controlLayout,1,0);
    mainLayout->addLayout(alphabetLayout,1,1);

    auto central = new QWidget;
    central->setLayout(mainLayout);
    setCentralWidget(central);

    setWindowTitle(tr("Eszter olvasoja"));

    getNextExcercise();

}

MainWindow::~MainWindow()
{

}

void MainWindow::createAlphabetGroubBox()
{
    alphabetGroupBox = new QGroupBox(tr("Select the alphabets"));
    a = createCheckBox(tr("a"));
    aa = createCheckBox(tr("á"));
    b = createCheckBox(tr("b"));
    c = createCheckBox(tr("c"));
    cs = createCheckBox(tr("cs"));
    d = createCheckBox(tr("d"));
    dz = createCheckBox(tr("dz"));
    dzs = createCheckBox(tr("dzs"));
    e = createCheckBox(tr("e"));
    ee = createCheckBox(tr("é"));
    f = createCheckBox(tr("f"));
    g = createCheckBox(tr("g"));
    gy = createCheckBox(tr("gy"));
    h = createCheckBox(tr("h"));
    i = createCheckBox(tr("i"));
    ii = createCheckBox(tr("í"));
    j = createCheckBox(tr("j"));
    k = createCheckBox(tr("k"));
    l = createCheckBox(tr("l"));
    ly = createCheckBox(tr("ly"));
    m = createCheckBox(tr("m"));
    n = createCheckBox(tr("n"));
    ny = createCheckBox(tr("ny"));
    o = createCheckBox(tr("o"));
    oo = createCheckBox(tr("ó"));
    ooo = createCheckBox(tr("ö"));
    oooo = createCheckBox(tr("ő"));
    p = createCheckBox(tr("p"));
    r = createCheckBox(tr("r"));
    s = createCheckBox(tr("s"));
    sz = createCheckBox(tr("sz"));
    t = createCheckBox(tr("t"));
    ty = createCheckBox(tr("ty"));
    u = createCheckBox(tr("u"));
    uu = createCheckBox(tr("ú"));
    uuu = createCheckBox(tr("ü"));
    uuuu = createCheckBox(tr("ű"));
    v = createCheckBox(tr("v"));
    z = createCheckBox(tr("z"));
    zs = createCheckBox(tr("zs"));

    a->setChecked(true);
    m->setChecked(true);
    s->setChecked(true);
    e->setChecked(true);
    i->setChecked(true);
    t->setChecked(true);

    QGridLayout *layout = new QGridLayout;

    layout->addWidget(a,    0, 0);
    layout->addWidget(aa,   1, 0);
    layout->addWidget(b,    2, 0);
    layout->addWidget(c,    3, 0);
    layout->addWidget(cs,   4, 0);
    layout->addWidget(d,    5, 0);
    layout->addWidget(dz,   6, 0);
    layout->addWidget(dzs,  7, 0);
    layout->addWidget(e,    8, 0);
    layout->addWidget(ee,   9, 0);
    layout->addWidget(f,    0, 1);
    layout->addWidget(g,    1, 1);
    layout->addWidget(gy,   2, 1);
    layout->addWidget(h,    3, 1);
    layout->addWidget(i,    4, 1);
    layout->addWidget(ii,   5, 1);
    layout->addWidget(j,    6, 1);
    layout->addWidget(k,    7, 1);
    layout->addWidget(l,    8, 1);
    layout->addWidget(ly,   9, 1);
    layout->addWidget(m,    0, 2);
    layout->addWidget(n,    1, 2);
    layout->addWidget(ny,   2, 2);
    layout->addWidget(o,    3, 2);
    layout->addWidget(oo,   4, 2);
    layout->addWidget(ooo,  5, 2);
    layout->addWidget(oooo, 6, 2);
    layout->addWidget(p,    7, 2);
    layout->addWidget(r,    8, 2);
    layout->addWidget(s,    9, 2);
    layout->addWidget(sz,   0, 3);
    layout->addWidget(t,    1, 3);
    layout->addWidget(ty,   2, 3);
    layout->addWidget(u,    3, 3);
    layout->addWidget(uu,   4, 3);
    layout->addWidget(uuu,  5, 3);
    layout->addWidget(uuuu, 6, 3);
    layout->addWidget(v,    7, 3);
    layout->addWidget(z,    8, 3);
    layout->addWidget(zs,   9, 3);


    alphabetGroupBox->setLayout(layout);

}

void MainWindow::fillContainers()
{
    m_alphabet_cb_list.clear();
    m_alphabet_cb_list_b.clear();
    m_alphabet_cb_list.push_back(a);
    m_alphabet_cb_list.push_back(aa  );
    m_alphabet_cb_list_b.push_back(b   );
    m_alphabet_cb_list_b.push_back(c   );
    m_alphabet_cb_list_b.push_back(cs  );
    m_alphabet_cb_list_b.push_back(d   );
    m_alphabet_cb_list_b.push_back(dz  );
    m_alphabet_cb_list_b.push_back(dzs );
    m_alphabet_cb_list.push_back(e   );
    m_alphabet_cb_list.push_back(ee  );
    m_alphabet_cb_list_b.push_back(f   );
    m_alphabet_cb_list_b.push_back(g   );
    m_alphabet_cb_list_b.push_back(gy  );
    m_alphabet_cb_list_b.push_back(h   );
    m_alphabet_cb_list.push_back(i   );
    m_alphabet_cb_list.push_back(ii  );
    m_alphabet_cb_list_b.push_back(j   );
    m_alphabet_cb_list_b.push_back(k   );
    m_alphabet_cb_list_b.push_back(l   );
    m_alphabet_cb_list_b.push_back(ly  );
    m_alphabet_cb_list_b.push_back(m   );
    m_alphabet_cb_list_b.push_back(n   );
    m_alphabet_cb_list_b.push_back(ny  );
    m_alphabet_cb_list.push_back(o   );
    m_alphabet_cb_list.push_back(oo  );
    m_alphabet_cb_list.push_back(ooo );
    m_alphabet_cb_list.push_back(oooo);
    m_alphabet_cb_list_b.push_back(p   );
    m_alphabet_cb_list_b.push_back(r   );
    m_alphabet_cb_list_b.push_back(s   );
    m_alphabet_cb_list_b.push_back(sz  );
    m_alphabet_cb_list_b.push_back(t   );
    m_alphabet_cb_list_b.push_back(ty  );
    m_alphabet_cb_list.push_back(u   );
    m_alphabet_cb_list.push_back(uu  );
    m_alphabet_cb_list.push_back(uuu );
    m_alphabet_cb_list.push_back(uuuu);
    m_alphabet_cb_list_b.push_back(v   );
    m_alphabet_cb_list_b.push_back(z   );
    m_alphabet_cb_list_b.push_back(zs  );

    for(std::vector<QCheckBox*>::iterator it = m_alphabet_cb_list.begin(); it != m_alphabet_cb_list.end();it++)
    {
      m_alphabet_list.push_back( ((*it)->text()).toUtf8().constData() );
    }
    for(std::vector<QCheckBox*>::iterator it = m_alphabet_cb_list_b.begin(); it != m_alphabet_cb_list_b.end();it++)
    {
      m_alphabet_list_b.push_back( ((*it)->text()).toUtf8().constData() );
    }
}

QCheckBox *MainWindow::createCheckBox(const QString &text)
{
    QCheckBox *checkBox = new QCheckBox(text);
    return checkBox;
}

void MainWindow::generateString(std::string &oString)
{
    static int prev_wIdx[2] = {0};
    static int prev_wIdx_b[2] = {0};
    m_checked.clear();
    m_checked.resize(0);
    m_checked_b.clear();
    m_checked_b.resize(0);

    //unsigned long vIdx = 0;
    std::vector<std::string>::iterator vIt = m_alphabet_list.begin();
    for(std::vector<QCheckBox*>::iterator it = m_alphabet_cb_list.begin(); it != m_alphabet_cb_list.end();it++)
    {
      if((*it)->checkState())
      {
        m_checked.push_back(*vIt);
      }
      vIt++;
    }

    std::vector<std::string>::iterator vIt_b = m_alphabet_list_b.begin();
    for(std::vector<QCheckBox*>::iterator it = m_alphabet_cb_list_b.begin(); it != m_alphabet_cb_list_b.end();it++)
    {
      if((*it)->checkState())
      {
        m_checked_b.push_back(*vIt_b);
      }
      vIt_b++;
    }


    for(std::vector<std::string>::iterator it=m_checked.begin(); it != m_checked.end();it++)
    {
        std::cout << *it << std::endl;
    }

    for(std::vector<std::string>::iterator it=m_checked_b.begin(); it != m_checked_b.end();it++)
    {
        std::cout << *it << std::endl;
    }



    int a_size = m_checked.size();
    int b_size = m_checked_b.size();

    //QString qs = "";

    srand (time(NULL));
    int wFirst = (rand() % 2);

    for (int i = 0 ; i < m_amount ; i++)
    {
        //std::vector<QCheckBox*>::iterator it_b = m_alphabet_list_b.begin();

        srand (time(NULL));
        int wIdx =(a_size>0) ? (rand() % (a_size)) : 0;
        wIdx = (wIdx == prev_wIdx[i])?   ( ((wIdx + 1)>=a_size) ? --wIdx : ++wIdx  )  : wIdx;
        prev_wIdx[i] = wIdx;
        srand (time(NULL));
        int wIdx_b = (b_size>0) ? (rand() % (b_size)) : 0;
        wIdx_b = (wIdx_b == prev_wIdx_b[i])?   ( ((wIdx_b + 1)>=b_size) ? --wIdx_b : ++wIdx_b  )  : wIdx;
        prev_wIdx_b[i] = wIdx_b;

        if(wFirst)
        {
            oString += (a_size>0) ?  m_checked.at(wIdx) : "";
            wFirst = 0;
        }
        else
        {
            oString += (b_size>0) ? m_checked_b.at(wIdx_b) : "";
            wFirst = 1;
        }
    }
    //oString = qs.toUtf8().constData();
    std::cout << oString << std::endl;
}

void MainWindow::getNextExcercise()
{
    std::string wString;
    generateString(wString);
    //m_alphabet_widget->displayItem(wString);
    QString qs = QString::fromUtf8(wString.c_str());
    m_alphabet->setText(qs);
}
