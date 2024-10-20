#pragma once
#include<iostream>
using namespace std;
typedef int DataType;
class Stack
{
public:
	void Init(size_t capacity);

	void Push(const DataType& data)
	{
		// À©ÈÝ
		_array[_size] = data;
		++_size;
	}
	DataType Top()
	{
		return _array[_size - 1];
	}
	void Destroy()
	{
		if (_array)
		{
			free(_array);
			_array = nullptr;
			_capacity = 0;
			_size = 0;
		}
	}
	DataType* _array;
	size_t _capacity;
	size_t _size;
};
int main()
{
	Stack s;
	s.Init(10);
	s.Push(1);
	s.Push(2);
	s.Push(3);
	cout << s.Top() << endl;
	s.Destroy();
	return 0;
}
