#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>

#include "sortdialog.h"

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);

    Ui::SortDialog ui;
    SortDialog *dialog = new SortDialog;
    dialog->show();

    return app.exec();
}
