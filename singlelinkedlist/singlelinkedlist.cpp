#include <iostream>
#include <string.h>
using namespace std;

class Node {
public:
	int noMhs;
	char nama[20];
	Node* next;
};

class list {
	Node* START;
public:
	list();
	void addNode();
	bool search(int nim, Node** current, Node** previous);
	bool listempty();
	bool delNode(int element);
	void traverse();
};