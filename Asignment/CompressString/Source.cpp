#include <iostream>
#include <vector>
#include <string>

using namespace std;

string compress(char str[])
{
	vector<char> compChars;
	vector<int> compInts;

	for (size_t i = 0; i < 80; i++)
	{
		if (str[i] == *"") { break; }

		bool alreadyComp = false;
		for (auto j = compChars.begin(); j != compChars.end(); ++j)
		{
			if (str[i] == *j)
			{
				alreadyComp = true;
			}
		}
		if (alreadyComp) { continue; }

		// COMPRESION
		compChars.push_back(str[i]);
		int occurences = 1;
		for (size_t j = i + 1; j < 80; j++)
		{
			if (str[i] == str[j]) { occurences++; }
		}
		compInts.push_back(occurences);
	}

	string result;
	for (size_t i = 0; i < compChars.size(); i++)
	{
		//cout << compChars.at(i) << ;
		result += compChars.at(i);
		result += to_string(compInts.at(i));
	}
	return result;
}

string decompress(string str) 
{
	string result;
	for (size_t i = 0; i < str.size(); i++)
	{
		if (i % 2 == 0)
		{
			for (size_t j = 0; j < str.at(i + 1) - '0'; j++)
			{
				result += str.at(i);
			}
		}
	}

	return result;
}

int main() 
{
	cout << "String: ";
	char str[80];
	cin >> str;

	string compressed = compress(str);

	cout << endl << compressed << endl;
	cout << decompress(compressed) << endl;
}