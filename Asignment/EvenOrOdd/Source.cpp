#include <iostream>

using namespace std;

int main() 
{
	int num;

	cout << "Write a number" << endl;
	cin >> num;

	num = num % 2;

	if (num == 1)
	{
		cout << "number is odd" << endl;
	}
	else
	{
		cout << "number is even" << endl;
	}

	return 0;
}