#include <iostream>
#include <vector>

using namespace std;

int amountOfDigits(int num)
{
	int digits = 0;
	if (num < 0) { return 0; }
	while (num > 0)
	{
		num /= 10;
		digits++;
	}
	return digits;
}

int main()
{
	cout << "Write a single digit: ";
	int digit;
	cin >> digit;

	cout << " Write some numbers: ";
	int nums;
	cin >> nums;

	int length = amountOfDigits(nums);
	vector<int> eachNumber;

	int numCopy = nums;

	for (size_t i = 0; i < length - 1; i++)
	{
		int numTemp = numCopy;
		int size = 1;

		for (size_t j = 0; j < length - i - 1; j++)
		{
			numTemp /= 10;
			size *= 10;
		}
		numCopy -= numTemp * size;
		eachNumber.push_back(numTemp);
	}
	eachNumber.push_back(numCopy);

	bool found = false;
	for (auto i = eachNumber.begin(); i != eachNumber.end(); ++i)
	{
		if (digit == *i) 
		{
			found = true;
			break;
		}
	}

	if (found) 
	{
		cout << nums << " contain the number " << digit << endl;
	}
	else
	{
		cout << nums << " doesn't contain the number " << digit << endl;
	}
}