#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;


bool isBalanced(string ourstring)
{
	vector <char> vec;
	bool balanced = true; //assume it is true
	for (int i = 0; i < ourstring.size(); i++)
	{
		if (ourstring[i] == '(')
		{
			vec.push_back(ourstring[i]); //pushing the vector if the ( is is there
		}
		else if (ourstring[i] == ')')
		{
			if (vec.size() > 0) //we cant pop an empty stack
			{
				vec.pop_back(); //popping the ( if we run into a )
			}
			else
			{
				balanced = false; 
			}
		}
	}

	if (vec.size() != 0)
	{
		balanced = false;
	}


	return balanced;
}

int main()
{
	ifstream file;
	file.open("balancedTestCases.txt");
	string ourstring;

	while (getline(file, ourstring))
	{
		if (isBalanced(ourstring) == true)
		{
			cout << ourstring << " is balanced" << endl;
		}
		else
		{
			cout << ourstring << " is not balanced" << endl;
		}

	}



}