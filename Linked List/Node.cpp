#include "Node.h"

Node::Node()
{
}

Node::Node(int a_data) : _data(a_data)
{
	_pNext = nullptr;
	_pPrev = nullptr;
}

Node::~Node()
{
	_pNext = nullptr;
	delete _pNext;
	_pPrev = nullptr;
	delete _pPrev;
}
