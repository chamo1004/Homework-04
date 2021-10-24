#include<iostream>
using namespace std;

int main()
{
	int N,min1,min2,min3;
	double ele;
	
	
	cout << "Enter The Value : ";
	cin >> N;
	
	int array[N];
	
	for(int i = 1; i <= N ;++i)
	{
		cout << "Enter the Element : ";
		cin >> ele;
		
		array[i] = ele;			
	}
	
	min1 = array[0];
	for(int i = 0; i < N ;++i)
	{
		if(min1 > array[i])
		{
			min1 = array[i];
		}
	}
	
	min2 = array[0];
	for(int i = 0; i < N ;++i)
	{
		if(min1 < array[i] && min2 > array[i])
		{
			min2 = array[i];
		}
	}
	
	min3 = array[0];
	for(int i = 0; i < N ;++i)
	{
		if(array[i] > min1 && array[i] > min2 && min3 > array[i])
		{
			min3 = array[i];
		}
	}
	
	
	cout<<endl;
	
	cout << "The 3rd samllest element : " << min3 << endl;
	
	return 0;
	
}
