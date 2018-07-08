#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_bitcoin.h"

class bitcoin : public QMainWindow
{
	Q_OBJECT

public:
	bitcoin(QWidget *parent = Q_NULLPTR);

private:
	Ui::bitcoinClass ui;
};
