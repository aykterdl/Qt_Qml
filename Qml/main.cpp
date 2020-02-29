#include <QApplication>
#include <QQmlApplicationEngine>

#include "backend.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    qmlRegisterType<backend>("io.qt.examples.backend", 1, 0, "backend");

    QQmlApplicationEngine engine;
    engine.load(QUrl(QStringLiteral("qrc:/main.qml")));

    return app.exec();
}
