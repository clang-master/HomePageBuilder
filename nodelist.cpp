#include "nodelist.h"

NodeList::NodeList()
{
    i=0; index=0;
    NodeTableVector[0]=new tagNodeTable[1000];
}

void NodeList::setNodeTable(QString name, Node *node)
{
    if(i<1000){
        ++index;
        i %= 1000;
        NodeTableVector[index]=new tagNodeTable[1000];
    }
    NodeTableVector[index][i++]={ name, node };
}

Node* NodeList::SrchNode(QString name)
{
    for(int b=0;b<1000*index+i;++b){
        if(!QString::compare(name,NodeTableVector[b/1000][b%1000].name))
            return NodeTableVector[b/1000][b%1000].node;
    }
    return NULL;
}
