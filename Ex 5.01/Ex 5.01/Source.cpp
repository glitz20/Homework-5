//Sabin Sapkota//
//Use of template in linear search for different data type//
#include<iostream>
#include<string>
using namespace std;

template <typename T>//creating template with typename T//
int linearsearch(T list[], T key, int arraysize)//function to search the index of the entered item//
{
	for (int i = 0; i < arraysize; i++)
	{
		if (key == list[i])
			return i;
	}
	return -1;
}

int main() {
	int intlist[] = { 1,2,3,4,5,6 };//creating an array//
	double doublelist[] = { 1.1,2.2,3,4,5.5 };
	string stringlist[] = { "Python","Java","Ruby","Javascript"};

	cout << "3 is in the " << linearsearch(intlist, 3, 6) + 1 << "rd position in the intlist array" << endl;//display the position of the item in the list//
	cout << "2.2 is in the " << linearsearch(doublelist, 2.2, 5) + 1 << "th position in the doublelist array" << endl;
	cout << "Ruby is in the " << linearsearch(stringlist, string("Ruby"), 4) + 1 << "rd position in the stringlist array" << endl;

}