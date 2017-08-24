#include<iostream>

using namespace std;

int main()
{
	int fact=1;
	int i,n;
	cout<<"Enter the number:"<<endl;
	cin>>n;
	for(i=n;i>=n;i--)
	{
		fact = fact * i;
	}

	cout<<"FACTORIAL IS "<<fact;
}