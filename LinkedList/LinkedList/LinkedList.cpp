// LinkedList.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "LinkedList.h"
#include <iostream>

using namespace std;

LinkedList::LinkedList()
{
	head = new Node;
	head->next = nullptr;
	length = 0;
}

Node* LinkedList::insertNode(Node* newNode)
{
	// traverse list until we find null - inserts at end
	if (!head)
	{
		head = newNode;
		head->next = nullptr;
		length++;
		return head;
	}
	Node* p = head;
	while (p->next)
	{
		p = p->next;
	}
	p->next = newNode;
	newNode->next = nullptr;
	length++;
	return head;
}

bool LinkedList::deleteNode(string deleteKey)
{
	if (!head)
	{
		return false;
	}

	Node* p = head;
	while (p->next)
	{
		if (p->next->key == deleteKey)
		{
			Node *temp = p->next;
			p->next = p->next->next;
			delete temp;
			length--;
			return true;
		}
	}
	return false;
}

Node* LinkedList::retrieveNode(string retrieveKey)
{
	Node *p = head;
	while (p)
	{
		if (p->key == retrieveKey)
		{
			return p;
		}
	}
	return nullptr;
}
void LinkedList::printList()
{
	Node* p = head;
	while (p)
	{
		cout << p->key << endl;
		p = p->next;
	}
}

int LinkedList::getLength()
{
	return length;
}

LinkedList::~LinkedList()    // deallocate all memory
{
	Node* p = head;
	Node* q = head;
	while (q)
	{
		p = q;
		q = q->next;
		delete p;
	}
}

