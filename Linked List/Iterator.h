#pragma once
class LinkedListNode;
class Iterator
{
private:

protected:


public:
	LinkedListNode* _pNode = nullptr;

	Iterator();
	Iterator(LinkedListNode* a_node);
	~Iterator();

	// Returns true if the iterators match.
	bool operator==(Iterator& a_other);
	// Returns true if the iterators do not match.
	bool operator!=(Iterator& a_other);
	// Pre-increment. Makes the iterator point to the next node in the list.
	Iterator operator++();
	// Pre-decrement. Makes the iterator point to the previous node in the list.
	Iterator operator--();
	// Post-increment.
	Iterator operator++(int);
	// Post-decrement.
	Iterator operator--(int);

	int operator*();



};

