import QtQuick 2.15
import QtQuick.Controls 2.15
import '../system'

AbstractMain {
    id: root
    name: 'weather'

    Label {
        anchors.centerIn: parent
        text: 'Weather'
        font.pixelSize: 64
    }
}
