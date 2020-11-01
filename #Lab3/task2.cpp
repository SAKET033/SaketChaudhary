//Write a program in CPP to overload unary ++ for postfix and prefix increment operation on complex numbers using member function

#include<iostream>
using namespace std;
class complex
{
    float real;
    float image;
public:
    complex()
    {
        real=0.0;
        image=0.0;
    }
    complex(float r,float i)
    {
        real=r;
        image=i;

    }

    void showdata()
{
    cout<<real<<"+i"<<image<<endl;
}
friend complex operator ++(complex &);
friend complex operator ++(complex &,int);
};
complex operator ++(complex &b) // for prefix
    {
        complex temp;
        temp.real=++b.real;
        temp.image=++b.image;
        return temp;
    }
    complex operator ++(complex &b,int) // for postfix
    {
        complex temp;
        temp.real=b.real++;
        temp.image=b.image++;
        return temp;
    }
int main()
{
    complex b1(1.5,3),b2(2.5,4.5),b3;
    b2=++b1;              //b2=b1.operator++();
    b3=b2++;              //b3=b2.operator++(int);
    b1.showdata();
    b2.showdata();
    b3.showdata();
    return 0;

}

