// LinkedList.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "LinkedList.h"

using namespace std;

LinkedList::LinkedList()
{
	head = new Node();
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
	Node* temp = new Node;
	while (p->next)
	{
		if (p->next->key == deleteKey)
		{
			free(p->next);
			p->next = p->next->next;
			length--;
			return true;
		}
	}
	return false;
}

Node* LinkedList::retrieveNode(string retrieveKey);
void LinkedList::printList()
{
	Node* p = head;
	while (p)
	{
		cout << p->key << endl;
	}
}
int getLength();
~LinkedList();

