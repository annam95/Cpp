#include <string>
using namespace std;

struct Node
{
	string key;
	Node* next;
};

class LinkedList
{
private:
	Node *head;
	int length;    // keep track of how many nodes are in the list
public:
	LinkedList();
	Node* insertNode(Node* newNode);
	bool deleteNode(string deleteKey);
	Node* retrieveNode(string retrieveKey);
	void printList();
	int getLength();
	~LinkedList();
};