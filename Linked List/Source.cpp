#include <iostream>
using std::cout;
using std::endl;

int* myPointer = nullptr;
int myNumber1 = 1;
int myNumber2 = 2;

void AssignPointer1(int& a_number);
void AssignPointer2(int a_number);

void main()
{
	AssignPointer1(myNumber1);
	cout << myNumber1 << endl << &myNumber1 << endl << myPointer << endl;
	AssignPointer2(myNumber2);
	cout << myNumber2 << endl << &myNumber2 << endl << myPointer << endl;

	system("Pause");
}

void AssignPointer1(int &a_number)
{
	myPointer = &a_number;
}

void AssignPointer2(int a_number)
{
	myPointer = &a_number;
}

