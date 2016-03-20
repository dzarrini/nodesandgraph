#pragma once

using namespace std;

struct Node {
	Node ** nodes = nullptr;
	double data;
	Node();
	void addNode(int col, double value);
};

struct Graph {
	Graph();
	Node * root;
	void insert(double value);
	void insert(int col, double value);

};