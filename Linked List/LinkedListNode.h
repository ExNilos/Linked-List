#pragma once
#include <string>

class LinkedListNode
{
	friend class LinkedList;

public:
	// Points to next node.
	LinkedListNode* _pNext = nullptr;
	// Points to previous node.
	LinkedListNode* _pPrev = nullptr;
	// Stores data.
	int _data = 0;
	


public:
	LinkedListNode();

	LinkedListNode(int a_data);

	~LinkedListNode();
};