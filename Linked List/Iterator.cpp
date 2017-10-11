#include "Iterator.h"
#include "LinkedListNode.h"
#include <iostream>


Iterator::Iterator()
{
}

Iterator::Iterator(LinkedListNode* a_node)
{
	_pNode = a_node;
}


Iterator::~Iterator()
{
}

bool Iterator::operator ==(Iterator& a_other)
{
	return _pNode == a_other._pNode;
}

bool Iterator::operator!=(Iterator& a_other)
{
	return _pNode != a_other._pNode;
}

Iterator Iterator::operator++()
{
		_pNode = _pNode->_pNext;
		return *this;
}

Iterator Iterator::operator--()
{
	_pNode = _pNode->_pPrev;
	return *this;
}

Iterator Iterator::operator++(int)
{
	Iterator temp(_pNode);
	_pNode = _pNode->_pNext;
	return temp;
}

Iterator Iterator::operator--(int)
{
	Iterator temp(_pNode);
	_pNode = _pNode->_pPrev;
	return temp;
}

int Iterator::operator*()
{
	return _pNode->_data;
}
