#ifndef GROUPWIDGET_H
#define GROUPWIDGET_H

#include <QDialog>

class GroupWidget : public QDialog
{
    Q_OBJECT

public:
    GroupWidget(QWidget *parent = 0);
    ~GroupWidget();
};

#endif
