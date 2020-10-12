//Write a program in CPP to input the name, roll, marks and address of n students from the user and display the entered details using the concept of class and objects.

#include<iostream>
using namespace std;
class students
{
    char name[40];
    int roll;
    float marks;
    char address[30];
public:
    void getdetail()
    {
        cout<<"Enter the name,roll,marks and address of the student:"<<endl;
        cin>>name>>roll>>marks>>address;
    }
    void showdetail()
    {
        cout<<"The detail of the student is :"<<endl;
        cout<<"The name of the student is :"<<name<<endl<<"Roll no :"<<roll<<endl<<"Marks is :"<<marks<<endl<<"Address is :"<<address<<endl;
    }
};
int main()
{
    students s[48];
    int n;
    cout<<"Enter the no. of students :";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        s[i].getdetail();
        s[i].showdetail();
    }
    return 0;
}

