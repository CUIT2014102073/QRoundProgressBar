#include "GroupWidget.h"

GroupWidget::GroupWidget(QWidget *parent)
    : QDialog(parent)
{
    //设置最小尺寸
    setFixedSize(240,300);
    //去掉问号
    setWindowFlags(Qt::CustomizeWindowHint | Qt::WindowCloseButtonHint);
    //设置对话框标题
    setWindowTitle(QStringLiteral("加群联系作者"));
    setStyleSheet("border-image:url(://Picture/Qt.png)");
}

GroupWidget::~GroupWidget()
{}
