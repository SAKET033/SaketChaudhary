//Write a program in CPP to illustrate the concept of constructor(default, parameterized and copy constructor) and destructor taking class complex as an example.

#include<iostream>
using namespace std;
class complex
{
    int real;
    float image;
public:
    complex()
    {
        real=0;
        image=0.0;


    }
    complex(int r,float i)

    {
        real=r;
        image=i;

    }
    complex(complex &b)
    {
        real=b.real;
        image=b.image;
    }

    ~complex()
    {

    }



        void showdata()
        {
            cout<<real<<"+i"<<image<<endl;
        }



};
int main()
{
    complex c1,c2(2,3.5),c3(4,5.3);
    c1.showdata();
    c2.showdata();
    c3.showdata();
    return 0;
}
