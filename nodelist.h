#include <QString>
#include "node.h"

#ifndef NODELIST_H
#define NODELIST_H


struct tagNodeTable{
    QString name;
    Node* node;
};

class NodeList
{
    int i,index;
    tagNodeTable* NodeTableVector[10];
public:
    NodeList();
    void setNodeTable(QString name,Node* node);
    Node* SrchNode(QString name);
    int getNodeNum(){ return i+index*1000; }
};

#endif // NODELIST_H
