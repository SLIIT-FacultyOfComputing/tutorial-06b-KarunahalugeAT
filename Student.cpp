#include "Student.h"
#include "string.h"
#include <iostream>
using namespace std;

// Assign studentId and name
void Student::assignDetails(int stdId,char n1[]) {
  studentId=stdId;
  strcpy(name,n1);
}

// Display StudentId and Name
void Student::display() {
  cout<<"Student ID : "<<studentId<<endl;
  cout<<"Name :"<<name<<endl;
}
