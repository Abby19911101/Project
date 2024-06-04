#ifndef MYCOIN_H
#define MYCOIN_H

#include <QPushButton>

class MyCoin : public QPushButton {
  Q_OBJECT
 public:
  explicit MyCoin(QPushButton *parent = nullptr);
  MyCoin(QString butImg);  //代表图片路径

  //改变标志,执行翻转效果
  void changeFlag();
  //鼠标按下
  virtual void mousePressEvent(QMouseEvent *e);
 signals:

 public:
  int posX;   // x坐标
  int posY;   // y坐标
  bool flag;  //正反标志

  QTimer *timer1;  //正面翻反面 定时器
  QTimer *timer2;  //反面翻正面 定时器
  int min = 1;     //最小图片
  int max = 8;     //最大图片

  bool isAnimation = false;  //做翻转动画的标志
  bool isWin = false;        //胜利标志
};

#endif  // MYCOIN_H
