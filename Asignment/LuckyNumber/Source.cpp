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
	cout << "Write a number: ";
	int num;
	cin >> num;

	const int amount = amountOfDigits(num);
	vector<int> eachNumber;

	for (size_t i = 0; i < amount - 1; i++)
	{
		int numCopy = num;
		int size = 1;

		for (size_t j = 0; j < amount - i - 1; j++)
		{
			numCopy /= 10;
			size *= 10;
		}
		num -= numCopy * size;
		eachNumber.push_back(numCopy);
	}
	eachNumber.push_back(num);

	bool lucky = true;
	for (auto i = eachNumber.begin(); i != eachNumber.end(); ++i)
	{
		for (auto j = eachNumber.begin(); j != eachNumber.end(); ++j)
		{
			if (*i == *j && i != j) 
			{
				lucky = false;
			}
		}
	}

	if (lucky) 
	{
		cout << "your number is Lucky!" << endl;
	}
	else 
	{
		cout << "your number is not Lucky!" << endl;
	}

	return 0;
}