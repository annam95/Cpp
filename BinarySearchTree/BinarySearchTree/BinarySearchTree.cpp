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
	void insert(int value)
	{
		if (value < value_m)
		{
			if (left_m == nullptr)
			{
				left_m->value_m = value;
			}
			else
			{
				left_m.insert(value);
			}
		}
		else if (value > value_m)
		{
			if (right_m == nullptr)
			{
				right_m->value_m = value;
			}
			else
			{
				right_m.insert(value);
			}
		}
		else
		{
			// what to do if value == value_m?
		}
	}

	bool contains(int value)
	{
		if (value == value_m)
		{
			return true;
		}
		
		else if (value < value_m)
		{
			if (left_m == nullptr) { return false; }
			else { left_m.contains(value); }
		}

		else
		{
			if (right_m == nullptr) { return false; }
			else { right_m.contains(value); }
		}
	}

	void printInOrder()
	{
		if (left_m != nullptr)
		{
			left_m.printInOrder();
		}
		printInOrder();
		if (right_m != nullptr)
		{
			right_m.printInOrder();
		}
	}
};

