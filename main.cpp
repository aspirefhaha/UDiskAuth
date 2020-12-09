#include "CAuthDlg.h"

#include <QApplication>
#include <QTranslator>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QTranslator * pTranslator = new QTranslator();
    if(pTranslator->load("./UDiskAuth.qm")){
        a.installTranslator(pTranslator);
    }
    CAuthDlg w;
    w.show();
    return a.exec();
}
