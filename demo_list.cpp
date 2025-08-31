#include <bits/stdc++.h>

using namespace std;

struct LinkedList {
    struct Node {
        string data;
        Node* next;
        Node(){}
        Node(string _data) {
            data = _data;
            next = nullptr;
        }
    };

    Node* head = NULL;

    void addFirst(string v) {
        Node* new_node = new Node();
        new_node->data = v;
        new_node->next = head;
        head = new_node;
    }

    void printList(){
        for(Node* p = head; p != NULL; p = p->next) {
            cout << p->data << " ";
        }
        cout << endl;
    }

    void addLast(string v) {
        // TODO
        Node *new_node = new Node(v);
        if(head == NULL){
            head = new_node;
            return;
        }
        Node *tmp = head;
        while(tmp->next != NULL){
            tmp = tmp->next;
        }
        tmp->next = new_node;
    }

    void insertAfter(string pivot, string newKey) {
        // TODO
        Node *p = new Node();
        for(p = head; p != NULL; p = p->next){
            if(p->data == pivot) break;
        }
        if(p == NULL) return;
        Node *new_node = new Node(newKey);
        new_node->next = p->next;
        p->next = new_node;
    }

    void removeFirst() {
        // TODO
        if(head == NULL) return;
        Node *xoa = head;
        head = head->next;
        delete xoa;
    }

    void removeLast() {
        // TODO
        if(head == NULL) return;
        if(head->next == NULL){
            removeFirst();
            return;
        }
        Node *tmp = head;
        while(tmp->next->next != NULL){
            tmp = tmp->next;
        }
        Node *xoa = tmp->next;
        tmp->next = NULL;
        delete xoa;
    }

    bool searchByKey(string key) {
        // TODO
    }

    void removeByKey(string key) {
        // TODO
        Node *p = head;
        while(p != nullptr && p->next->data != key){
            p = p->next;
        }
        if(p == nullptr) return;
        Node *xoa = p->next;
        p->next = p->next->next;
        delete xoa;
    }
};

int main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    
    LinkedList demoList;
    demoList.addFirst("1");
    demoList.addFirst("2");
    demoList.addFirst("3");
    demoList.printList();
  
    // demoList.removeFirst();
    // demoList.removeLast();

   demoList.addLast("1");
   demoList.addLast("2");
   demoList.addLast("5");
   demoList.insertAfter("5", "4");
   demoList.printList();

   demoList.addLast("6");
   demoList.addLast("7");
   demoList.removeByKey("4");
   demoList.printList();



//    if(demoList.searchByKey("1")) {
//        cout << "YES" << endl;
//    }
//    else
//        cout << "NO" << endl;



    return 0;
}
