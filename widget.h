#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QPushButton>
#include <QLineEdit>
#include <QVBoxLayout>
#include <QMessageBox>
#include <QString>

QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

private slots:
    void handleButton();

private:
    QPushButton *m_button;
    QLineEdit *m_line1;
    QLineEdit *m_line2;
    QVBoxLayout *m_layout;

private:
    Ui::Widget *ui;
};
#endif // WIDGET_H
