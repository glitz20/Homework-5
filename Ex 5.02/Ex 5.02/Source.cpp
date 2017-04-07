//Sabin Sapkota//
//USe of template//
#include<iostream>
#include<string>
using namespace std;

template<typename T>//creates a template with typename as T//
bool isSorted(const T list[], int size)//sorts the list//
{
	for (int i = 0; i < size - 1; i++) 
		if (list[i] > list[i + 1])
			return false;
		
			return true;
	
	}


int main() {
	int intlist[] = { 1,2,3,4,5 };//creating array//
	double doublelist[] = { 1,2.2,3.3,4.4 };
	string stringlist[] = { "Scala","R","Ajax", "Angular" };

	cout << "Is intlist sorted? " << (isSorted(intlist, 5)? "true" :"false") << endl;//as a result of bool function states true or false based arrangement of items in the list//
	cout << "Is doublelist sorted? " << (isSorted(doublelist, 4) ? "true" : "false") << endl;
	cout << "Is stringlist sorted? " << (isSorted(stringlist, 4) ? "true" : "false") << endl;

	return 0;
}