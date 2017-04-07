//Submitted by Sabin Sapkota//
//Shuffling the list//

#include<iostream>
#include <vector>
#include <ctime>
using namespace std;

template<typename t>
void shuffle(vector<t>&list) {
	srand(time(0));
	for (int i = 0; i < list.size(); i++) //loops through  all the items in the vector list//
	{
		int index = rand()%list.size();
		t temp = list[index];//correspondes each number in the list with random indices in the vector//
		list[index] = list[i];
		list[i] = temp;
	}
}

int main() {
	vector<int>list;
	list.push_back(1);//adds int to the list//
	list.push_back(2);
	list.push_back(3);
	list.push_back(4);
	list.push_back(5);
    list.push_back(6);
	list.push_back(7);
	list.push_back(8);
	list.push_back(9);
	list.push_back(10);
	cout << "The original list is " << endl;
	for (int i = 0; i < list.size(); i++)
		cout << list[i] << " ";
	shuffle(list);//shuffles the list in random order//
	cout << endl;
	cout << "The shuffled list is " << endl;
	for (int i = 0; i < list.size(); i++)//outputs all the item in the vector//
		cout << list[i] << " ";

	return 0;

}