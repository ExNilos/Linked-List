#pragma once

class Node
{
	friend class LinkedList;

protected:
	// Points to next node.
	Node* _pNext = nullptr;
	// Points to previous node.
	Node* _pPrev = nullptr;
	// Stores data.
	const int _data = 0;


public:
	Node();

	Node(int a_data);

	~Node();
};