#include <iostream>
#include <string.h>
using namespace std;

class Node {
public:
	int noMhs;
	char nama[20];
	Node* next;
};

class List {
	Node* START;
public:
	List();
	void addNode();
	bool search(int nim, Node** current, Node** previous);
	bool listempty();
	bool delNode(int element);
	void traverse();
};

List::List() {
	START = NULL;
}
void List::addNode()/*menambah sebuah Node kedalam list*/
{
	int nim;
	char nm[20];
	cout << "\nMasukkan Nomor Mahasiswa: ";
	cin >> nim;
	cout << "\nMasukkan Nama: ";
	cin >> nm;
}