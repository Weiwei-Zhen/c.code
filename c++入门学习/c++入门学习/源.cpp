#include<stdio.h>
#include<stdlib.h>
//
//int a = 10;
//
//namespace test
//{
//	int a = 5;
//}
//
////using namespace test;
//
//int main()
//{
//	int a = 15;
//	printf("%d\n", a);
//	printf("%d\n", ::a);
//	printf("%d\n",test::a);
//
//
//	return 0;
//}


//namespace test
//{
//	int rand = 10;
//
//
//}
//
//int main()
//{
//	printf("%d\n", test::rand);
//	printf("%p\n", rand);
//
//	return 0;
//}

//
//namespace test1
//{
//	int a = 10;
//	namespace test2
//	{
//		int a = 15;
//	}
//
//}
//
//int main()
//{
//	printf("%d\n", test1::a);
//	printf("%d\n", test1::test2::a);
//
//	return 0;
//}

//#include<iostream>
//#include<vector>
//#include<list>
//
//using std::cout;
//using std::endl;
//int main()
//{
//	int x, y;
//	std::cin >> x >> y;
//	cout << x << " "<<y << endl;
//	
//}


#include<iostream>
using namespace std;

//int add(int x,int y)
//{
//	cout << "int add(int x,int y)" << endl;
//	return x + y;
//}
//
//double add(double x, double y)
//{
//	cout << "double add(double x,double y)" << endl;
//	return x + y;
//}
//
//
//int main()
//{
//	cout << add(1, 2 )<< endl;
//	cout << add(1.1, 2.2 )<< endl;
//	return 0;
//}

//
//int main()
//{
//	int a = 15;
//	int& b = a;
//	cout << b << endl;
//	return 0;
//}

//void swap(int& x, int& y)
//{
//	int tmp = x;
//	x = y;
//	y = tmp;
//}
//void swap2(int*& x, int*& y)
//{
//	int* tmp = x;
//	x = y;
//	y = tmp;
//}
//int main()
//{
//	int a = 10;
//	int b = 15;
//	swap(a, b);
//	cout << a << " " << b << endl;
//	int* pa = &a;
//	int* pb = &b;
//	cout << pa << " " << pb << endl;
//	swap2(pa, pb);
//	cout << pa << " " << pb << endl;
//	return 0;
//}

//int& count()
//{
//	 int n=0 ;
//	
//	n++;
//	return n;
//}
//
//int main()
//{
//	const int ret = count();
//	cout << ret << endl;  
//	printf("11\n");
//	cout << ret << endl; 
//	return 0;
//}





int main()
{
	int a = 15;
	auto b = a;
	auto c = 15 + 15136.6;
	cout << typeid(b).name() << " "<<b<<endl;
	cout << typeid(c).name() << " "<<c<<endl;
	return 0;
}





















