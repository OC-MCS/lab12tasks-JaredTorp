#include <iostream>
using namespace std;

void sign(int n)
{
	if (n > 0)
	{
		cout << n << endl;
		sign(n - 1);
	}
} 

int main()
{
	sign(4);
	return 0;
}


