//Write a program in CPP to find the sum of two complex numbers using the OOP concept.

#include<iostream>
using namespace std;
class complex
{
    float real;
    float image;
public:
    void getdata()
    {
        cin>>real>>image;
    }
    void showdata()
    {
        cout<<real<<"+i"<<image<<endl;
    }
    complex add(complex cc1,complex cc2)
    {
        complex temp;
        temp.real=cc1.real+cc2.real;
        temp.image=cc1.image+cc2.image;
        return temp;
    }
};
int main()
{
    complex c1,c2,c3;
    cout<<"enter first complex number:"<<endl;
    c1.getdata();
    cout<<"enter second complex number:"<<endl;
    c2.getdata();
    c3=c3.add(c1,c2);
    c3.showdata();
    return 0;
}
