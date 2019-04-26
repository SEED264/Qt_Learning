#ifndef _GOTOCELLDIALOG_H_
#define _GOTOCELLDIALOG_H_

#include <QtWidgets/QDialog>

#include "ui_gotocelldialog.h"

class GoToCellDialog : public QDialog, public Ui::GoToCellDialog{
    Q_OBJECT

public:
    GoToCellDialog(QWidget *parent = nullptr);

private slots:
    void on_lineEdit_textChanged();
};

#endif // _GOTOCELLDIALOG_H_