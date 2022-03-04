#include <iostream>

using namespace std;

int main() 
{
	char str[] = "Hello";
	cout << "String: " << str << endl;

	const int length = sizeof(str)/sizeof(str[0]) - 1;

	int occurences[length];
	char letters[length];

	for (int i = 0; i < length; i++) 
	{
		letters[i] = str[i];
		occurences[i] = 0;
		for (size_t j = 0; j < i; j++)
		{
			if (letters[j] == letters[i]) 
			{
				occurences[i] = -1;
			}
		}
		if (occurences[i] == -1) {
			continue;
		}

		for (int j = 0; j < length; j++)
		{
			if (str[j] == letters[i]) 
			{
				occurences[i]++;
			}
		}
	}

	// print out
	for (int i = 0; i < length; i++) 
	{
		if (occurences[i] == -1) { continue; }
		cout << letters[i] << " = " << occurences[i] << endl;
	}

	return 0;
}