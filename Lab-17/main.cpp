#include <iostream>
using namespace std;

struct Node {
    int d;
    Node* n;
};

void addF(Node *&h);
void addT(Node *&h);
void del(Node *&h);
void ins(Node *&h);
void delAll(Node *&h);
void prt(Node *h);

int main(){
    Node* h = nullptr;
    int c = 0;

    while (c != 7) {
        cout << "\n1.AddFront 2.AddTail 3.DelNode 4.Insert 5.DelAll 6.Print 7.Exit\nPick: ";
        cin >> c;

        while (cin.fail() || c < 1 || c > 7) {
            cin.clear();
            cin.ignore(999, '\n');
            cout << "Bad input. Pick 1-7: ";
            cin >> c;
        }

        switch(c) {
            case 1: addF(h); break;
            case 2: addT(h); break;
            case 3: del(h); break;
            case 4: ins(h); break; // Sorted insert
            case 5: delAll(h); break;
            case 6: prt(h); break;
        }
    }
}

void addF(Node *&h) {
    int v; cout << "Val: "; cin >> v;
    h = new Node{v, h};
}

void addT(Node *&h) {
    int v; cout << "Val: "; cin >> v;
    Node* t = new Node{v, nullptr};
    if (!h) { 
        h = t; return; 
    }
    
    Node* p = h;
    while (p->n) p = p->n;
    p->n = t;

}

void del(Node *&h) {
    if (!h) return;
    int v; cout << "Del val: "; cin >> v;
    
    if (h->d == v) {
        Node* t = h; h = h->n; delete t; return;
    }
    
    Node* p = h;
    while (p->n && p->n->d != v) p = p->n;
    if (p->n) {
        Node* t = p->n; p->n = t->n; delete t;
    }
}