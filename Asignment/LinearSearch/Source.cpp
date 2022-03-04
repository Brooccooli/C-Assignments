#include <iostream>

using namespace std;

int main() 
{
	int numbers[]{ 2,6,10,0,9 };
	int* ptr = numbers;

	cout << "Collection{2,6,10,0,9}, Search for: ";

	int num;
	cin >> num;

	int pos = 0;
	bool found = false;
	for (size_t i = 0; i < size(numbers); i++) {

		if (*(numbers + i) == num)
		{
			found = true;
			break;
		}
		pos++;
	}

	if (found)
	{
		cout << "The number " << num << " was located at position " << pos << endl;
	}
	else
	{
		cout << "The number " << num << " wasn't found in the collection" << endl;
	}

	return 0;
}