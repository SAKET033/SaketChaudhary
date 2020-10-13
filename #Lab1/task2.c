//WAP in C to input the name, roll, marks and address of n students entered by the user and display the entered details using the concept of structure.
#include <stdio.h>

struct student{
  char name[30];
  int roll;
  int marks;
  char address[20];
}s[48];

int main(){
  int n,i;
  printf("Enter the number of students you want to enter\n");
  scanf("%d",&n);
  for(i=0; i<n; i++) {
  printf("Enter the name, address, roll, marks of the student\n",i+1);
  scanf("%s%s%d%d",s[i].name,s[i].address,&s[i].roll,&s[i].marks);
  };
  for(i=0; i<n; ++i) {
  printf("The details of students are:\n");
  printf("Name:%s, Address:%s, Roll:%d, Marks:%d \n",s[i].name,s[i].address,s[i].roll,s[i].marks);
  };
};

