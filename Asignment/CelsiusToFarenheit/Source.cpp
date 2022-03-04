#include <iostream>

using namespace std;

int main() 
{
	cout << "Celsius: ";

	double cel;
	cin >> cel;

	double far = cel * 9 / 5 + 32;

	cout << cel << " celsius is " << far << " in farenheit" << endl;

	return 0;
}