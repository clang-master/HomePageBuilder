#include "createelement.h"
#include "ui_createelement.h"

CreateElement::CreateElement(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CreateElement)
{
    ui->setupUi(this);
}

CreateElement::~CreateElement()
{
    delete ui;
}

void CreateElement::on_buttonBox_accepted()
{

}

void CreateElement::on_pushButton_clicked()
{
    tree=new TreeWidget(this);
}

void CreateElement::my_TreeWidget_doubleClicked(Node *p)
{
    parentNode=p;
    ui->master_lineedit->setText(p->Name);
    if(p->ChildNode!=NULL){
        Node* node=p->ChildNode;
        do{
             ui->master_combobox->addItem(node->Name);
             node=node->NextNode;
        }while(node!=NULL);
    }
    delete tree;
}
