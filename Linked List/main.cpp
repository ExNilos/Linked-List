#include <iostream>
#include "LinkedList.h"
#include "Iterator.h"

void main()
{
	using std::cout;
	using std::endl;

	LinkedList myList;
	myList.PushFront(16);
	myList.PushFront(17);
	myList.PushFront(18);
	myList.PushBack(15);

	for (Iterator it(myList.First()); it._pNode != nullptr; ++it)
	{
		cout << it._pNode->_data;
	}
	system("Pause");
}
