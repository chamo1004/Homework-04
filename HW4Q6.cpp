#include <iostream>
using namespace std;

int smallestCommonFactor (int Number1, int Number2)
{
	int max;
	if (Number1 > Number2)
	max = Number1;
	else
	max = Number2;
	while (true)
	{
		if (max % Number1 == 0 && max % Number2 == 0)
		{
		return max;
		}
		max++;
	}
	 
}

int smallestCommonFactor (int Number1, int Number2);

int main()
{
	int Number1;
	int Number2;
	cout << "Enter Number1 : ";
	cin >> Number1;
	cout << "Enter Number2 : ";
	cin >> Number2;
	cout << "SCF of " << Number1 << " and " << Number2 << " is " << smallestCommonFactor(Number1, Number2) << endl;
	return 0;
}
