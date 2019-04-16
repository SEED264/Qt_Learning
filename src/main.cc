#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>

#include "mainwindow.h"

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);

    MainWindow *mainWindow = new MainWindow;
    mainWindow->show();

    return app.exec();
}
