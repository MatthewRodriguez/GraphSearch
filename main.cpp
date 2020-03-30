#include "GraphSearch.h"

int main() {
    GraphSearch g;
    vector<Node*> a, b, c, d, l;
    int i;
    srand((unsigned int)time(0));
    g.createRandom(10);
    cout << "Graph:";
    g.printNodes();
    g.printU();
    
    a = g.D();
    cout << "DFSIter: ";
    for (i = 0; i < a.size(); i++)
        cout << a[i]->info << " ";
    cout << endl;
    b = g.DF();
    cout << "DFSRec : ";
    for (int i = 0; i < b.size(); i++)
        cout << b[i]->info << " ";
    cout << endl;
    cout << "BFTIter: ";
    c = g.BFTIter();
    for (i = 0; i < c.size(); i++)
        cout << c[i]->info << " ";
    cout << endl;
    d = g.BFTRec();
    cout << "BFTRec : ";
    for (i = 0; i < d.size(); i++)
        cout << d[i]->info << " ";
    cout << endl;
    
    g.clear();
    g.createLinkedList(10);
    cout << "LinkedList:";
    g.printNodes();
    g.printU();
    
    g.clear();
    g.createLinkedList(10000);
    l = g.BFTIterLinkedList();
    cout << "BFTIterLinkedList: ";
    for (i = 0; i < l.size(); i++)
        cout << l[i]->info << " ";
    cout << endl;
    cout << endl;
    l.clear();
    l = g.BFTRecLinkedList();
    cout << "BFTRecLinkedList: ";
    for (i = 0; i < l.size(); i++)
        cout << l[i]->info << " ";
    cout << endl;
    return 0;
}
