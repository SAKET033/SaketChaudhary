//WAP in C to input the name, roll, marks and address of n students entered by the user and display the entered details using the concept of structure.
#include <stdio.h>

struct student{
  char name[20];
  int roll;
  int marks;
  char address[20];
}s[48];

int main(){
  int n,i;
  printf("Enter to no of students you want to enter\n");
  scanf("%d",&n);
  for(i=0; i<n; ++i) {
  printf("enter the details of student in format name,address,roll,marks\n",i+1);
  scanf("%s%s%d%d",s[i].name,s[i].address,&s[i].roll,&s[i].marks);
  };
  for(i=0; i<n; ++i) {
  printf("The details of students are:\n");
  printf("Name:%s, Address:%s, Roll:%d, Marks:%d \n",s[i].name,s[i].address,s[i].roll,s[i].marks);
  };
};

