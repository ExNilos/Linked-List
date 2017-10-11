#pragma once
#include <iostream>
#include "LinkedListNode.h"

// Allows us to output text.
using std::cout;
// Allows us to ask for input.
using std::cin;
// Allows us to make a new line.
using std::endl;

class Iterator;

// Double Linked List. Only works with integers so far.
class LinkedList
{
private:
		
	
protected:
	// The first node. Init to nullptr.
	LinkedListNode* _pHead = nullptr;
	// The last node. Init to nullptr.
	LinkedListNode* _pTail = nullptr;
	// The amount of nodes in the list. Init to 0.
	int _size = 0;

public:
	LinkedList();
	LinkedList(LinkedListNode& a_head, LinkedListNode& a_tail);
	~LinkedList(); 
	// Pushes an item into the head/beginning.
	void PushFront(int a_data);
	// Pushes an item into the tail/end.
	void PushBack(int a_data);
	// Pushes an item in front of a specified node. NYF.
	void InsertFront(LinkedListNode& a_node, int a_data);
	// Pushes an item after a specified node. NYF.
    void InsertBack(LinkedListNode& a_node, int a_data);
	
	// Removes the first node in the list.
	void PopFront();
	// Removes the last node in the list.
	void PopBack();
	// Returns a pointer to the first node in the list.
	Iterator First();
	// Returns a pointer to the last node in the list.
	Iterator End();
	int Count();
	// Removes a node by iterator. NYF.
	void Erase(Iterator& a_it);
	// Removes all elements with the specified value.
	void Remove(int a_data);


};

