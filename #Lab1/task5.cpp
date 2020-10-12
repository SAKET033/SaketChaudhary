//WAP in CPP to illustrate the concept of default arguments
#include <iostream>
using namespace std;
class sum
{
	int a;
	int b;
	public:
		void add(int a=40,int b=15)
		{
			int sum;
			sum = a+b;
			cout<<sum<<endl;

		}
};
int main()
{
	sum s1,s2,s3;
	s1.add();
	s2.add(2);
	s3.add(3,6);
	return 0;
}

