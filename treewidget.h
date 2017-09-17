#include <QTreeWidget>
#include "nodelist.h"

#ifndef TREEWIDGET_H
#define TREEWIDGET_H

class TreeWidget : public QTreeWidget
{
    Q_OBJECT

    QTreeWidgetItem* items;
public:
    TreeWidget(QWidget* receiver,QWidget* parent=0);
    ~TreeWidget();
private slots:
    void mySlot(QTreeWidgetItem*);
signals:
    void mySignal(Node*);
};

#endif // TREEWIDGET_H
