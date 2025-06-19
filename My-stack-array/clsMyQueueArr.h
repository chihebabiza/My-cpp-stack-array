#pragma once

#include <iostream>
#include "clsDynamicArray.h"


using namespace std;
template <class T>

class clsMyQueueArr
{

protected:
	clsDynamicArray <T> _MyArray;

public:

	void push(T Item)
	{
		_MyArray.InsertAtEnd(Item);
	}


	void pop()
	{
		_MyArray.DeleteFirstItem();
	}

	void Print()
	{
		_MyArray.PrintList();
	}

	int Size()
	{
		return _MyArray.Size();
	}

	bool IsEmpty()
	{
		return _MyArray.IsEmpty();
	}

	T front()
	{
		return _MyArray.GetItem(0);
	}

	T back()
	{
		return _MyArray.GetItem(Size() - 1);
	}

	T GetItem(int Index)
	{
		return _MyArray.GetItem(Index);
	}

	void Reverse()
	{
		_MyArray.Reverse();
	}

	void UpdateItem(int Index, T Value)
	{
		_MyArray.SetItem(Index, Value);
	}

	void InsertAfter(int Index, T Value)
	{
		_MyArray.InsertAfter(Index, Value);
	}

	void InsertAtFront(T Value)
	{
		_MyArray.InsertAtBeginning(Value);
	}

	void InsertAtBack(T Value)
	{
		_MyArray.InsertAtEnd(Value);
	}

	void Clear()
	{
		_MyArray.Clear();
	}



};