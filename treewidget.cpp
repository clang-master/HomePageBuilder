#include "treewidget.h"

extern NodeList nodelist;
extern Node* start;

const char* TAG_TYPE[]={
    "p","link","img","div","span","ol","ul","ul","none"
};


TreeWidget::TreeWidget(QWidget *receiver,QWidget* parent) :
    QTreeWidget(parent)
{
    Node* CurrentNode=start;
    QStringList list;
    list << "Node name" << "kind";
    setColumnCount(2);
    setHeaderLabels(list);

    int a=nodelist.getNodeNum(),flag=0;
    items=new QTreeWidgetItem[a];
    for(int i=0;i<a;i++){
        items[i].setText(0,CurrentNode->Name);
        items[i].setText(1,TAG_TYPE[CurrentNode->type]);
        if(flag&&CurrentNode->ChildNode!=NULL){
            flag=0;
            CurrentNode=CurrentNode->ChildNode;
            items[i].addChild(&items[i+1]);
            ++i;
        }else if(CurrentNode->NextNode!=NULL){
            items[i].parent()->addChild(&items[i+1]);
            ++i;
            CurrentNode=CurrentNode->NextNode;
        }else{
            CurrentNode=CurrentNode->ParentNode;
            flag=1;
        }
    }
    insertTopLevelItem(0,&items[0]);
    show();
    connect(this,SIGNAL(itemDoubleClicked(QTreeWidgetItem*,int)),this,SLOT(mySlot(QTreeWidgetItem*)));
    connect(this,SIGNAL(mySignal(Node*)),receiver,SLOT(my_TreeWidget_doubleClicked(Node*)));
}

TreeWidget::~TreeWidget()
{
    delete[] items;
}

void TreeWidget::mySlot(QTreeWidgetItem *item){
    Node* p=nodelist.SrchNode(item->text(0));
    emit mySignal(p);
}


//caution!!
//if you use this class,you must define the function(slot) named "my_TreeWidget_doubleClicked()" in the parent object.
