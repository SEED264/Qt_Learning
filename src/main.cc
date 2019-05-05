#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>

#include "iconeditor.h"

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);

    IconEditor *iconeditor = new IconEditor;
    iconeditor->show();

    return app.exec();
}
