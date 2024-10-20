#include"lei.h"

//inline int add(int x, int y)
//{
//	return (x + y) * 10;
//}
//
//int main()
//{
//	for (int i = 0; i < 10000; i++)
//	{
//		cout << add(i , i + 1) << endl;
//	}
//
//	return 0;
//}


	void Stack::Init(size_t capacity)
	{
		_array = (DataType*)malloc(sizeof(DataType) * capacity);
		if (nullptr == _array)
		{
			perror("mallocÉêÇë¿Õ¼äÊ§°Ü");
			return;
		}
		_capacity = capacity;
		_size = 0;
	}



































