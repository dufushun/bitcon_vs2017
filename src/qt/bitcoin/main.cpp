#include "bitcoin.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	bitcoin w;
	w.show();
	return a.exec();
}
