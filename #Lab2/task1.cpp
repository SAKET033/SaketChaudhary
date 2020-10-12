//Write a program in CPP to input the name, roll, marks and address of a student from the user and display the entered details using the concept of class and object

#include<iostream>
using namespace std;

class student
{
    char name[15];
    int roll;
    float marks;
    char address[20];
public:
    void getdetail()
    {
        cout<<"Enter the name,roll,marks and address of a student:"<<endl;
        cin>>name>>roll>>marks>>address;
    }
    void showdetail()
    {
        cout<<"The details of the student is:"<<endl;
        cout<<"The name of student is  :"<<name<<endl<<"Roll no. :"<<roll<<endl<<"Marks is  :"<<marks<<endl<<"Address of the student is  :"<<address<<endl <<endl;

    }

};
int main()
{
    student a,b,c;
    a.getdetail();
    a.showdetail();
    b.getdetail();
    b.showdetail();
    return 0;
}
