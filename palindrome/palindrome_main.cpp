#include <iostream>
#include <fstream>
#include <string>
#include <cctype>


using namespace std;




string helpPls(string s)
{
	string product;
	for (int i = 0; i < s.length(); i++)
	{
		if (isalpha(s[i]))
		{
			
			product += tolower(s[i]);
		}



	}

	return product;
}


bool palinFunc(string s)
{

	bool isPalin = true;
	int first = 0;
	int last = (s.length() - 1);
	
	if (s.length() > 1)
	{
		if (s[first] == s[last])
		{
			s = s.substr(first + 1, last - 1);

			isPalin = palinFunc(s);

		}
		else
		{
			isPalin = false;
		}
	}
		

return isPalin;

}






int main()
{
	ifstream myFile;
	myFile.open("testCases.txt");
	string input;
	


	while (getline(myFile, input))
	{
		input = helpPls(input);

		if (palinFunc(input))
		{
			cout << input << " is a palindrome!" << endl;
		}
		else
		{
			cout << input << " is not a palindrome!" << endl;
		}

	}







	return 0;
}