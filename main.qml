import QtQuick 2.8
import QtQuick.Window 2.2

Window {
    visible: true
    width: 640
    height: 480
//    title: qsTr("Hello World")
//    Text {
//        id: text_t
//        text: qsTr("你好")
//    }
    QCusTestWnd{
        id: cusTestWnd
        anchors.fill: parent
    }
}
