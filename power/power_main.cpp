#include <iostream>
using namespace std;


int powfunc(int num, int exp)
{
	if (exp == 0)
	{
		return 1;
	}

	else if (exp == 1)
	{
		return num;
	}

	else
	{
		return num * powfunc(num, exp - 1);
	}






}

int main()
{
	int answer = powfunc(2, 4);

	cout << "Answer: " << answer << endl;


	return 0;
}