//WAP in CPP to illustrate the concept of inline function
#include <iostream>

using namespace std;

inline int Max(int x, int y)
{
	cout<<"Entered numbers are :"<<x<<y;
	if(x>y)
	{
		return x;
	}
	else
	{
		return y;
	}

}
int main()
{
	int a[20],n;
	int r,s;
	cout<<"Enter how many time the number to be check:"<<endl;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cout<<"Enter x and y:"<<endl;
		cin>>r>>s;
		a[i]=max(r,s);
		cout<<"Max value is : "<<a[i]<<endl;

	}


   return 0;
}

