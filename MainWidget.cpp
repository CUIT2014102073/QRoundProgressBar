#include "MainWidget.h"

Widget::Widget(QWidget *parent)
    : QDialog(parent)
{
    //窗口基础设置
    setFixedSize(300,350);
    setWindowFlags(Qt::CustomizeWindowHint | Qt::WindowCloseButtonHint);
    setStyleSheet("background-color:rgb(68,68,68);");

    //初始化控件
    QPushButton* btn_Test=new QPushButton();
    QPushButton* btn_GetCode=new QPushButton();
    QVBoxLayout* mainLayout=new QVBoxLayout();

    //这只按钮文字
    btn_Test->setText(QStringLiteral("测试"));
    btn_GetCode->setText(QStringLiteral("获取源码"));

    //设置按钮高度
    btn_Test->setFixedHeight(30);
    btn_GetCode->setFixedHeight(30);

    //设置按钮样式表
    btn_Test->setStyleSheet("border-radius:4px;background-color:rgb(230,230,230);");
    btn_GetCode->setStyleSheet("border-radius:4px;background-color:rgb(230,230,230);");

    //环形进度条初始化
    round_Bar=new QRoundProgressBar();

    //环形进度条可选设置
    do{
        //round_Bar->SetStartAngle(-30);
        //round_Bar->SetEndAngle(210);
        //round_Bar->SetMaxRadius(100);
        //round_Bar->SetRingWidth(20);
        //round_Bar->SetIcomWidth(25);
        //round_Bar->SetCircularBorderColor(qRgb(255,0,0));
        //round_Bar->SetInsideMaskColor(qRgb(0,255,0));
        //round_Bar->SetRadialGradient(qRgb(10,10,10),qRgb(120,0,120));
        //SlotBtnTest();
    }while(0);


    //初始化并设置布局
    QHBoxLayout* btnLayout=new QHBoxLayout();
    btnLayout->setMargin(10);
    btnLayout->setSpacing(10);
    btnLayout->addWidget(btn_Test);
    btnLayout->addWidget(btn_GetCode);

    mainLayout->setMargin(20);
    mainLayout->setSpacing(0);
    mainLayout->addSpacing(20);
    mainLayout->addWidget(round_Bar);
    mainLayout->addLayout(btnLayout);
    setLayout(mainLayout);

    //添加信号与槽
    connect(btn_Test,&QPushButton::clicked,this,&Widget::SlotBtnTest);
    connect(btn_GetCode,&QPushButton::clicked,this,&Widget::SlotBtnGetCode);
}

Widget::~Widget()
{
}

void Widget::SlotBtnTest()
{
    round_Bar->SetCurrPrograss(qrand()%100);
}

void Widget::SlotBtnGetCode()
{
    GroupWidget widget;
    widget.exec();
}
