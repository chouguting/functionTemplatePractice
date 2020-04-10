#pragma clang diagnostic ignored "-Winvalid-source-encoding"

#include <iostream>
#include "stack.h"

using namespace std;


template<class T>
T max(T array[], int size)
{
	T max = array[0];
	int i;
	for(i=0;i<size;i++)
	{
		if(array[i]>max)
		{
			max = array[i];
		}
	}
	return max;
}

int main()
{
	int a1[] = { 1, 2, 3, 5, 4 };
	double a2[] = { 1.2, 3.4, 5.6, 2.3, 4.5 };


	cout << "第一小題" << endl;
	cout << "max of a1:" << max(a1,5) << endl;
	cout << "max of a2:" << max(a2, 5) << endl;

	system("pause");
	
	cout << "第二小題" << endl;
	system("cls");
	stack_define<int, 10> theStack;
	cout << " stack data type: int\nstack 大小 : 10\n";
	doStackStuff(theStack);
	cout << " stack data type: float\nstack 大小 : 5\n";
	stack_define<float, 5> theStack2;
	doStackStuff(theStack2);
	cout << "Bye Bye\n\n";
	
}