#include <iostream>
#include <string>
#include <sstream>
using namespace std;

string FirstReverse(string str) 
{

	stringstream ss;
	for (int i = str.length() - 1; i >= 0; i--)
	{
		ss << str[i];
	}
	str = ss.str();
	return str;

}

int main() 
{
	// keep this function call here
	cout << FirstReverse(gets(stdin));
	return 0;

}
