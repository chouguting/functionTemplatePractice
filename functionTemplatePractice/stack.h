#ifndef  stack_H
#define stack_H
#include <iostream>
using namespace std;

template<class Y, int s>
struct stack_define
{
	Y data[s];
	int size = s;
	int top = -1;
};


template<class Y, int s>
int isEmpty(stack_define<Y, s>& stack)
{
	if (stack.top == -1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}


template<class Y, int s>
int isFull(stack_define<Y, s>& stack)
{
	if (stack.top == s - 1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}


template<class Y, int s>
bool push(stack_define<Y, s>& stack, float pushNumber)
{
	if (isFull(stack) == 1)
	{
		return false;
	}
	else
	{
		stack.data[++stack.top] = pushNumber;
		return true;
	}
}


template<class Y, int s>
bool pop(stack_define<Y, s>& stack)
{
	if (isEmpty(stack) == 1)
	{
		return false;
	}
	else
	{
		cout << stack.data[stack.top--] << " has been popped\n";
		return true;
	}
}

template<class Y, int s>
void printStack(stack_define<Y, s>& stack)
{
	int i;
	for (i = stack.top; i >= 0; i--)
	{
		cout << "\t" << stack.data[i] << "\n";
	}
}




template<class Y, int s>
void doStackStuff(stack_define<Y, s>& theStack)
{
	int operation;
	while (true)
	{
		cout << "\n\t請選擇操作:";
		cin >> operation;
		if (operation == 1)
		{
			cout << "\tpush 請輸入數字:";
			float pushNumber;
			cin >> pushNumber;
			bool result = push(theStack, pushNumber);
			if (result == true)
			{
				cout << pushNumber << " has been pushed\n";
			}
			else
			{
				cout << "推送失敗\n";
			}
		}
		else if (operation == 2)
		{
			cout << "pop:\n";
			bool result = pop(theStack);
			if (result == false)
			{
				cout << "POP失敗\n";
			}
		}
		else if (operation == 3)
		{
			cout << "\nprint stack:\n";
			printStack(theStack);
		}
		else if (operation == 4)
		{
			cout << "\t下一個VERSION\n";

			system("pause");
			system("cls");
			break;

		}
	}
}


#endif
