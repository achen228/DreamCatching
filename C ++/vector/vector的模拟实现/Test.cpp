#include "Vector.h"

void TestVector1() 
{
	Vector<int> v;
	v.PushBack(1);
	v.PushBack(2);
	v.PushBack(3);
	v.PushBack(4);
	v.PushBack(5);

	for (size_t i = 0; i < v.Size(); ++i) 
	{
		cout << v[i] << " ";
	}
	cout << endl;
	cout << v.Capacity() << endl;

	Vector<int>::iterator it = v.begin();
	while (it != v.end()) 
	{
		cout << *it << " ";
		++it;
	}
	cout << endl;

	for (auto e : v) 
	{
		cout << e << " ";
	}
	cout << endl;
}


void TestVector2()
{
	Vector<int> v;
	v.PushBack(1);
	v.PushBack(2);
	v.PushBack(3);
	v.PushBack(4);
	v.PushBack(5);
	v.PushBack(6);
	v.PushBack(7);

	Vector<int>::iterator it = v.begin();
	v.Insert(it, 0);
	Vector<int>::iterator ret = std::find(v.begin(), v.end(), 3);
	if (ret != v.end())
	{
		v.Insert(ret, 30);
	}

	ret = std::find(v.begin(), v.end(), 3);
	v.Erase(ret);

	for (auto e : v) 
	{
		cout << e << " ";
	}
	cout << endl;
}
