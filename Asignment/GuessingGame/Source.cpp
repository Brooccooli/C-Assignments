#include <iostream>

using namespace std;

int main() 
{
	int random = rand() % 10;
	random++;

	int numberOfTries = 0;
	int num = 0;

	cout << "Guess a number between 1 and 10" << endl;

	cin >> num;

	while (random != num)
	{
		cout << "Wrong number guess again!" << endl;
		cin >> num;
		cout << endl;

		numberOfTries++;
	}

	cout << "Correct! The number was " << random << endl;
	cout << "You guessed " << numberOfTries << " times!" << endl;

	return 0;
}