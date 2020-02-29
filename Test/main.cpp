#include <QApplication>
//#include <QLabel>
#include "AnaPencere.h"
//#include <QQmlApplicationEngine>

int main(int argc, char *argv[])
{
	QApplication app(argc,argv);

	/*QLabel lbl("aykut");
	lbl.show();*/
	AnaPencere pncr;
	
        /*QQmlApplicationEngine engine;
        engine.load(QUrl(QStringLiteral("qrc:/main.qml")));*/
	
	pncr.show();

	return app.exec();
}
