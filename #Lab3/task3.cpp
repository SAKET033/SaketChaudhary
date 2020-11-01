#include<iostream>
using namespace std;
class complex
{
private:
    float real;
    float image;
    public:
    complex() //difault constructor
    {
        real=0.0;
        image=0.0;
    }
    complex(float r,float i)  // parametrize conctructur
    {
        real=r;
        image=i;
    }
    complex operator +(complex c)
    {
        complex temp;
        temp.real=real+c.real;
        temp.image=image+c.image;
        return temp;
    }
     void showdata()
     {
         cout<<real<<"+i"<<image<<endl;
     }
};
int main()
{
    complex c1(1,3),c2(2.5,5.3),c3;
    c3=c1+c2;     //c3=c1.operator + (c2)
    c3.showdata();
    return 0;
    }
