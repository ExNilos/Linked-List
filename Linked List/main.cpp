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

	for (auto i = myList.First(); i != myList.End(); ++i)
	{
		cout << *i;
	}
	system("Pause");
}
