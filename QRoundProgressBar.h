#ifndef QROUNDPROGRESSBAR_H
#define QROUNDPROGRESSBAR_H

#include <QLabel>
#include <QTimer>
#include <QtMath>
#include <QObject>
#include <QPainter>
#include <QWidget>
#include <QPixmap>
#include <QVBoxLayout>

class QRoundProgressBar : public QWidget
{
    Q_OBJECT

private:
    int startAngle;              //起始角度
    int endAngle;               //结束角度
    int ringWidth;              //环宽度
    int maxRadius;             //大圆半径
    int iconWidth;              //图标的宽度
    int currAngle;               //当前进度条对应的角度

    QRgb circularBorderColor;
    QRgb insideMaskColor;
    QRgb startGradientColor;
    QRgb endGradientColor;

private:
    void DrawBarIcon(QPainter&);
    void GradientArc(QPainter&,int,QRgb);
    void GradientFullArc(QPainter&,QPointF&,int,QRgb);
    void DrawOutSideCircle(QPainter&);
    void DrawCircularRing(QPainter&,int);
    void DrawTwoSmallCircle(QPainter&,int);
    void DrawInSideCircle(QPainter&);
    void DrawGradientCircle(QPainter&,int);

public:
    explicit QRoundProgressBar(QWidget *parent = nullptr);

protected:
    void paintEvent(QPaintEvent *event);

public:
    //初始化调用函数
    void SetStartAngle(int);            //设置起始角度值
    void SetEndAngle(int);              //设置结束角度值
    void SetMaxRadius(int);            //设置圆环外圆半径
    void SetRingWidth(int);            //设置圆环宽度
    void SetIcomWidth(int);           //设置进度图标大小
    void SetCircularBorderColor(QRgb);      //设置圆环边框颜色
    void SetInsideMaskColor(QRgb);            //设置内圆遮罩颜色
    void SetRadialGradient(QRgb,QRgb);      //设置圆环渐变色

    void SetCurrPrograss(int);      //设置当前进度条进度值

};

#endif
