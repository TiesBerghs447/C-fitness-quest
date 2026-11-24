#include <QApplication>
#include <QDebug>

#include "mainwindow.h"
#include "Set.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    MainWindow w;

    w.show();

    app.exec();
}