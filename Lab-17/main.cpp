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
    }
}