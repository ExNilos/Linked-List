#include "LinkedList.h"
#include "Iterator.h"

LinkedList::LinkedList()
{

}

LinkedList::LinkedList(LinkedListNode & a_head, LinkedListNode & a_tail)
{
	_pHead = &a_head;
	_pTail = &a_tail;
}

LinkedList::~LinkedList()
{

	LinkedListNode* pTemp = nullptr;
	// Starts at the head.
	// Sets temp to equal the next item.
	// Erases the memory stored in head.
	// Sets head to now point to 
	for (; _pHead; _pHead = pTemp)
	{
		pTemp = _pHead->_pNext;
		delete _pHead;
	}
}

// Pushes an item into the head/beginning.
void LinkedList::PushFront(int a_data)
{
	// Create new node.
	LinkedListNode* pN = new LinkedListNode(a_data);
	// Set new node's previous pointer to nullptr.
	pN->_pPrev = nullptr;

	// If list is empty.
	if (_pHead == nullptr)
	{
		pN->_pNext = nullptr;
		_pHead = pN;
		_pTail = pN;
	}
	// If list is not empty.
	else
	{
		// Set new node's next pointer to point to the first node.
		pN->_pNext = _pHead;
		// Set the first node's previous pointer to point to the new node.
		_pHead->_pPrev = pN;
		// Set the list's head pointer to point to the new node.
		_pHead = pN;
	}
	_size++;
}

// Pushes an item into the tail/end.
void LinkedList::PushBack(int a_data)
{
	// Create new node.
	LinkedListNode* pN = new LinkedListNode(a_data);
	// Set new node's next pointer to nullptr.
	pN->_pNext = nullptr;

	// If list is empty.
	if (_pHead == nullptr || _pTail == nullptr)
	{
		// Set new nodes previous pointer to point to nullptr,
		pN->_pPrev = nullptr;
		// and set the list's head and tail pointer to point to the new node.
		_pHead = pN;
		_pTail = pN;
	}
	// If list is not empty.
	else
	{
		// Set new node's previous pointer to point to the last node.
		pN->_pPrev = _pTail;
		// Set the last node's next pointer to point to the new node.
		_pTail->_pNext = pN;
		// Set the list's tail pointer to point to the new node.
		_pTail = pN;
	}
	_size++;
}

// Pushes an item in front of a specified node. NYF.
void LinkedList::InsertFront(LinkedListNode & a_node, int a_data)
{
	//// Create new node.
	//Node* pN = new Node(a_data);
	//// Set new node's next pointer to point at the specified node's next node;
	//pN->_pNext = a_node._pNext;

	_size++;
}

// Pushes an item after a specified node. NYF.
void LinkedList::InsertBack(LinkedListNode & a_node, int a_data)
{
	_size++;
}

// Removes the first node in the list.
void LinkedList::PopFront()
{
	// If list is empty.
	if (_pHead == nullptr || _pTail == nullptr)
	{
		// Do nothing and terminate function.
		return;
	}
	// If not empty.
	else
	{
		// Create a temporary storage place for the node to be deleted.
		LinkedListNode* pT = _pHead;
		// Set the next node's previous pointer to point to null.
		_pHead->_pNext->_pPrev = nullptr;
		// Set the list's head pointer to point to the next node.
		_pHead = _pHead->_pNext;
		delete pT;
		_size--;
		return;
	}
}

// Removes the last node in the list.
void LinkedList::PopBack()
{
	// If list is empty.
	if (_pHead == nullptr || _pTail == nullptr)
	{
		// Do nothing and terminate function.
		return;
	}
	// If not empty.
	else
	{
		// Create a temporary storage place for the node to be deleted.
		LinkedListNode* pN = _pTail;
		// Set the previous node's next pointer to point to null.
		_pTail->_pPrev->_pNext = nullptr;
		_pTail = _pTail->_pPrev;
		delete pN;
		_size--;
		return;
	}
}

// Returns a pointer to the first node in the list.
Iterator LinkedList::First()
{
	return Iterator(_pHead);
}

// Returns a pointer to the last node in the list.
Iterator LinkedList::End()
{
	return Iterator(/*_pTail*/);
}

// Returns the size of the list.
int LinkedList::Count()
{
	return _size;
}

// Removes a node by iterator. NYF.
void LinkedList::Erase(Iterator& a_it)
{


}

// Removes all elements with the specified value. NYF.
void LinkedList::Remove(int a_data)
{
	// If list is empty.
	if (_pHead == nullptr || _pTail == nullptr)
	{
		// Do nothing and terminate function.
		return;
	}
	// If not empty.
	else
	{
		// Loop through the list.
		for (int i = 0; i < _size; i++)
		{
			// If the node's data matches the specified argument data.
			if (_pHead->_data == a_data)
			{
				// fix next and prev
				_pHead->_pNext->_pPrev = 
				_pHead->_pNext = nullptr;
				_pHead->_pPrev = nullptr;
			}
		}
	}
}