#include<iostream>
using namespace std;

int main()
{
	int N;
	double average = 0,sum = 0,ele;
	
	cout << "Enter The Value : ";
	cin >> N;
	
	for(int i = 1; i <= N ;++i)
	{
		cout << "Enter the Element : ";
		cin >> ele;
		
		sum = sum + ele;
	}
	
	average = (sum/N); 
	
	cout << "Average is :" << average << endl;
	
	return 0;		
}
