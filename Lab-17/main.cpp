#include <iostream>
using namespace std;

struct Node {
    int d;
    Node* n;
};

int main(){
    Node* h = nullptr;
    int c = 0;

    while (c != 7) {
        cout << "\n1.AddFront 2.AddTail 3.DelNode 4.Insert 5.DelAll 6.Print 7.Exit\nPick: ";
        cin >> c;
        
    }
}