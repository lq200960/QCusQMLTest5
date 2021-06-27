import QtQuick 2.4

import QuickPaintedItemEx 1.0

Rectangle {

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

    CusHyperItem {
        x: 10
        y: 10
        width: parent.width - 20
        height: parent.height - 20
    }
}
