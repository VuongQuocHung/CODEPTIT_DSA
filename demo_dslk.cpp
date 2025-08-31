#include <bits/stdc++.h>

using namespace std;

#define fi first
#define se second
#define endl '\n'
#define pb push_back
#define ll long long
#define vi vector<int>
#define ii pair<int, int>
#define fspr fixed << setprecision
#define all(x) (x).begin(), (x).end()
#define FOR(i, a, b) for(int i = a; i <= b; i++)
#define FORD(i, a, b) for(int i = a; i >= b; i--)
#define faster() ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

/************************ MADE BY VƯƠNG QUỐC HƯNG ************************/

struct LinkedList {
	struct node {
		string data;
		node* next;
		// node(){}
		node(string _data){
			data = _data;
			next = NULL;
		}
		
	};

	node *head = NULL;

	void addFirst(string v){
		node *new_node = new node();
		new_node->data = v;
		new_node->next = head;
		head = new_node;
	}

	void printList(){
		for(node *p = head; p != NULL; P = p->next){
			cout << p->data << ' ';
		}
		cout << endl;
	}
	void addLast(string v){
		node *new_node = new node();
		new_node->data = v;
		
	}

	void insertAfter(string pivot, string newKey()){

	}

	void removeFirst(){

	}

	bool searchKey(){

	}

};
int main(){
	faster();
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	
	head = new node("Rome");
	head->next = new node("Seatle");
	head->next->next = new node("Toronto");
	cout << "Data of head = " << head->data << endl;
	cout << "Addres of head = " << &head << endl;
	cout << "Data of head->next = " << head->next->data << endl;
	cout << "Addres of head->next = " << &head->next << endl;
	cout << "Addres of head->next->next = " << &head->next->next << endl;

	return 0;
}
