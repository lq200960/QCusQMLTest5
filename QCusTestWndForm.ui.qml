import QtQuick 2.4

import QuickPaintedItemEx 1.0

Rectangle {

    Text {
        id: text1
        x: 112
        y: 103
        width: 136
        height: 89
        //text: qsTr("测试wnd!")
        font.bold: true
        verticalAlignment: Text.AlignVCenter
        horizontalAlignment: Text.AlignHCenter
        font.pixelSize: 22
    }

    CusHyperItem {
        x: 0
        y: 0
        width: 1920
        height: 1080
        totalPoints:50
    }
}
