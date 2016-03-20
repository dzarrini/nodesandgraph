	#include "graph.h"

	using namespace std;

	Node::Node() {
		nodes = nullptr;
	}

	void Node::addNode(int col, double value) {
		if (nodes == nullptr) {
			nodes = new Node*[8];
			for( int i = 0; i < 8; i++) {
				nodes[i] = nullptr;
			}
		}
			nodes[col] = new Node;
			nodes[col]->data = value;
	}



	Graph::Graph() {
		root = nullptr;
	}


	void Graph::insert(double value) {
		if( root != nullptr ){
			root->data = value;
		} else {
			root = new Node;
			root->data = value;
			root->nodes = new Node*[8];

		}
	}

	void Graph::insert(int col, double value) {
		if( root->nodes[col] != nullptr ) {
			root->nodes[col]->data = value;
		} else {
			root->nodes[col] = new Node;
			root->nodes[col]->data = value;
			root->nodes[col]->nodes = new Node*[8];
			for( int i = 0; i< 8; i++){
				root->nodes[col]->nodes[i] = nullptr;
			}

		}
	}