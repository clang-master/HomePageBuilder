#include <QDialog>
#include "node.h"
#include "treewidget.h"


#ifndef CREATEELEMENT_H
#define CREATEELEMENT_H


namespace Ui {
class CreateElement;
}

class CreateElement : public QDialog
{
    Q_OBJECT

public:
    explicit CreateElement(QWidget *parent = 0);
    ~CreateElement();

private slots:
    void on_buttonBox_accepted();

    void on_pushButton_clicked();

    void my_TreeWidget_doubleClicked(Node*);

private:
    Ui::CreateElement *ui;
    Node* parentNode;
    TreeWidget* tree;
};

#endif // CREATEELEMENT_H
