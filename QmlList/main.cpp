#include <QGuiApplication>
#include <QQmlApplicationEngine>

#include "cpp/list_model.h"

int main(int argc, char *argv[])
{
	QGuiApplication app(argc, argv);

    QQmlApplicationEngine engine;

    ListModel::registerTypes("QmlGuide");

    engine.load(QUrl(QStringLiteral("qrc:/qml/main.qml")));
   /* if (engine.rootObjects().isEmpty())
        return -1;*/

	return app.exec();
}