#include<iostream>
using namespace std;

int main()
{
	int N,min,max = 0;
	double ele;
	
	
	cout << "Enter The Value : ";
	cin >> N;
	
	min = N;
	
	
	for(int i = 1; i <= N ;++i)
	{
		cout << "Enter the Element : ";
		cin >> ele;
		
		if(max < ele)
		{
			max = ele;
		}
		
		if(min > ele)
		{
			min = ele;
		}
    }
    
    if(N=1)
	{
		min = ele;
	}
		

	
	
	cout<<endl;
	
	cout << "The samllest element : " << min << endl;
	cout << "The largest element : " << max << endl;
	
	return 0;
	
}
