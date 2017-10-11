#include "LinkedListNode.h"

LinkedListNode::LinkedListNode()
{
}

LinkedListNode::LinkedListNode(int a_data) : _data(a_data) , _pNext(nullptr) , _pPrev(nullptr)
{

}

LinkedListNode::~LinkedListNode()
{
	_pNext = nullptr;
	delete _pNext;
	_pPrev = nullptr;
	delete _pPrev;
}
