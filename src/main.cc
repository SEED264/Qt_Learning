#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>

#include "hexspinbox.h"

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);

    HexSpinBox *hexSpinBox = new HexSpinBox;
    hexSpinBox->show();

    return app.exec();
}
