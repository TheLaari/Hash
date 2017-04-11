#include <iostream>
#include <unordered_map>
#include <string>
#include <vector>

using namespace std;

int main()
{
	unordered_map<string, string> hashtable;
	hashtable.emplace("www.google.com", "74.125.224.72");

	for (auto itr = hashtable.begin(); itr != hashtable.end(); itr++)

	{
		cout << (*itr).first << ": " << (*itr).second << endl;
	}

	return 0;
}