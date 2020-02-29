import QtQuick 2.6
import QtQuick.Controls 2.0
import io.qt.examples.backend 1.0

Window {
    id: root
    width: 300
    height: 350
    visible: true

    backend {
        id: backend
    }

    Text{
        text: backend.userName
        anchors.centerIn: parent

        onTextChanged: backend.userName = text
    }
}
