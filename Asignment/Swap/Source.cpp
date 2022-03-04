#include <iostream>

using namespace std;

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

	cout << "Number A: " << numA << " number B: " << numB << endl;

	numA += numB;
	numB = numA - numB;
	numA -= numB;

	cout << "!SWAP!" << endl;

	cout << "Number A: " << numA << " number B: " << numB << endl;

	return 0;
}