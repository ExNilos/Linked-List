#pragma once
class LinkedListNode;
class Iterator
{
public:
	Iterator();
	Iterator(LinkedListNode* a_node);
	~Iterator();

	bool operator==(Iterator& a_other);
	bool operator!=(Iterator& a_other);
	Iterator* operator++();
	Iterator operator--();
	Iterator operator++(int);
	Iterator operator--(int);

	int operator*();

	LinkedListNode* _pNode = nullptr;

};

