#include "mainwindow.h"
#include <QApplication>
#include <QComboBox>
#include "list_util.h"


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();



    QComboBox* cd=w.centralWidget()->findChild<QComboBox*>("convert_unit");
    cd->addItem("lungime");
    cd->addItem("arie");
    cd->addItem("volum");
    cd->addItem("timp");
    cd->addItem("viteza");
    cd->addItem("temperatura");
    cd->addItem("masa");
    cd->addItem("energie");
    cd->addItem("presiune");
    cd->addItem("densitate");


    return a.exec();
}
