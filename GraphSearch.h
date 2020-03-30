//
//  GraphSearch.h
//  GraphSearch
//
//  Created by Matt Rodriguez on 3/26/20.
//  Copyright © 2020 Matthew Rodriguez. All rights reserved.
//

#ifndef GraphSearch_h
#define GraphSearch_h
#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
using namespace std;

struct Node{
    int info;
    bool visit;
    vector<Node*> list;
    Node(int i, bool v = false) : info(i), visit(v) {}
};

class GraphSearch{
    vector<Node*> nodes;
public:
    GraphSearch();
    void addNode(int val);
    void clear();
    void addUndirectedEdge(Node *first, Node *second);
    void undirectedEdge(Node *first, Node *second);
    void removeUndiretedEdge(Node *first, Node *second);
    void createRandom(int n);
    void printNodes();
    void printU();
    void resetVisit();
    void createLinkedList(int size);
    void DFSHelper(vector<Node*> &vev, vector<Node*> &p, Node *end, bool &found);
    void BFTHelper(vector<Node*> &vec, vector<Node*> &p);
    vector<Node*> DF();
    vector<Node*> D();
    vector<Node*> DFSIter(Node *first, Node *second);
    vector<Node*> DFSRec(Node *start, Node *end);
    vector<Node*> BFTIter();
    vector<Node*> BFTRec();
    vector<Node*> BFTRecLinkedList();
    vector<Node*> BFTIterLinkedList();
};

#endif /* GraphSearch_h */
