#include <iostream>

using namespace std;

// Finds the length of the char
int length(char str[]) 
{
	char space[] = "";
	int length = 80;
	int newLength = 0;
	for (size_t i = 0; i < length; i++)
	{
		if(str[i] == space[0])
		{
			break;
		}

		newLength++;
	}

	return newLength;
}

int main() 
{
	char sentence[] = "Hello my name is Alvin";
	cout << "Sentence; " << sentence << endl << "Look for:";

	char str[80];
	cin >> str;

	const int sentLength = sizeof(sentence) / sizeof(sentence[0]);
	const int strLength = length(str);

	char currentStr[80];

	int match = 0;
	for (size_t i = 0; i < sentLength - strLength; i++)
	{
		match = 0;
		for (size_t j = 0; j < strLength; j++)
		{
			if (sentence[i + j] == str[j]) 
			{
				match++;
			}
		}

		if (match == strLength) 
		{
			break;
		}
	}

	if (match == strLength)
	{
		cout << "The word " << str << " was found in the sentence!" << endl;
	}
	else
	{
		cout << "The word " << str << " was not found in the sentence!" << endl;
	}

	return 0;
}