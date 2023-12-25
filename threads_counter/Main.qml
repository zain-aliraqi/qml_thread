import QtQuick
import QtQuick.Controls
import CountForm

Window {
    width: 640
    height: 480
    visible: true
    title: qsTr("Hello World")
    Text {
        id: t1
        anchors.centerIn: parent
        text: qsTr("count")
    }
    Button{
        id:bt1
        x:200
        y:200
        text: "run count"
        onClicked: {
            cc.strart_fun();
        }
    }
    Button{
        id:bt2
        x:250
        y:200
        text: "stop count"
        onClicked: {
            cc.stop_fun();
        }
    }
    CountForm{
        id:cc
        onCountChange: (c)=>{
            t1.text = c;
        }
    }
}
