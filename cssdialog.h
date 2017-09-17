#include <QDialog>

#ifndef CSSDIALOG_H
#define CSSDIALOG_H

namespace Ui {
class cssDialog;
}

class cssDialog : public QDialog
{
    Q_OBJECT

public:
    explicit cssDialog(QWidget *parent = 0);
    ~cssDialog();

private:
    Ui::cssDialog *ui;
};

#endif // CSSDIALOG_H
