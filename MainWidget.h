#ifndef WIDGET_H
#define WIDGET_H

#include <QDialog>
#include <QPushButton>
#include <QVBoxLayout>
#include <QHBoxLayout>

#include "GroupWidget.h"
#include "QRoundProgressBar.h"

class Widget : public QDialog
{
    Q_OBJECT

    QRoundProgressBar* round_Bar;

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

    void SlotBtnTest();
    void SlotBtnGetCode();
};
#endif // WIDGET_H
