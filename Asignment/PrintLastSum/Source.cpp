#include <iostream>

using namespace std;

int main() 
{
	int num;

	cout << "Write a number" << endl;
	cin >> num;

	cout << "Last digit: " << num % 10 << endl;

	return 0;
}