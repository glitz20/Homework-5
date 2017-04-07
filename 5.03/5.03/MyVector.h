#ifndef MYVECTOR_H
#define MYVECTOR_H
#include <iostream>
using namespace std;

template <typename T>
class MyVector {
public:
	MyVector();
	void push_back(T element);
	void pop_back();
	unsigned int size();
	bool empty();
	T at(int index);
	void clear();
	void swap(MyVector v2);

private:
	T elements[100];
	int vectorSize;
};
#endif