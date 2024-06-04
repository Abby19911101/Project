#ifndef PLAYSCENE_H
#define PLAYSCENE_H

#include <QMainWindow>

#include "mycoin.h"

class PlayScene : public QMainWindow {
  Q_OBJECT
 public:
  // explicit PlayScene(QWidget *parent = 0);

  PlayScene(int levelNum);

  int levelIndex;  //内部成员属性 记录所选的关卡

  //重写paintEvent事件
  void paintEvent(QPaintEvent *);

 signals:
  void chooseSceneBack();
 public slots:
 private:
  int gameArray[4][4];    //二维数组数据
  MyCoin *coinBtn[4][4];  //金币按钮数组
  bool isWin = true;      //是否胜利
};

#endif  // PLAYSCENE_H
