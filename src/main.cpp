#include <iostream>
#include "graph.h"

using namespace std;

int main() {
	Node * n = new Node;
	n->data = 5;
	n->addNode(2,3);

	cout << n->data << endl;
	cout << n->nodes[2]->data << endl;
}