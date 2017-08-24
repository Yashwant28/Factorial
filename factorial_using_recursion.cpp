#include<iostream>
using namespace std;

int fact(int n)
{
    if(n==1)
    {
        return 1;
    }
    else
    {
        return n*fact(n-1);
    }
}

int main()
{
    int num;
    cout<<"enter the number for which you want to find factorial : ";
    cin>>num;
    cout<<"Factorial of "<<num<<" is "; 
    cout<<fact(num);
    cout<<endl;
    return 0;
   
}
