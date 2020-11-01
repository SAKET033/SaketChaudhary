//Write a program in CPP to find the sum of two complex numbers using the concept of the overloading binary + operator using non-member/friend function.

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
    friend complex operator +(complex ,complex );


};
 complex operator +(complex bb1,complex bb2)
{
    complex temp;
    temp.real=bb1.real+bb2.real;
    temp.image=bb1.image+bb2.image;
    return temp;
}
int main()
{
    complex c1(1,2),c2(4.5,6.2),c3;
    c3=c1+c2;   //c3=c1.operator +(c2)
    c3.showdata();
    return 0;
}

