#include <iostream>

using namespace std;

int ABS(int num)
{
	if (num < 0)
	{
		num = -num;
	}

	return num;
}

int main() 
{
	cout << "Number A:";
	int numA;
	cin >> numA;
	cout << endl;

	cout << "Number B:";
	int numB;
	cin >> numB;
	cout << endl;

	int result = ABS(numA - numB);

	cout << "The aboslute difference is " << result << endl;

	return 0;
}