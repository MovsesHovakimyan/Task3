#include "widget.h"
#include "./ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    m_button = new QPushButton("Send", this);
    m_line1 = new QLineEdit;
    m_line2 = new QLineEdit;
    m_layout = new QVBoxLayout(this);

    m_layout->addWidget(m_line1);
    m_layout->addWidget(m_line2);
    m_layout->addWidget(m_button);

    connect(m_button, SIGNAL(clicked()), this, SLOT(handleButton()));

    ui->setupUi(this);
}

void Widget::handleButton ()
{
    QString str1 = m_line1->text();
    QString str2 = m_line2->text();

    if(str1 == nullptr && str2 == nullptr)
    {
        QMessageBox::critical(this, "Message", "Please enter text");
    }
    else
    {
        QMessageBox::information(this, "Message", "Successfully corrected");
        m_line1->clear();
        m_line2->clear();
    }
}

Widget::~Widget()
{
    delete ui;
}

