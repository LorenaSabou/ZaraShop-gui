#include "Gui.h"
#include <QtWidgets/QApplication>
#include <qstylefactory.h>
#include <qdebug.h>
#include "Controller.h"
#include "FileShopBag.h"

int main(int argc, char *argv[])
{
	qDebug() << QStyleFactory::keys();
	QApplication::setStyle("fusion");
	QApplication a(argc, argv);

	Repository repo("coats.in");
	FileShopBag* p = nullptr;
	Controller c(repo, p, CoatValidator());
	Gui w(c);
	w.show();
	return a.exec();
}
