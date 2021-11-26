#include <iostream>
#include <string>
using namespace std;

int FindCharacter(const string str, const char ch)
{
	int count = 0;
	size_t index_last_word = str.find_last_of(" ");
	for (size_t i = index_last_word == string::npos ? 0 : index_last_word; i < str.size(); i++)
		if (str.at(i) == ch)
			count++;
	return count;
}

void main()
{
	string str;
	getline(cin, str);

	cout << "The count \'a\' in your string are " << FindCharacter(str, 'a') << endl;

}



