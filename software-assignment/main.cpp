


#include "widget.h"
#include <QApplication>
#include<QFile>

#include "login.h"
#include"maingui.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QFile style_file("./style.qss");
    style_file.open(QFile::ReadOnly);
    QString style(style_file.readAll());
    a.setStyleSheet(style);
    login w;
    w.show();
    return a.exec();
}



/*

select eiinfo.goodsname,ei,eiinfo.contact,source,place,number,price,catogory,tel,apartment from eiinfo,goodsinfo,contact  
where eiinfo.contact = goodsinfo.contact and goodsinfo.contact = contact.contact 
and goodsinfo.goodsname like "% 铁 %"
*/