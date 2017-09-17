#include "cssdialog.h"
#include "ui_cssdialog.h"

cssDialog::cssDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::cssDialog)
{
    ui->setupUi(this);
}

cssDialog::~cssDialog()
{
    delete ui;
}

