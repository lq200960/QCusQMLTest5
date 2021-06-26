import QtQuick 2.4

Item {
    width: 400
    height: 400

    Text {
        id: text1
        x: 112
        y: 103
        width: 136
        height: 89
        text: qsTr("测试wnd!")
        font.bold: true
        verticalAlignment: Text.AlignVCenter
        horizontalAlignment: Text.AlignHCenter
        font.pixelSize: 22
    }
}
