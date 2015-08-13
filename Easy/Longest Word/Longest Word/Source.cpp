#include <iostream>
#include <sstream>
using namespace std;

string LongestWord(string sen)
{

	string longest;
	stringstream curString;
	for (int i = 0; i < sen.length(); i++)
	{
		if (isalnum((int)sen[i]))
		{
			curString << sen[i];

			if (i + 1 == sen.length())
			{
				string current = curString.str();
				curString.str(string());
				if ((current.length() > longest.length()) || (longest.length() == 0))
				{
					longest = current;
				}
			}
		}
		else
		{
			string current = curString.str();
			curString.str(string());
			if ((current.length() > longest.length()) || (longest.length() == 0))
			{
				longest = current;
			}
		}
	}
	return longest;
}

int main() {

	// keep this function call here
	cout << LongestWord(gets(stdin));
	return 0;

}
