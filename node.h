#include <QString>
#include "css.h"

#ifndef NODE_H
#define NODE_H

enum Type {tagp,taga,tagimg,tagdiv,tagspan,tagol,tagul,tagnone};

class Node
{
public:
    QString Name;
    QString Class;
    QString id;
    QString Content;
    Node *ChildNode;
    Node *NextNode;
    Node *ParentNode;
    Type type;
    CSS* css;
};

#endif // NODE_H
