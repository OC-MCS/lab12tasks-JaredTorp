#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

bool isBalanced(string s)
{
	bool isBalanced = true;

	vector<char> vec;

	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] == '(')
		{
			vec.push_back(s[i]);
		}
		else if (s[i] == ')')
		{
			if (vec.size() > 0)
			{
				vec.pop_back();
			}
			else
			{
				isBalanced = false;
			}
				
		}


	}


	if (vec.size() != 0)
	{
		isBalanced = false;
	}

	return isBalanced;
}

int main()
{
	ifstream file;
	file.open("balancedTestCases.txt");
	string s;
	while (getline(file, s))
	{
		if (isBalanced(s))
			cout << s << " is balanced." << endl;
		else
			cout << s << " is not balanced. " << endl;
	}

}