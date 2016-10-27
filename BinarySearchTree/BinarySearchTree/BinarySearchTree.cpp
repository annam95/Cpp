// BinarySearchTree.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


class Node
{
private:
	Node* left_m;
	Node* right_m;
	int value_m;
public:
	void insert(int value);
	bool contains(int value);
	void printInOrder();
};

